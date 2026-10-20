#include "context.h"

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 func_80242C3C[];
extern u8 D_80258490[];
extern u8 D_80252244[];
extern f32 D_80258604;
extern f32 D_80258608;
extern f32 D_8025860C;
extern f32 D_80258610;

typedef struct func_80242B14_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242B14_Struct;

typedef struct func_80242B14_StructG {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80242B14_StructG;

void func_80242B14(func_80242B14_Struct *arg0, s32 arg1) {
    func_80242B14_StructG *g;
    s32 t = arg0->unk5C;

    if (func_80010550(arg1, t, arg1) != 0) {
        if (func_800178E8() != 0) {
            g = (func_80242B14_StructG *)&D_801BBBF0;
            g->unk1E8 = D_80258604;
            g->unk1EC = D_80258608;
            g->unk1F0 = D_8025860C;
            g->unk1F4 = -61.5f;
            g->unk1F8 = 16.5f;
            g->unk1FC = D_80258610;
            func_8011AAF4(D_80258490, 0x3AD, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80252244);
            func_800058DC(arg0, func_80242C3C);
        }
    }
}
