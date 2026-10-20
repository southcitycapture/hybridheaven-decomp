#include "context.h"

typedef struct func_80384948_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384948_Struct;
extern u8 D_800892B0[];
extern u8 D_8038CB1C[];
extern void func_8001B204();

void func_80384948(func_80384948_Struct *arg0, s32 arg1) {
    s8 i;
    s32 t;

    if (arg0->unkB0-- == 0 ||
        (((*(u16 *)(D_800892B0 + 0x1C6) & 0x8000) || (*(u16 *)(D_800892B0 + 0x1C6) & 0x2000)) && (arg0->unkA9 % 4)) ||
        (((*(u16 *)(D_800892B0 + 0x1C8) & 0x8000) || (*(u16 *)(D_800892B0 + 0x1C8) & 0x2000)) && !(arg0->unkA9 % 4))) {
        arg0->unkA9 += 1;
        t = arg0->unkA9;
        if (t < D_80240730[0x20]) {
            i = 4;
            if ((t % 5) == 0) {
                do {
                    func_8001B204((u8)i, 0, 0, D_8038CB1C);
                    func_80006088(((s32 *)arg1)[i + 2]);
                    i--;
                } while (i >= 0);
            }
            func_800058DC(arg0, func_8038481C);
            return;
        }
        arg0->unkB0 = 0xC8;
        func_800058DC(arg0, func_80384AB4);
    }
}
