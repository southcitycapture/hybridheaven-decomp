#include "context.h"

typedef struct func_8011A3D4_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8011A3D4_Inner;
typedef struct func_8011A3D4_Mid {
    u8 pad0[0x2C];
    func_8011A3D4_Inner *unk2C;
} func_8011A3D4_Mid;
typedef struct func_8011A3D4_Struct {
    u8 pad0[0xE8];
    func_8011A3D4_Mid *unkE8;
    u8 pad1[0x2B8 - 0xEC];
    f32 unk2B8;
    u8 pad2[0x2C0 - 0x2BC];
    s32 unk2C0;
    u8 pad3[0x2CC - 0x2C4];
    f32 unk2CC;
    u8 pad4[0x2D8 - 0x2D0];
    f32 unk2D8;
    u8 pad5[0x2E0 - 0x2DC];
    f32 unk2E0;
    u8 pad6[0x2E8 - 0x2E4];
    s32 unk2E8;
    u8 pad7[0x2F4 - 0x2EC];
    f32 unk2F4;
    u8 pad8[0x300 - 0x2F8];
    f32 unk300;
    u8 pad9[0x308 - 0x304];
    s32 unk308;
    u8 pad10[0x310 - 0x30C];
    s32 unk310;
    u8 pad11[0x318 - 0x314];
    s16 unk318;
    u8 padx[2];
    s16 unk31C;
    u8 pad12[0x324 - 0x31E];
    f32 unk324;
} func_8011A3D4_Struct;

extern s8 func_80119C20(void *, void *, void *, s32, f32, f32, f32);
extern s8 func_80119D38(void *, s32, s32);
extern s8 func_80119E24(void *, void *, void *, s16, s32);
extern f32 D_80163EE0;
#define g ((func_8011A3D4_Struct *)&D_801BBBF0)

s32 func_8011A3D4(void) {
    s8 sp47;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;

    sp44 = 0;
    g->unkE8->unk2C->unk34 = g->unkE8->unk2C->unk34 - D_80163EE0;
    g->unkE8->unk2C->unk40 = g->unkE8->unk2C->unk40 - D_80163EE0;
    func_8011A0F0((s32)&sp3E);
    sp47 = func_80119C20(&g->unkE8->unk2C->unk30, &g->unkE8->unk2C->unk34, &g->unkE8->unk2C->unk38, g->unk2C0, g->unk2CC, g->unk2D8, g->unk2B8);
    sp46 = func_80119C20(&g->unkE8->unk2C->unk3C, &g->unkE8->unk2C->unk40, &g->unkE8->unk2C->unk44, g->unk2E8, g->unk2F4, g->unk300, g->unk2E0);
    sp45 = func_80119D38((u8 *)g->unkE8->unk2C + 0x1C, g->unk310, g->unk308);
    func_80119F9C(&sp42, &sp40);
    func_8011A148(sp42, sp40, sp3E, (f32 *)((u8 *)g->unkE8->unk2C + 0x48), (f32 *)((u8 *)g->unkE8->unk2C + 0x4C), (f32 *)((u8 *)g->unkE8->unk2C + 0x50));
    if ((g->unk318 != -1) && (g->unk31C != -1)) {
        sp44 = func_80119E24((u8 *)g->unkE8->unk2C + 0x48, (u8 *)g->unkE8->unk2C + 0x4C, (u8 *)g->unkE8->unk2C + 0x50, g->unk31C, g->unk318);
    }
    g->unkE8->unk2C->unk34 = g->unkE8->unk2C->unk34 + g->unk324;
    g->unkE8->unk2C->unk40 = g->unkE8->unk2C->unk40 + g->unk324;
    D_80163EE0 = g->unk324;
    g->unk324 = 0.0f;
    return (s8)(sp47 | sp46 | sp45 | sp44);
}
