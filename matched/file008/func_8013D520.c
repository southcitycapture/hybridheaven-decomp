#include "context.h"

extern s32 D_80126944(u8);
extern s32 D_8013D4A0(u8, u8);
extern u8 D_8017E004[];

s32 func_8013D520(u8 arg0, s8 arg1, u8 arg2) {
    func_8013D4A0_Struct *p;

    if (arg2 == 0) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (D_80126944(arg0) == 1) {
        p->a[arg0] += arg1;
    } else {
        D_8017E004[arg0 * 8 - 4] += arg1;
        if (D_8013D4A0(arg0, arg2) >= 100) {
            D_8017E004[arg0 * 8 - 4] = 99;
            return 1;
        }
    }
    return 0;
}
