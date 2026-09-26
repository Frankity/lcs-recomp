"""Adds trace points for the multiplayer code to the generated code in lcs/generated.

Like apply_menu_hooks.py, this edits the generated units (which are not part of the repository).
Each hook calls lcs_net_trace (lcs_adhoc.cpp), which writes to the LCSNative_net_<port>.log file
only while the network emulation is running. The traced functions are the game's debug print
functions (their text shows what the game is doing) and its "multiplayer connection error" handler
(the return address says which check aborted the session).

    python lcs/scripts/apply_net_trace_hooks.py

It can be run again after a point is added to the table.
"""
import os

GEN = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'generated') + os.sep

# unit file -> {label address: description}
POINTS = {
    'generated_unit_0179.cpp': {'08AD1258': 'connection error handler', '08AD0690': 'multiplayer debug print'},
    'generated_unit_0040.cpp': {'088A6FEC': 'multigame debug print'},
    'generated_unit_0009.cpp': {'0882B86C': 'network debug print'},
    'generated_unit_0026.cpp': {'0886D0E8': 'net session debug print'},
    'generated_unit_0128.cpp': {'08A07DB0': 'adhoc debug print'},
    'generated_unit_0091.cpp': {'08973F5C': 'socket debug print'},
    'generated_unit_0129.cpp': {'08A0A6C0': 'adhoc error report'},
    'generated_unit_0042.cpp': {'088AF290': 'peer timeout check'},
}

for name, labels in POINTS.items():
    path = GEN + name
    s = open(path, encoding='utf-8', newline='').read()
    crlf = '\r\n' in s
    s = s.replace('\r\n', '\n')
    for address in labels:
        label = 'L_%s:\n' % address
        assert s.count(label) == 1, (name, label, s.count(label))
        call = '    lcs::lcs_net_trace(rt.memory(), ctx, 0x%su);\n' % address
        if label + call not in s:  # safe to run again after adding a point
            s = s.replace(label, label + call)
    if '#include "lcs_adhoc.hpp"' not in s:
        s = s.replace('#include "generated_units.hpp"\n', '#include "generated_units.hpp"\n#include "lcs_adhoc.hpp"\n', 1)
        assert '#include "lcs_adhoc.hpp"' in s, name
    if crlf:
        s = s.replace('\n', '\r\n')
    open(path, 'w', encoding='utf-8', newline='').write(s)
print('net trace hooks applied')
