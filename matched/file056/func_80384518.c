#include "context.h"

extern void func_80005700();
extern u8 D_801BBBF0[];
extern f64 D_80389BE8;
extern f64 D_80389BF0;

struct func_80384518_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad1[0x6A];
    u8 unkA8;
};
struct func_80384518_StructInner {
    u8 pad[0x12];
    s16 unk12;
    u8 pad1[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x24];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
};
struct func_80384518_StructOuter {
    u8 pad[0x30];
    struct func_80384518_StructInner *unk30;
};

void func_80384518(struct func_80384518_StructArg *arg0, struct func_80384518_StructOuter **arg1) {
    s32 temp_t0;
    s32 temp_a3;
    struct func_80384518_StructInner *temp_v0;

    temp_a3 = arg0->unk3C;
    temp_t0 = temp_a3 + 1;
    arg0->unk3C++;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk18 = 1.5 / ((f64) temp_t0 * 6.0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = temp_v0->unk18;
    (*arg1)->unk30->unk1C = (f64) (temp_a3 * temp_a3) * D_80389BE8 + D_80389BF0;
    if (arg0->unkA8 == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk12 = (s16)((arg0->unk3C * 20) + temp_v0->unk12) & 0x1FFF;
    } else {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 - (arg0->unk3C * 20)) & 0x1FFF;
    }
    if (temp_t0 < 9) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B += 0x10;
        return;
    }
    if (temp_t0 >= 0x2F) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B -= 4;
        if ((*arg1)->unk30->unk4B < 4) {
            func_80005700();
        }
    }
}
