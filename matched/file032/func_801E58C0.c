#include "context.h"
extern s32 func_801D2C00();
extern s32 func_801D2C10();

s32 func_801E58C0(s32 arg0, s32 arg1) {
    s32 v = D_801EADAC;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 0x13;
c0:
    func_801CC4D8(2, 0x03200027, 0, 0, 30.0f);
    D_801EADAC = 1;
    goto done;
c1:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x03200027, 0, 0, 6.0f);
        D_801EADAC = 2;
    }
    goto done;
c2:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
        D_801EADAC = 3;
    }
    goto done;
c3:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 0x14;
    }
done:
    return 0x13;
}
