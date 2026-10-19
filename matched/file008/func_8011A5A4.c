#include "context.h"

typedef struct func_8011A5A4_Inner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x10];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44, unk48, unk4C, unk50;
} func_8011A5A4_Inner;
typedef struct func_8011A5A4_Mid {
    u8 pad0[0x2C];
    func_8011A5A4_Inner *unk2C;
} func_8011A5A4_Mid;
typedef struct func_8011A5A4_Struct {
    u8 pad0[0xE8];
    func_8011A5A4_Mid *unkE8;
    u8 pad1[0x2B8 - 0xEC];
    f32 unk2B8;
    u8 pad2[4];
    s32 unk2C0;
    u8 pad3[0x2CC - 0x2C4];
    f32 unk2CC;
    u8 pad4[0x2D8 - 0x2D0];
    f32 unk2D8;
    u8 pad5[0x2E0 - 0x2DC];
    f32 unk2E0;
    u8 pad6[4];
    s32 unk2E8;
    u8 pad7[0x2F4 - 0x2EC];
    f32 unk2F4;
    u8 pad8[0x300 - 0x2F8];
    f32 unk300;
    u8 pad9[4];
    s32 unk308;
    u8 padA[4];
    s32 unk310;
    u8 padB[4];
    s16 unk318;
    s16 unk31A;
    s16 unk31C;
} func_8011A5A4_Struct;

extern s8 func_80119C20(f32 *, f32 *, f32 *, s32, f32, f32, f32);
extern s8 func_80119D38(f32 *, s32, s32);
extern s8 func_80119E24(f32 *, f32 *, f32 *, s16, s32);

#define g ((func_8011A5A4_Struct *)&D_801BBBF0)
s8 func_8011A5A4(void) {
    s8 a, b, c, d;
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;

    d = 0;
    f0 = g->unkE8->unk2C->unk30;
    f1 = g->unkE8->unk2C->unk34;
    f2 = g->unkE8->unk2C->unk38;
    a = func_80119C20(&f0, &f1, &f2, g->unk2C0, g->unk2CC, g->unk2D8, g->unk2B8);
    f3 = g->unkE8->unk2C->unk3C;
    f4 = g->unkE8->unk2C->unk40;
    f5 = g->unkE8->unk2C->unk44;
    b = func_80119C20(&f3, &f4, &f5, g->unk2E8, g->unk2F4, g->unk300, g->unk2E0);
    f6 = g->unkE8->unk2C->unk1C;
    c = func_80119D38(&f6, g->unk310, g->unk308);
    if (g->unk318 != -1 && g->unk31C != -1) {
        f7 = g->unkE8->unk2C->unk48;
        f8 = g->unkE8->unk2C->unk4C;
        f9 = g->unkE8->unk2C->unk50;
        d = func_80119E24(&f7, &f8, &f9, g->unk31C, g->unk318);
    }
    return a | b | c | d;
}
