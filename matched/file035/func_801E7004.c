#include "context.h"
extern void D_801CEE68(s32);

s32 func_801E7004(s32 arg0, s32 arg1) {
    s32 v = D_801E8718;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto end;
    goto end;
c0:
    if (func_801C0B8C(0x02EDB713) != 0) {
        func_801CC470(2, 0x02A80061, 0, 0, 3.0f);
        D_801E8718 = 1;
    }
    goto end;
c1:
    if (func_801CEDE4() != 0) {
        func_801CC470(2, 0x02A80062, 0, 0, 3.0f);
        D_801CEE68(1);
        D_801E8718 = 2;
    }
    goto end;
c2:
    if (func_801CEDE4() != 0) {
        func_801CC470(2, 0x02A80063, 0, 0x100, 3.0f);
        D_801E8718 = 3;
    }
end:
    return 9;
}
