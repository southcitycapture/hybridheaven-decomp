#include "context.h"
typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad3E[2]; f32 f40; } func_80245E8C_Struct;
typedef struct { s16 a; s32 b; f32 c; s16 d; u8 pad[8]; } func_80245E8C_Msg;
extern void func_801339D0(s32);
extern void func_801C2F0C(s32, void *);
extern s32 func_80133A24(s32);
extern s32 func_800058DC(void *, void *);
extern u8 D_80258940[];
extern f32 D_80258B38, D_80258B3C, D_80258B40, D_80258B44, D_80258B48, D_80258B4C;
extern u8 func_80246020[];

void func_80245E8C(func_80245E8C_Struct *arg0, s32 arg1) {
    u16 t;
    u8 padx[4];
    func_80245E8C_Msg m;
    t = arg0->h3C;
    arg0->h3C = t + 1;
    if (t == 0x1E) {
        func_80133980(0x73);
        m.a = 0x1100;
        m.b = 0x01680041;
        m.c = 1.0f;
        m.d = 0xA;
        func_801C2F0C(5, &m);
    }
    if (t >= 0x5A && func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        D_801BBBF0.f1E8 = -330.0f;
        D_801BBBF0.f1EC = D_80258B38;
        D_801BBBF0.f1F0 = D_80258B3C;
        D_801BBBF0.f1F4 = D_80258B40;
        D_801BBBF0.f1F8 = D_80258B44;
        D_801BBBF0.f1FC = D_80258B48;
        func_8011AAF4(D_80258940, 0x337, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->h3C = 0;
        arg0->f40 = D_80258B4C;
        func_800058DC(arg0, func_80246020);
    }
}
