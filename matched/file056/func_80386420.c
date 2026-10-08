#include "common.h"

struct func_80386420_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386420_StructOuter {
    u8 pad0[0x30];
    struct func_80386420_StructInner *unk30;
};

struct func_80386420_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
};

extern f64 D_80389CE8;
void func_80005700(void);

void func_80386420(struct func_80386420_StructArg0 *arg0, struct func_80386420_StructOuter **arg1) {
    u16 temp_a2;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_a2 + 1);
    (*arg1)->unk30->unk18 = (f32) ((f64) (*arg1)->unk30->unk18 + D_80389CE8);
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk18;
    if (temp_a2 < 4) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x3C;
        return;
    }
    if (temp_a2 >= 5) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}
