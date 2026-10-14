#include "context.h"

extern u8 D_801BBBF0[];

struct func_803837A8_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_803837A8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x48 - 0x10];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803837A8_StructOuter {
    u8 pad0[0x30];
    struct func_803837A8_StructInner *unk30;
};

void func_803837A8(struct func_803837A8_StructArg0 *arg0, struct func_803837A8_StructOuter **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C != 1) {
        return;
    }
    goto case1;
case0:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 0x20);
    if ((s32) (*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
case1:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B - 0xA);
    if ((s32) (*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
}
