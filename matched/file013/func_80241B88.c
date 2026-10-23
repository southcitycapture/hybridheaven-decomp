#define LPX(a, b) a##b
#define LP(a, b) LPX(a, b)
#define func_80241200 LP(ctxA_, __LINE__)
#define func_80241E64 LP(ctxB_, __LINE__)
#include "context.h"
#undef func_80241200
#undef func_80241E64

typedef struct func_80241B88_Struct_Pos {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_80241B88_Struct_Pos;

typedef struct func_80241B88_Struct_G {
    u8 pad0[0x2C];
    func_80241B88_Struct_Pos *unk2C;
} func_80241B88_Struct_G;

typedef struct func_80241B88_Struct_C {
    u8 pad0[0x12];
    s16 unk12;
} func_80241B88_Struct_C;

typedef struct func_80241B88_Struct_B {
    u8 pad0[0x30];
    func_80241B88_Struct_C *unk30;
} func_80241B88_Struct_B;

typedef struct func_80241B88_Struct_A {
    u8 pad0[0x8];
    func_80241B88_Struct_B *unk8;
} func_80241B88_Struct_A;

typedef struct func_80241B88_Struct_Self {
    u8 pad0[0x94];
    s16 unk94;
} func_80241B88_Struct_Self;

extern func_80241B88_Struct_G *D_801BBCD0;
extern u8 D_80249A54[];
extern f32 D_80249AE0;
extern f32 D_80249AE4;
extern f32 D_80249AE8;

void func_80241B88(func_80241B88_Struct_Self *arg0, func_80241B88_Struct_A *arg1) {
    f32 dx;
    f32 dz;
    func_80241B88_Struct_Pos *pos;

    pos = D_801BBCD0->unk2C;
    dx = D_80249AE0 - pos->unk4;
    dz = 332.0f - pos->unkC;
    if (!((dx * dx) + (dz * dz) > 100.0f)) {
        if (func_8011AAF4(D_80249A54, 0x246, (s32)arg0, 0, 1, 0.0f, D_80249AE4, 25.0f, 294.0f, 0.0f, 672.0f, 22.0f, D_80249AE8, 0.0f, 35.0f, -1, -1) == 0) {
            arg0->unk94 = 0x12;
            arg1->unk8->unk30->unk12 = 0x1000;
            func_80020744(0x1BD);
            func_800058DC(arg0, func_80241CC8);
        }
    }
}
