#include "context.h"

typedef struct func_80253680_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80253680_StructInner;
typedef struct func_80253680_StructOuter {
    u8 pad0[0x2C];
    func_80253680_StructInner *inner;
} func_80253680_StructOuter;
typedef struct func_80253680_StructArg {
    u8 pad0[0x74];
    s32 state;
} func_80253680_StructArg;
extern func_80253680_StructOuter *D_801BBCD0;
extern func_80253680_StructOuter *D_801BBCD8;
extern u8 D_8025D758[];
extern f32 D_8025D83C;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB20(void);

void func_80253680(func_80253680_StructArg *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;
    f64 offset;
    f32 x, y, z;
    func_80253680_StructInner *p;
    func_80253680_StructInner *q;

    sine = func_8001EAD0(D_801BBCD0->inner->angle);
    if (D_801C3DC8(arg0, D_801BBCD0->inner->x - sine * 40.0, D_801BBCD0->inner->y + 20.0f,
            D_801BBCD0->inner->z - func_8001EB64(D_801BBCD0->inner->angle) * 40.0,
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, D_8025D83C, 35.0f) == 0) {
        func_8011AAF4(D_8025D758, 0x485, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        arg0->state = 0;
        func_801C2F0C(1, NULL);
        func_801FBB20();
        func_800058DC(arg0, func_80253824);
    }
}
