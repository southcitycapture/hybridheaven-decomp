#include "context.h"
extern void func_801D5938(s32);

s32 func_801E73E8(s32 arg0, s32 arg1) {
    s32 v = D_801F2DB4;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 0x30;
c0:
    func_801CC470(2, 0x03200040, 0, 0, 3.0f);
    D_801F2DB4 = 1;
    goto done;
c1:
    if (func_801D58EC() != 0) {
        func_801CC470(2, 0x03200041, 0, 0, 3.0f);
        D_801F2DB4 = 2;
    }
    goto done;
c2:
    if (func_801D58EC() != 0) {
        func_801CC4D8(2, 0x03200046, 0, 0, 30.0f);
        D_801F2DB4 = 3;
    }
    goto done;
c3:
    if (func_801D58DC() == 0) {
        func_801D5938(0);
        func_801CC470(2, 0x03200046, 0, 0x100, 6.0f);
        return 0x31;
    }
done:
    return 0x30;
}
