#include "context.h"

struct func_80241CC8_Struct_C {
    u8 pad[0xC];
    f32 unkC;
};

struct func_80241CC8_Struct_B {
    u8 pad[0x30];
    struct func_80241CC8_Struct_C *unk30;
};

struct func_80241CC8_Struct_A {
    u8 pad[0x8];
    struct func_80241CC8_Struct_B *unk8;
};

struct func_80241CC8_Struct_Self {
    u8 pad[0x94];
    s16 unk94;
};

extern s32 func_8012C89C(void *, s32, s32, s32);
extern s16 D_801BBD84;
extern f64 D_80249AF0;
extern void func_80241D7C(void);

void func_80241CC8(struct func_80241CC8_Struct_Self *arg0, struct func_80241CC8_Struct_A *arg1) {
    s16 temp_v1;
    struct func_80241CC8_Struct_C *temp_v0;

    temp_v0 = arg1->unk8->unk30;
    temp_v0->unkC = (f32) ((f64) temp_v0->unkC - D_80249AF0);
    temp_v1 = arg0->unk94;
    arg0->unk94 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg1->unk8->unk30->unkC = 342.0f;
        func_8012C89C(arg0, 0, 0x80, 6);
        func_8012C89C(arg0, 1, 0x80, 7);
        arg0->unk94 = 0x3F;
        D_801BBD84 = 1;
        func_800058DC(arg0, func_80241D7C);
    }
}
