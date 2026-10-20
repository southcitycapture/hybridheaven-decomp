#include "context.h"

s32 func_801E48F0(s32 arg0, s32 arg1) {
    s32 v = D_801E6A58;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 6;
c0:
    func_801CC4D8(0, 0x0410002B, 0, 0, 8.0f);
    D_801E6A58 = 1;
    goto end;
c1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0410002B, 0, 0, 5.0f);
        D_801E6A58 = 2;
    }
    goto end;
c2:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0410002E, 0, 0, 8.0f);
        D_801E6A58 = 3;
    }
    goto end;
c3:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0410002E, 0, 0, 4.0f);
        return 7;
    }
end:
    return 6;
}
