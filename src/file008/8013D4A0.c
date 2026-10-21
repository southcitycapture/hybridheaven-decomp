#include "common.h"

typedef struct func_8013D4A0_Struct { u8 pad[0x337]; u8 a[1]; } func_8013D4A0_Struct;
s32 func_80126944(u8, u8);
extern func_8013D4A0_Struct D_801BC03C[];
extern func_8013D4A0_Struct D_801BC3D8[];
extern u8 D_8017E000[];

u8 func_8013D4A0(arg0, arg1)
u8 arg0;
u8 arg1;
{
    func_8013D4A0_Struct *p;
    if (arg1 == 0) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (func_80126944(arg0, arg1) == 1) {
        return p->a[arg0] & 0x7F;
    }
    return D_8017E000[arg0 * 8];
}


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


typedef struct func_8013D5F4_Struct {
    s32 *ptr;
    s32 pad;
} func_8013D5F4_Struct;

extern func_8013D5F4_Struct D_8017DFFC[];

s32 func_8013D5F4(u8 arg0) {
    return *D_8017DFFC[arg0].ptr;
}

