#include "context.h"

typedef struct func_8037ADF8_Struct {
    u8 pad[0xA4];
    s16 unkA4;
    s16 unkA6;
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
} func_8037ADF8_Struct;

extern void func_8037AD08(void *, s16, s16, s32, s8 *);
extern void func_8037AED8();

void func_8037ADF8(func_8037ADF8_Struct *arg0, s32 arg1) {
    s16 pad;
    s8 sp2D;
    u8 *var_v0;

    sp2D = 0;
    if (arg0->unkA8 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (((u32) (*(u32 *)(var_v0 + 0x30) << 11) >> 30) != 0) {
        if (var_v0 == D_801BBBF0 + 0x44C) {
            arg0->unkA4 = 0xDC, arg0->unkA6 = 0xE;
        } else if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) ||
                   (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            arg0->unkA4 = 0x50;
            arg0->unkA6 = 0xAC;
        } else {
            arg0->unkA4 = 0x10E, arg0->unkA6 = 0xB6;
        }
        func_8037AD08(arg0, arg0->unkA4, arg0->unkA6, 0, &sp2D);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037AED8);
    }
}
