#include "context.h"
struct func_8024C560_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024C560_Struct {
    s32 pad0;
    struct func_8024C560_StructInner *unk4;
};
void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1);

typedef struct func_8024C3BC_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_8024C3BC_StructInner;
typedef struct func_8024C3BC_StructOuter {
    u8 pad0[0x2C];
    func_8024C3BC_StructInner *inner;
} func_8024C3BC_StructOuter;
typedef struct func_8024C3BC_StructArg {
    u8 pad0[0x74];
    s32 state;
} func_8024C3BC_StructArg;
extern func_8024C3BC_StructOuter *D_801BBCD0;
extern func_8024C3BC_StructOuter *D_801BBCD8;
extern u8 D_8025CF00[];
extern f32 D_8025D024;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB20(void);

void func_8024C3BC(func_8024C3BC_StructArg *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;
    f64 offset;
    f32 x, y, z;
    func_8024C3BC_StructInner *p;
    func_8024C3BC_StructInner *q;

    sine = func_8001EAD0(D_801BBCD0->inner->angle);
    if (D_801C3DC8(arg0, D_801BBCD0->inner->x - sine * 40.0, D_801BBCD0->inner->y + 20.0f,
            D_801BBCD0->inner->z - func_8001EB64(D_801BBCD0->inner->angle) * 40.0,
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, D_8025D024, 35.0f) == 0) {
        func_8011AAF4(D_8025CF00, 0x4B1, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        arg0->state = 0;
        func_801C2F0C(1, NULL);
        func_801FBB20();
        func_800058DC(arg0, func_8024C560);
    }
}
