#include "context.h"

typedef struct func_802412F8_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_802412F8_StructB;
typedef struct func_802412F8_StructA {
    u8 pad[0x2C];
    func_802412F8_StructB *p;
} func_802412F8_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80240C00(void);
#define PLAYER ((func_802412F8_StructA *)D_801BBCD0)
extern u8 D_802581B8[];
extern f32 D_80258280;

void func_802412F8(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(PLAYER->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)PLAYER->p->f4 - (f64)sp50 * 40.0), PLAYER->p->f8 + 20.0f,
                      (f32)((f64)PLAYER->p->fC - (f64)func_8001EB64(PLAYER->p->s12) * 40.0),
                      PLAYER->p->f4, PLAYER->p->f8 + 17.0f, PLAYER->p->fC, D_80258280, 35.0f) == 0) {
        func_8011AAF4(D_802581B8, 0x171, (void *)arg0, 2, 1, 0.0f, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f30, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f34, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f38, 0.0f, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f3C, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f40, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC((void *)arg0, (void *)func_80240C00);
    }
}
