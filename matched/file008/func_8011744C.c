#include "context.h"

typedef struct func_8011744C_StructB {
    s16 h0; s16 h2; s16 h4; s16 h6;
    s32 w8; s32 wC; s32 w10; s32 w14;
    u16 h18; u8 pad1A[2];
    f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C; f32 f30; f32 f34; f32 f38;
    f32 f3C; f32 f40; f32 f44; f32 f48; f32 f4C; f32 f50; f32 f54;
    s32 w58;
} func_8011744C_StructB;

typedef struct { s32 w[4]; } func_8011744C_Blk;

typedef struct func_8011744C_StructC {
    u8 pad[0x2C];
    func_8011744C_StructB *p;
} func_8011744C_StructC;

typedef struct {
    u8 pad0[0xE8];
    func_8011744C_StructC *e8;
    u8 pad1[0x258 - 0xEC];
    func_8011744C_StructC *arr[1];
} func_8011744C_StructG;

extern u8 D_801BBBF0[];
#define G (*(func_8011744C_StructG *)D_801BBBF0)

void func_8011744C(s32 arg0, s32 arg1) {
    func_8011744C_StructB *d = G.arr[func_80117204(0x40)]->p;

    d->h0 = G.e8->p->h0;
    d->h2 = G.e8->p->h2;
    d->h4 = G.e8->p->h4;
    d->h6 = G.e8->p->h6;
    *(func_8011744C_Blk *)&d->w8 = *(func_8011744C_Blk *)&G.e8->p->w8;
    d->h18 = G.e8->p->h18;
    d->f1C = G.e8->p->f1C;
    d->f20 = G.e8->p->f20;
    d->f24 = G.e8->p->f24;
    d->f28 = G.e8->p->f28;
    d->f2C = G.e8->p->f2C;
    d->f30 = G.e8->p->f30;
    d->f34 = G.e8->p->f34;
    d->f38 = G.e8->p->f38;
    d->f3C = G.e8->p->f3C;
    d->f40 = G.e8->p->f40;
    d->f44 = G.e8->p->f44;
    d->f48 = G.e8->p->f48;
    d->f4C = G.e8->p->f4C;
    d->f50 = G.e8->p->f50;
    d->f54 = G.e8->p->f54;
    d->w58 = G.e8->p->w58;
}
