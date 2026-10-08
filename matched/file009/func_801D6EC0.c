#include "common.h"

struct func_801D6EC0_Inner {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_801D6EC0_Outer {
    u8 pad[0x2C];
    struct func_801D6EC0_Inner *unk2C;
};

struct func_801D6EC0_Obj {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
};

extern struct func_801D6EC0_Outer *D_801BBCD8;
extern u8 D_801E37B0[];

extern void func_8011AAF4(void *a0, s32 a1, void *a2, s32 a3, s32 a4, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, s32 a16, s32 a17);

s32 func_801D6EC0(struct func_801D6EC0_Obj *arg0, s32 arg1) {
    struct func_801D6EC0_Inner *temp_v0;
    f32 zero;

    zero = 0.0f;
    temp_v0 = D_801BBCD8->unk2C;
    func_8011AAF4(D_801E37B0, 0xC0, arg0, 0, 1, zero, D_801BBCD8->unk2C->unk30, temp_v0->unk34, temp_v0->unk38, zero, temp_v0->unk3C, temp_v0->unk40, temp_v0->unk44, zero, 35.0f, -1, -1);
    arg0->unk93 = 1;
    arg0->unk94 = zero;
    return 0;
}
