#include "context.h"

typedef struct func_8024F024_Struct { u8 pad[0x5C]; s32 unk5C; } func_8024F024_Struct;
typedef struct func_8024F024_Glob { u8 pad[0x1E8]; f32 f[6]; } func_8024F024_Glob;
typedef struct func_8024F024_Vec { s32 a; s32 b; s32 c; } func_8024F024_Vec;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
extern u8 D_80259BFC[];
extern func_8024F024_Vec D_80254AC4;
extern u8 D_80254CE0[];
extern f32 D_8025A090;
extern f32 D_8025A094;
extern f32 D_8025A098;
extern f32 D_8025A09C;
extern f32 D_8025A0A0;
extern u8 func_8024F188[];

void func_8024F024(func_8024F024_Struct *arg0, s32 volatile arg1) {
    extern s32 func_80010550();
    func_8024F024_Glob *g;
    s32 t = arg0->unk5C;

    func_80010550(arg1, t);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        g = (func_8024F024_Glob *)&D_801BBBF0;
        g->f[0] = D_8025A090;
        g->f[1] = D_8025A094;
        g->f[2] = D_8025A098;
        g->f[3] = 27.5f;
        g->f[4] = D_8025A09C;
        g->f[5] = D_8025A0A0;
        func_8011AAF4(D_80259BFC, 0x3B0, arg0, 0, 1, 0.0f, g->f[0], g->f[1], g->f[2], 0.0f, g->f[3], g->f[4], g->f[5], 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, D_80254AC4, 0xFFFFFF);
        func_800179B0(D_80254CE0);
        func_800058DC(arg0, func_8024F188);
    }
}
