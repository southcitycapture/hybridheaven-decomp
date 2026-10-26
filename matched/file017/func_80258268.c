#include "common.h"
typedef struct func_80257B10_VS { int a; int b; int c; int d; int e; } func_80257B10_V;
#define func_80258268 func_80258268__arr
typedef struct func_80257F34_Struct_V {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80257F34_Struct_V;
typedef struct func_80257F34_Struct_G {
    u8 pad0[0x2C];
    func_80257F34_Struct_V *unk2C;
} func_80257F34_Struct_G;
extern func_80257F34_Struct_G *D_801BBCD0;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_802583FC(s32 arg0, s32 arg1);

#undef func_80258268

typedef struct func_80258268_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80258268_StructInner;
typedef struct func_80258268_StructOuter {
    u8 pad0[0x2C];
    func_80258268_StructInner *inner;
} func_80258268_StructOuter;
extern func_80258268_StructOuter *D_801BBCD8;
extern u8 D_8025DD18[];
extern f32 D_8025DD98;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801C2F0C(s32, void *);
extern void func_800058DC(void *, void *);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);

#define IN(g) (((func_80258268_StructOuter *)(g))->inner)

void func_80258268(void *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;

    sine = func_8001EAD0(IN(D_801BBCD0)->angle);
    if (D_801C3DC8(arg0, (f32)(IN(D_801BBCD0)->x - sine * 40.0), IN(D_801BBCD0)->y + 20.0f,
            (f32)(IN(D_801BBCD0)->z - func_8001EB64(IN(D_801BBCD0)->angle) * 40.0),
            IN(D_801BBCD0)->x, IN(D_801BBCD0)->y + 17.0f, IN(D_801BBCD0)->z, D_8025DD98, 35.0f) == 0) {
        func_8011AAF4(D_8025DD18, 0x172, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        func_800058DC(arg0, func_802583FC);
    }
}
