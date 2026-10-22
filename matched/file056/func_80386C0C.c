#include "context.h"

extern f32 func_8001EAD0(s16);

struct func_80386C0C_In {
    u8 pad0[8];
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
};
struct func_80386C0C_Out {
    u8 pad0[0x30];
    struct func_80386C0C_In *unk30;
};
struct func_80386C0C_A {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5A];
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
};

void func_80386C0C(struct func_80386C0C_A *arg0, struct func_80386C0C_Out **arg1) {
    s32 a;
    a = arg0->unk3C++;
    (*arg1)->unk30->unk8 = func_8001EB64(arg0->unkA0) * (f32)(0xE - a) * (f64)1.0f + arg0->unk98;
    (*arg1)->unk30->unkC = func_8001EAD0(arg0->unkA0) * (f32)(0xE - a) * (f64)1.0f + arg0->unk9C;
    if (a < 4) {
        (*arg1)->unk30->unk4B += 0x3C;
        return;
    }
    if (0xE - a < 0xA) {
        (*arg1)->unk30->unk4B -= 0x18;
        if ((*arg1)->unk30->unk4B < 0x18) {
            func_80005700(arg0);
        }
    }
}
