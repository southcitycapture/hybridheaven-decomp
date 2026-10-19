#include "context.h"

typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
typedef struct { u8 pad[0x3C]; s16 h3C; } func_802453FC_StructA;
extern func_802453FC_Struct D_801BBBF0;
extern u8 D_80258780[];
extern f32 D_80258A78, D_80258A7C, D_80258A80, D_80258A84, D_80258A88, D_80258A8C;
extern f32 D_80258A90, D_80258A94, D_80258A98, D_80258A9C, D_80258AA0, D_80258AA4;
extern void func_80245588();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133980(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB30(void);

void func_802453FC(func_802453FC_StructA *arg0, s32 arg1) {
    if (func_801C3D20(D_80258A78, D_80258A7C, 20.0f) != 0 || func_801C3D20(D_80258A80, D_80258A84, 20.0f) != 0 || func_801C3D20(D_80258A88, D_80258A8C, 20.0f) != 0) {
        func_80133980(0x74);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.p->f40 = 0.0f;
        D_801BBBF0.p->f48 = 0.0f;
        D_801BBBF0.f1E8 = D_80258A90;
        D_801BBBF0.f1EC = D_80258A94;
        D_801BBBF0.f1F0 = D_80258A98;
        D_801BBBF0.f1F4 = D_80258A9C;
        D_801BBBF0.f1F8 = D_80258AA0;
        D_801BBBF0.f1FC = D_80258AA4;
        func_8011AAF4(D_80258780, 0x218, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_801FBB30();
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245588);
    }
}
