#include "context.h"

s32 func_801E8A04(s32 arg0, s32 arg1) {
    if (D_801EBD88 == 0) goto c0;
    if (D_801EBD88 == 1) goto c1;
    if (D_801EBD88 == 2) goto c2;
    if (D_801EBD88 == 3) goto c3;
    return 0xD;
c0:
    func_801CC4D8(2, 0x0320001D, 0, 0, 30.0f);
    D_801EBD88 = 1;
    goto out;
c1:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001D, 0, 0, 3.0f);
        D_801EBD88 = 2;
    }
    goto out;
c2:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x0320001E, 0, 0, 3.0f);
        D_801EBD88 = 3;
    }
    goto out;
c3:
    if (func_801D2C10() != 0) {
        return 0xE;
    }
out:
    return 0xD;
}
