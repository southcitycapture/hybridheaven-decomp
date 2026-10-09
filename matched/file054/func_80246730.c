#include "context.h"

struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};

extern void func_8012FE50(s32, u16, s32, s32, s32);
extern struct func_80246730_Struct D_801BBBF0;

void func_80246730(void) {
    u16 var;
    s32 five;

    five = 2;
    if (D_801BBBF0.unk34D == 0) {
        D_801BBBF0.unk3A6 = 0xF;
        D_801BBBF0.unk3A7 = 2;
        D_801BBBF0.unk4 = 0x4B;
        func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, five);
        return;
    }
    D_801BBBF0.unk4 = 0xC2;
    func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, 0);
}
