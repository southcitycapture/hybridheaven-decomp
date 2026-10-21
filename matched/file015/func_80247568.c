#include "context.h"

extern void func_8024763C();
typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad2[0x1E]; s32 unk5C; } func_80247568_Struct;

void func_80247568(func_80247568_Struct *arg0, s32 arg1) {
    s32 sp1C;
    s32 t;

    sp1C = arg0->unk5C;
    if (D_801BBCD8->unk2C->unk38 < 500.0f) {
        t = arg0->h3C++;
        if (t == 0x2A || t == 0x36 || t == 0x48) {
            func_80020718(0x1B7);
        }
    }
    if (func_80010550(arg1, sp1C) != 0) {
        func_80011198(arg1, sp1C);
        func_800058DC(arg0, func_8024763C);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    } else {
    }
}
