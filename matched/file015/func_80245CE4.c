#include "common.h"
#define HZC2(a, b) a##b
#define HZC(a, b) HZC2(a, b)
typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
extern func_802453FC_Struct D_801BBBF0;
extern s32 func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C3B5C();
typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad3E[2]; f32 f40; } func_80245E8C_Struct;
void func_80245E8C(func_80245E8C_Struct *arg0, s32 arg1);
extern void func_80246598(void *, s32);

extern s32 D_801C2F0C(s32, void *);
extern u8 D_80258900[];
extern f32 D_80258B24;
extern f32 D_80258B28;
extern f32 D_80258B2C;
extern f32 D_80258B30;
extern f32 D_80258B34;
typedef struct { u8 pad[0x3C]; u16 h3C; } func_80245CE4_Struct;
typedef struct { s16 a; s32 b; f32 c; u8 post[0x14]; } func_80245CE4_Msg;

void func_80245CE4(func_80245CE4_Struct *arg0, s32 arg1) {
    func_80245CE4_Msg sp;

    if (arg0->h3C == 0x14 || arg0->h3C == 0x20) {
        func_80020718(0x1B8);
    }
    if (arg0->h3C == 5) {
        sp.a = 0x1000;
        sp.b = 0x4100023;
        sp.c = 1.0f;
        D_801C2F0C(4, &sp);
    }
    if (arg0->h3C++ >= 0x10 && func_801C3B5C() == 4) {
        D_801BBBF0.f1E8 = D_80258B24;
        D_801BBBF0.f1EC = D_80258B28;
        D_801BBBF0.f1F0 = D_80258B2C;
        D_801BBBF0.f1F4 = -278.0f;
        D_801BBBF0.f1F8 = D_80258B30;
        D_801BBBF0.f1FC = D_80258B34;
        func_8011AAF4(D_80258900, 0x309, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->h3C = 0;
        func_80020718(0x1B5);
        func_800058DC(arg0, func_80245E8C);
    }
    func_80246598(arg0, arg1);
}
