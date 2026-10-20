#include "context.h"
/* starting point: func_801EDA2C (file033), whose assembly is 91% the same as this function's */

s32 func_801E5508(s32 arg0, s32 arg1) {
    s32 v = D_801E8480;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 0xB;
c0:
    func_801CC4D8(0, 0x01B8003C, 0, 0, 3.0f);
    D_801E8480 = 1;
    goto end;
c1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003C, 0, 0, 4.0f);
        D_801E8480 = 2;
    }
    goto end;
c2:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 3.0f);
        D_801E8480 = 3;
    }
    goto end;
c3:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 0xC;
    }
end:
    return 0xB;
}
