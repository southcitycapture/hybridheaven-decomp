#include "context.h"

struct func_801CFCA0_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad1[0x94 - 0x7B];
    u8 unk94;
};

struct func_801CFCA0_Inner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad1[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801CFCA0_Outer {
    u8 pad0[0x30];
    struct func_801CFCA0_Inner *unk30;
};

extern void func_801CFD44(void);
extern f64 D_801E35A8;

void func_801CFCA0(struct func_801CFCA0_Struct *arg0, struct func_801CFCA0_Outer **arg1) {
    f32 temp_fv0;
    s8 sp2B;
    struct func_801CFCA0_Inner *temp_v0;

    sp2B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = 0x800;
        temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * D_801E35A8);
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        temp_v0->unk18 = temp_fv0;
        func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0x3F4CCCCD);
        func_800058DC(arg0, (s32) func_801CFD44);
    }
}
