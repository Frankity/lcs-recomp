param(
    [Parameter(Mandatory = $true)][string]$Executable
)

$ErrorActionPreference = 'Stop'

if (-not (Test-Path -LiteralPath $Executable)) { exit 0 }

$stamp = (Get-Item -LiteralPath $Executable).LastWriteTime
$directory = Split-Path -Parent $Executable

Get-ChildItem -LiteralPath $directory -File | ForEach-Object {
    if ($_.FullName -ne $Executable) {
        try { $_.LastWriteTime = $stamp } catch { }
    }
}
