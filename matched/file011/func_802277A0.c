#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80228ABC LP(fA, __LINE__)
#include "context.h"
#undef func_80228ABC

typedef struct func_802277A0_Struct {
    u8 pad0[4];
    s16 unk4;
    u8 pad6[0x46];
    s16 unk4C;
} func_802277A0_Struct;

typedef struct func_802277A0_Ent {
    u8 pad[0x22];
    u8 unk22;
} func_802277A0_Ent;

extern void func_80020744(s32);
extern u8 D_802407D0[][5];
#define T2 ((u8 (*)[4])D_802407C8)

void func_802277A0(u8 *arg0, func_802277A0_Ent **arg1, func_802277A0_Struct *arg2) {
    s32 s7;
    u8 s5;
    u8 *sp54;
    u8 *sp50;
    u16 *sp4C;
    s8 i;

    if (arg2 == (func_802277A0_Struct *)(D_801BBBF0 + 0x44C)) {
        s7 = ((u8 *)&D_801BEC60)[0x22];
        sp54 = arg0 + 0x98;
        sp50 = arg0 + 0x9A;
        sp4C = (u16 *)(arg0 + 0x94);
        s5 = 0;
    } else {
        s7 = ((u8 *)&D_801BEC60)[0x23];
        sp54 = arg0 + 0x99;
        sp50 = arg0 + 0x9B;
        sp4C = (u16 *)(arg0 + 0x96);
        s5 = 1;
    }
    for (i = 0; i < 5; i++) {
    if (arg2->unk4C >= i * 0x64 + 0x64) {
        if (D_802407D0[s5][i] == 0) {
            if (s5 == 0) {
                func_80020744(0x3BE);
            } else if (s5 == 1 && (D_801BBC1C == 0xA || D_801BBC1C == 0xB)) {
                func_80020744(0x3BE);
            }
            D_802407D0[s5][i] = 1;
        }
    } else {
        D_802407D0[s5][i] = 0;
    }
    }
    for (i = 0; i < 4; i++) {
        if (i * 0x64 + 0x64 < arg2->unk4C) {
            if (T2[s5][i] == 0) {
                *sp4C = 0;
                *sp54 = 1;
                *sp50 = i;
            }
            T2[s5][i] = 1;
            if (arg2->unk4C < arg2->unk4) {
                if (s5 == 0) {
                    (arg1 + s7)[i]->unk22 = 1;
                } else {
                    (arg1 + s7)[i]->unk22 = func_802269CC();
                }
            }
        } else {
            T2[s5][i] = 0;
            (arg1 + s7)[i]->unk22 = 0;
        }
    }
    if (*sp54 == 1) {
        if (*sp4C < 0x28) {
            func_80227750((void *)(arg1 + *sp50)[s7]);
            return;
        }
        if (*sp4C >= 0x28) {
            func_801451C0((arg1 + *sp50)[s7], 3);
            *sp54 = 0;
        }
    }
}
