#include "context.h"
void func_80363204(void *arg0, s32 arg1);

typedef struct func_80363018_Struct4 {
    u8 b[4];
} func_80363018_Struct4;

extern func_80363018_Struct4 D_80386438;

void func_80363018(void *arg0, s32 arg1) {
    s32 sp44;
    u8 *t0;
    func_8035F544_Copy sp34;
    func_80363018_Struct4 sp30;
    u32 w;

    sp44 = *(s32 *)((u8 *)arg0 + 0x5C);
    if ((u8 *)arg0 == *(u8 **)(D_801BBBF0 + 0xDC)) {
        t0 = D_801BC03C;
    } else {
        t0 = D_801BC3D8;
    }
    sp30 = D_80386438;
    if (*(s16 *)(t0 + 2) <= 0 || ((*(u32 *)(t0 + 0x30) * 2) >> 30) != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        if ((*(u16 *)(t0 + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        t0[0x32] = (t0[0x32] & 0xFFFC) | 1;
        t0[0x32] = (t0[0x32] & 0x1F) | 0x20;
        func_80224AC4(arg0, 0, arg1, &sp30);
        w = *(u32 *)(t0 + 0x30);
        {
            extern void func_802256E4();
            if (((w << 9) >> 30) == 3) {
                func_802256E4(&sp34, arg0, sp30.b[((w << 20) >> 30) ^ 1], &sp30);
            } else {
                func_802256E4(&sp34, arg0, sp30.b[(w << 20) >> 30], &sp30);
            }
        }
        if (func_80011140(arg1, sp44, sp34, 3) != 0) {
            func_800058DC(arg0, func_80363204);
        }
        t0[0x392] = 0;
    }
}
