#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C3044(void);
typedef struct func_80241F20_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241F20_Arg;
void func_80241F20(func_80241F20_Arg *arg0, s32 arg1);

typedef struct func_80241DD0_Local { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0x12]; } func_80241DD0_Local;
extern u8 D_802582D0[];
extern f32 D_80258564;
extern f32 D_80258568;
extern f32 D_8025856C;
extern f32 D_80258570;
extern f32 D_80258574;

void func_80241DD0(func_80241F20_Arg *arg0, s32 arg1) {
    func_80241DD0_Local sp50;

    if (func_801C3044() == 0) {
        G->f1E8 = D_80258564;
        G->f1EC = 18.0f;
        G->f1F0 = D_80258568;
        G->f1F4 = D_8025856C;
        G->f1F8 = D_80258570;
        G->f1FC = D_80258574;
        func_8011AAF4(D_802582D0, 0x230, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
        sp50.a = 0x1000;
        sp50.b = 0x04100025;
        sp50.c = 3.0f;
        func_801C2F0C(4, &sp50.a);
        G->unkE0->unk2C->unk12 = 0x1C00;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241F20);
    }
}
