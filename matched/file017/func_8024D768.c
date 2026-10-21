#include "context.h"

typedef struct func_8024D768_Struct2C {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 ang;
    u8 pad14[0x1C];
    f32 x30;
    u8 pad34[4];
    f32 z38;
} func_8024D768_Struct2C;

typedef struct func_8024D768_Obj {
    u8 pad0[0x2C];
    func_8024D768_Struct2C *p;
} func_8024D768_Obj;

typedef struct func_8024D768_Glob {
    u8 pad[0xE0];
    func_8024D768_Obj *e0;
    u8 padE4[4];
    func_8024D768_Obj *e8;
} func_8024D768_Glob;

typedef struct func_8024D768_Arg {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024D768_Arg;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8025D08C[];
extern u8 func_8024D9B8[];
extern f32 D_8025D234;
extern f64 D_8025D238;
extern f64 D_8025D240;
extern f64 D_8025D248;
extern f64 D_8025D250;

#define G ((func_8024D768_Glob *)D_801BBBF0)

void func_8024D768(func_8024D768_Arg *arg0, s32 arg1) {
    s16 sp66;
    s32 t;
    f32 sp5C;
    f32 c;
    func_8024D768_Struct2C *p;

    sp5C = func_8001EAD0(G->e0->p->ang);
    c = func_8001EB64(G->e0->p->ang);
    p = G->e0->p;
    if (D_801C3DC8(arg0, p->x, p->y + 18.0f, p->z, sp5C * 40.0f + p->x, p->y + 15.0f,
                      c * 40.0f + p->z, D_8025D234, 35.0f) == 0
        || func_801C3D20(G->e8->p->x30, G->e8->p->z38, 10.0f) != 0) {
        p = G->e0->p;
        sp66 = func_8001EF38(D_8025D238 - p->x, D_8025D240 - p->z);
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025D08C, 0x25D, arg0, 0, 1, 0.0f, D_8025D248 - sp5C * 70.0f,
                      G->e0->p->y + 15.0f, D_8025D250 - func_8001EB64(sp66) * 70.0f,
                      0.0f, -143.0f, 14.0f, -130.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DDF0 = func_8015105C(0xFA);
        func_800058DC(arg0, (void *)func_8024D9B8);
    }
}
