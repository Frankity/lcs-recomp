#include "lcs_dualsense.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <setupapi.h>
#include <hidsdi.h>
#include <hidpi.h>

#include <algorithm>
#include <atomic>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace lcs {
namespace {

constexpr USHORT kSonyVendorId = 0x054Cu;
constexpr USHORT kDualSensePid = 0x0CE6u;
constexpr USHORT kDualSenseEdgePid = 0x0DF2u;

constexpr USHORT kUsbReportBytes = 64u;
constexpr BYTE kReportUsb = 0x01u;
constexpr BYTE kReportBluetoothFull = 0x31u;
constexpr BYTE kFeatureCalibration = 0x05u;
constexpr DWORD kRescanIntervalMs = 1000u;
constexpr DWORD kReadTimeoutMs = 100u;

std::int16_t stick_axis(std::uint8_t raw, bool up_positive) noexcept {
    const int centered = up_positive ? 128 - static_cast<int>(raw) : static_cast<int>(raw) - 128;
    return static_cast<std::int16_t>(std::clamp(centered * 256, -32767, 32767));
}

void apply_buttons(GamepadState &pad, std::uint8_t face, std::uint8_t shoulder,
                   std::uint8_t misc) noexcept {
    namespace b = gamepad_button;
    switch (face & 0x0Fu) {
        case 0: pad.buttons |= b::kDpadUp; break;
        case 1: pad.buttons |= b::kDpadUp | b::kDpadRight; break;
        case 2: pad.buttons |= b::kDpadRight; break;
        case 3: pad.buttons |= b::kDpadDown | b::kDpadRight; break;
        case 4: pad.buttons |= b::kDpadDown; break;
        case 5: pad.buttons |= b::kDpadDown | b::kDpadLeft; break;
        case 6: pad.buttons |= b::kDpadLeft; break;
        case 7: pad.buttons |= b::kDpadUp | b::kDpadLeft; break;
        default: break;
    }
    if (face & 0x10u) pad.buttons |= b::kX;  // square
    if (face & 0x20u) pad.buttons |= b::kA;  // cross
    if (face & 0x40u) pad.buttons |= b::kB;  // circle
    if (face & 0x80u) pad.buttons |= b::kY;  // triangle
    if (shoulder & 0x01u) pad.buttons |= b::kLeftShoulder;
    if (shoulder & 0x02u) pad.buttons |= b::kRightShoulder;
    if (shoulder & 0x10u) pad.buttons |= b::kBack;   // create
    if (shoulder & 0x20u) pad.buttons |= b::kStart;  // options
    if (shoulder & 0x40u) pad.buttons |= b::kLeftThumb;
    if (shoulder & 0x80u) pad.buttons |= b::kRightThumb;
    if (misc & 0x02u) pad.buttons |= b::kBack;  // touchpad click
}

// Layout shared by the USB report (0x01) and the Bluetooth full report (0x31), which
// only differs by two header bytes. `base` points at the left stick X byte.
bool parse_full_report(const BYTE *data, std::size_t size, std::size_t base,
                       GamepadState &pad) noexcept {
    if (size < base + 10u) return false;
    pad = {};
    pad.lx = stick_axis(data[base + 0], false);
    pad.ly = stick_axis(data[base + 1], true);
    pad.rx = stick_axis(data[base + 2], false);
    pad.ry = stick_axis(data[base + 3], true);
    pad.left_trigger = data[base + 4];
    pad.right_trigger = data[base + 5];
    apply_buttons(pad, data[base + 7], data[base + 8], data[base + 9]);
    return true;
}

// Reduced Bluetooth report sent until the console-style feature report is requested.
bool parse_simple_report(const BYTE *data, std::size_t size, GamepadState &pad) noexcept {
    if (size < 10u) return false;
    pad = {};
    pad.lx = stick_axis(data[1], false);
    pad.ly = stick_axis(data[2], true);
    pad.rx = stick_axis(data[3], false);
    pad.ry = stick_axis(data[4], true);
    pad.left_trigger = data[8];
    pad.right_trigger = data[9];
    apply_buttons(pad, data[5], data[6], data[7]);
    return true;
}

HANDLE open_dualsense(USHORT &input_report_bytes) noexcept {
    GUID hid_guid{};
    HidD_GetHidGuid(&hid_guid);
    HDEVINFO devices = SetupDiGetClassDevsW(&hid_guid, nullptr, nullptr,
                                            DIGCF_PRESENT | DIGCF_DEVICEINTERFACE);
    if (devices == INVALID_HANDLE_VALUE) return INVALID_HANDLE_VALUE;

    HANDLE result = INVALID_HANDLE_VALUE;
    for (DWORD index = 0; result == INVALID_HANDLE_VALUE; ++index) {
        SP_DEVICE_INTERFACE_DATA interface_data{};
        interface_data.cbSize = sizeof(interface_data);
        if (!SetupDiEnumDeviceInterfaces(devices, nullptr, &hid_guid, index, &interface_data)) break;

        DWORD needed = 0;
        SetupDiGetDeviceInterfaceDetailW(devices, &interface_data, nullptr, 0, &needed, nullptr);
        if (needed == 0) continue;
        std::vector<BYTE> storage(needed);
        auto *detail = reinterpret_cast<SP_DEVICE_INTERFACE_DETAIL_DATA_W *>(storage.data());
        detail->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA_W);
        if (!SetupDiGetDeviceInterfaceDetailW(devices, &interface_data, detail, needed, nullptr,
                                              nullptr))
            continue;

        HANDLE probe = CreateFileW(detail->DevicePath, 0, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                   nullptr, OPEN_EXISTING, 0, nullptr);
        if (probe == INVALID_HANDLE_VALUE) continue;
        HIDD_ATTRIBUTES attributes{};
        attributes.Size = sizeof(attributes);
        const bool match = HidD_GetAttributes(probe, &attributes) &&
                           attributes.VendorID == kSonyVendorId &&
                           (attributes.ProductID == kDualSensePid ||
                            attributes.ProductID == kDualSenseEdgePid);
        CloseHandle(probe);
        if (!match) continue;

        HANDLE handle = CreateFileW(detail->DevicePath, GENERIC_READ | GENERIC_WRITE,
                                    FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING,
                                    FILE_FLAG_OVERLAPPED, nullptr);
        if (handle == INVALID_HANDLE_VALUE) continue;

        PHIDP_PREPARSED_DATA preparsed = nullptr;
        HIDP_CAPS caps{};
        const bool have_caps = HidD_GetPreparsedData(handle, &preparsed) &&
                               HidP_GetCaps(preparsed, &caps) == HIDP_STATUS_SUCCESS;
        if (preparsed != nullptr) HidD_FreePreparsedData(preparsed);
        if (!have_caps || caps.InputReportByteLength < 10u) {
            CloseHandle(handle);
            continue;
        }
        input_report_bytes = caps.InputReportByteLength;
        result = handle;
    }
    SetupDiDestroyDeviceInfoList(devices);
    return result;
}

