#include "common.h"
extern u8 *D_8038D8D0;


typedef struct func_801E3ED4_StructB {
    /* 0x00 */ u8 pad0[4];
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 z;
    /* 0x10 */ u8 pad10[2];
    /* 0x12 */ s16 h;
    /* 0x14 */ u8 pad14[4];
    /* 0x18 */ f32 sx;
    /* 0x1C */ f32 sy;
    /* 0x20 */ f32 sz;
    /* 0x24 */ s32 w24;
    /* 0x28 */ u8 pad28[8];
    /* 0x30 */ u32 w30;
    /* 0x34 */ u8 pad34[0x14];
    /* 0x48 */ u8 c[4];
} func_801E3ED4_StructB;

typedef struct func_801E3ED4_StructA {
    /* 0x00 */ u8 pad0[0x30];
    /* 0x30 */ func_801E3ED4_StructB *b;
} func_801E3ED4_StructA;

typedef struct func_801E3ED4_StructT {
    /* 0x00 */ func_801E3ED4_StructA *a[20];
} func_801E3ED4_StructT;

extern s32 D_8038D8CC;
extern u8 D_801EA4F0[];
extern u8 D_801D9040[];
extern u8 D_801DA198[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

#define T (*(func_801E3ED4_StructT **)&D_8038D8D0)

s32 func_801E3ED4(s32 arg0, s32 arg1) {
    s32 i;
    f32 k;

    for (i = 0; i < 8; i++) {
        func_80005E44(D_8038D8CC, D_801EA4F0);
    }
    for (i = 0; i < 12; i++) {
        func_80005E44(D_8038D8CC, D_801EA4F0);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x267, 0);
    func_8012C89C(D_8038D8CC, 2, 0x443, 0);
    func_8012C89C(D_8038D8CC, 3, 0x444, 0);
    func_8012C89C(D_8038D8CC, 4, 0x263, 0);
    func_8012C89C(D_8038D8CC, 5, 0x267, 0);
    func_8012C89C(D_8038D8CC, 6, 0x444, 1);
    func_8012C89C(D_8038D8CC, 7, 0x444, 2);
    for (i = 0; i < 12; i++) {
        func_8012C89C(D_8038D8CC, i + 8, 0x445, 0);
    }

    k = -423.0f;
    T->a[0]->b->x = -49.0f;
    T->a[0]->b->y = 0.0f;
    T->a[0]->b->z = 49.0f;
    T->a[0]->b->h = 0x1000;
    T->a[0]->b->sx = 1.0f;
    T->a[0]->b->sy = 1.0f;
    T->a[0]->b->sz = 1.0f;

    T->a[1]->b->x = -49.0f;
    T->a[1]->b->y = 0.0f;
    T->a[1]->b->z = 49.0f;
    T->a[1]->b->h = 0x1000;
    T->a[1]->b->w30 = (u32)D_801D9040 | 0x40000000;
    T->a[1]->b->w24 = 0x100;
    T->a[1]->b->c[0] = 0;
    T->a[1]->b->c[1] = 0;
    T->a[1]->b->c[2] = 0;
    T->a[1]->b->c[3] = 0xFF;

    T->a[2]->b->x = 0.0f;
    T->a[2]->b->y = 0.0f;
    T->a[2]->b->z = k;
    T->a[2]->b->h = 0;
    T->a[2]->b->sx = 1.0f;
    T->a[2]->b->sy = 1.0f;
    T->a[2]->b->sz = 1.0f;

    T->a[3]->b->x = 0.0f;
    T->a[3]->b->y = 0.0f;
    T->a[3]->b->z = k;
    T->a[3]->b->h = 0;
    T->a[3]->b->w30 = (u32)D_801DA198 | 0x40000000;
    T->a[3]->b->w24 = 0x100;
    T->a[3]->b->c[0] = 0;
    T->a[3]->b->c[1] = 0;
    T->a[3]->b->c[2] = 0;
    T->a[3]->b->c[3] = 0xFF;

    T->a[4]->b->x = -49.0f;
    T->a[4]->b->y = 97.0f;
    T->a[4]->b->z = -472.0f;
    T->a[4]->b->h = 0x800;
    T->a[4]->b->sx = 1.0f;
    T->a[4]->b->sy = 1.0f;
    T->a[4]->b->sz = 1.0f;

    T->a[5]->b->x = -49.0f;
    T->a[5]->b->y = 97.0f;
    T->a[5]->b->z = -472.0f;
    T->a[5]->b->h = 0x800;
    T->a[5]->b->w30 = (u32)D_801D9040 | 0x40000000;
    T->a[5]->b->w24 = 0x100;
    T->a[5]->b->c[0] = 0;
    T->a[5]->b->c[1] = 0;
    T->a[5]->b->c[2] = 0;
    T->a[5]->b->c[3] = 0xFF;

    T->a[6]->b->x = -5.0f;
    T->a[6]->b->y = 5.0f;
    T->a[6]->b->z = -500.0f;
    T->a[6]->b->h = 0;
    T->a[6]->b->sx = 1.0f;
    T->a[6]->b->sy = 1.0f;
    T->a[6]->b->sz = 1.0f;

    T->a[7]->b->x = 20.0f;
    T->a[7]->b->y = 5.0f;
    T->a[7]->b->z = -500.0f;
    T->a[7]->b->h = 0;
    T->a[7]->b->sx = 1.0f;
    T->a[7]->b->sy = 1.0f;
    T->a[7]->b->sz = 1.0f;

    for (i = 0; i < 12; i++) {
        T->a[i + 8]->b->x = 0.0f;
        T->a[i + 8]->b->y = 0.0f;
        T->a[i + 8]->b->z = 0.0f;
        T->a[i + 8]->b->h = 0;
    }
    return 2;
}
