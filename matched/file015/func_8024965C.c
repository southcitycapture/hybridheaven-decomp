#include "context.h"

typedef struct func_8024965C_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_8024965C_StructB;
typedef struct func_8024965C_StructA {
    u8 pad[0x2C];
    func_8024965C_StructB *p;
} func_8024965C_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_800208C4(s32);
extern void func_80249810(s32, s32);
extern void func_801C2F0C(s32 arg0, void *arg1);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801FBB20(void);
extern func_8024965C_StructA *D_801BBCD0;
extern func_8024965C_StructA *D_801BBCD8;
extern u8 D_801BC3D8[];
extern u8 D_80258F90[];
extern f32 D_80259174;

void func_8024965C(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 40.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 40.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, D_80259174, 35.0f) == 0) {
        func_8011AAF4(D_80258F90, 0x2BD, (void *)arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        D_801BC3D8[0x3BA] = 0;
        func_800208C4(0x26);
        func_800208C4(0x32);
        func_800058DC((void *)arg0, (void *)func_80249810);
    }
}
