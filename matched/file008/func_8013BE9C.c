#include "context.h"

struct func_8013BE9C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[6];
    u8 unk3E;
    u8 pad3[0xD];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};

void func_8013BE9C(struct func_8013BE9C_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0x3E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    arg0->unk54 = arg0->unk54 | 0xE1;
    func_8013B570(arg0, arg0->unk36, 2, 2, 0);
}
