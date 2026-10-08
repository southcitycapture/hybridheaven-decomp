#include "context.h"

struct func_80383490_StructArg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_80383490_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x10];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80383490_StructOuter {
    u8 pad0[0x30];
    struct func_80383490_StructInner *unk30;
};

extern f64 D_80389B78;

void func_80383490(struct func_80383490_StructArg0 *arg0, struct func_80383490_StructOuter **arg1) {
    struct func_80383490_StructInner *temp_v0;

    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 + D_80389B78);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 6);
    if ((s32) (*arg1)->unk30->unk4B < 6) {
        func_80005700();
    }
}
