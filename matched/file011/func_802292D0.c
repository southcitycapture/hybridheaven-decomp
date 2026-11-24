#include "common.h"


typedef struct func_802292D0_StructArg0 {
    u8 pad0[2];
    u16 unk2;
} func_802292D0_StructArg0;

typedef struct func_802292D0_StructArg1 {
    u8 pad0[0x2D9];
    u8 unk2D9;
    u8 pad1[0x332 - 0x2DA];
    u8 unk332;
} func_802292D0_StructArg1;

typedef struct func_802292D0_StructRecord { u8 value; u8 pad[27]; } func_802292D0_StructRecord;
extern func_802292D0_StructRecord D_801842A9[];

void func_802292D0(func_802292D0_StructArg0 *arg0, func_802292D0_StructArg1 *arg1) {
    u8 raw;
    s32 k;
    s32 t;
    s32 one;
    u32 b;
    u32 a;

    a = 0;
    b = 0;
    raw = arg1->unk2D9;
    k = raw;
    if (k < 0x25) {
        if (k >= 0xE) {
            b = 1;
        }
        t = D_801842A9[raw].value;
        one = 1;
        if (one == (t | 0) || t == 3) {
            a = 1;
        }
        t = arg1->unk332;
        switch (t) {
            case 0:
                break;
            case 1:
                a = (a ^ 1) & 0xFF;
                break;
            case 2:
                b = (b ^ 1) & 0xFF;
                break;
            case 3:
                a ^= 1;
                b = (b ^ 1) & 0xFF;
                a &= 0xFF;
                break;
        }
        arg0->unk2 = 0x20;
        if (a != 0 && b == 0) {
            arg0->unk2 |= 8;
            return;
        }
        if (a == 0 && b == 0) {
            arg0->unk2 |= 1;
            return;
        }
        if (a != 0 && b != 0) {
            arg0->unk2 |= 2;
            return;
        }
        if (a == 0 && b != 0) {
            arg0->unk2 |= 4;
        }
    }
}