class DualSenseReader {
public:
    ~DualSenseReader() { stop(); }

    void ensure_started() {
        std::call_once(started_, [this] { thread_ = std::thread([this] { run(); }); });
    }

    bool poll(GamepadState &out) {
        const std::lock_guard<std::mutex> guard(mutex_);
        if (!connected_) return false;
        out = state_;
        return true;
    }

    void stop() {
        stop_.store(true, std::memory_order_relaxed);
        if (thread_.joinable()) thread_.join();
    }

private:
    void publish(bool connected, const GamepadState &pad) {
        const std::lock_guard<std::mutex> guard(mutex_);
        connected_ = connected;
        state_ = pad;
    }

    void read_loop(HANDLE handle, USHORT report_bytes) {
        const bool bluetooth = report_bytes != kUsbReportBytes;
        if (bluetooth) {
            // Reading the calibration feature report makes the pad switch from the
            // reduced Bluetooth report to the full 0x31 one.
            BYTE feature[64]{};
            feature[0] = kFeatureCalibration;
            HidD_GetFeature(handle, feature, sizeof(feature));
        }

        std::vector<BYTE> buffer(report_bytes);
        OVERLAPPED overlapped{};
        overlapped.hEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
        if (overlapped.hEvent == nullptr) return;

        bool pending = false;
        while (!stop_.load(std::memory_order_relaxed)) {
            if (!pending) {
                ResetEvent(overlapped.hEvent);
                if (!ReadFile(handle, buffer.data(), static_cast<DWORD>(buffer.size()), nullptr,
                              &overlapped) &&
                    GetLastError() != ERROR_IO_PENDING)
                    break;
                pending = true;
            }
            const DWORD wait = WaitForSingleObject(overlapped.hEvent, kReadTimeoutMs);
            if (wait == WAIT_TIMEOUT) continue;
            if (wait != WAIT_OBJECT_0) break;
            DWORD received = 0;
            if (!GetOverlappedResult(handle, &overlapped, &received, FALSE)) {
                pending = false;
                break;
            }
            pending = false;

            GamepadState pad{};
            bool valid = false;
            if (received > 0) {
                if (buffer[0] == kReportUsb && !bluetooth)
                    valid = parse_full_report(buffer.data(), received, 1u, pad);
                else if (buffer[0] == kReportBluetoothFull)
                    valid = parse_full_report(buffer.data(), received, 2u, pad);
                else if (buffer[0] == kReportUsb)
                    valid = parse_simple_report(buffer.data(), received, pad);
            }
            if (valid) publish(true, pad);
        }

        if (pending) {
            CancelIoEx(handle, &overlapped);
            DWORD ignored = 0;
            GetOverlappedResult(handle, &overlapped, &ignored, TRUE);
        }
        CloseHandle(overlapped.hEvent);
    }

    void run() {
        while (!stop_.load(std::memory_order_relaxed)) {
            USHORT report_bytes = 0;
            HANDLE handle = open_dualsense(report_bytes);
            if (handle == INVALID_HANDLE_VALUE) {
                for (DWORD waited = 0;
                     waited < kRescanIntervalMs && !stop_.load(std::memory_order_relaxed);
                     waited += 50u)
                    Sleep(50u);
                continue;
            }
            read_loop(handle, report_bytes);
            CloseHandle(handle);
            publish(false, {});
        }
    }

    std::once_flag started_;
    std::thread thread_;
    std::atomic<bool> stop_{false};
    std::mutex mutex_;
    bool connected_{};
    GamepadState state_{};
};

DualSenseReader &reader() noexcept {
    static DualSenseReader instance;
    return instance;
}

}  // namespace

bool lcs_dualsense_poll(GamepadState &out) noexcept {
    DualSenseReader &r = reader();
    r.ensure_started();
    return r.poll(out);
}

void lcs_dualsense_shutdown() noexcept {
    reader().stop();
}

}  // namespace lcs
