#include "context.h"

s32 func_801EE36C(s32 arg0, s32 arg1) {
    s32 v = D_801F362C;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 0x1F;
c0:
    func_801CC4D8(2, 0x0320004D, 0, 0, 3.0f);
    D_801F362C = 1;
    goto end;
c1:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x0320004D, 0, 0, 4.0f);
        D_801F362C = 2;
    }
    goto end;
c2:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        func_801CC4D8(2, 0x03200051, 0, 0, 3.0f);
        D_801F362C = 3;
    }
    goto end;
c3:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200051, 0, 0x100, 6.0f);
        return 0x20;
    }
end:
    return 0x1F;
}
