#include "context.h"

struct func_803846EC_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_803846EC_StructInner {
    u8 pad[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803846EC_StructOuter {
    u8 pad[0x30];
    struct func_803846EC_StructInner *unk30;
};

extern f64 D_80389BF8;

void func_803846EC(struct func_803846EC_StructArg0 *arg0, struct func_803846EC_StructOuter **arg1) {
    u16 temp_a3;
    struct func_803846EC_StructInner *temp_v0;

    temp_a3 = arg0->unk3C;
    arg0->unk3C = temp_a3 + 1;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + D_80389BF8);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = temp_v0->unk18;
    if ((s32) temp_a3 < 4) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B += 0x3C;
        return;
    }
    if ((s32) temp_a3 >= 5) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B -= 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}
