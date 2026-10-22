#include "context.h"

typedef struct func_8011723C_StructB {
    s16 h0; s16 h2; s16 h4; s16 h6;
    s32 w8; s32 wC; s32 w10; s32 w14;
    u16 h18; u8 pad1A[2];
    f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C; f32 f30; f32 f34; f32 f38;
    f32 f3C; f32 f40; f32 f44; f32 f48; f32 f4C; f32 f50; f32 f54;
    s32 w58;
} func_8011723C_StructB;
typedef struct { s32 w[4]; } func_8011723C_Blk;
typedef struct func_8011723C_StructC {
    u8 pad[0x2C];
    func_8011723C_StructB *p;
} func_8011723C_StructC;
typedef struct {
    u8 pad0[0xE8];
    func_8011723C_StructC *e8;
} func_8011723C_StructG;

extern u8 D_801BBBF0[];
extern func_8011723C_StructC *func_80005E44();
extern void func_800058DC(s32 a, void (*f)(s32, s32));
void func_8011744C(s32 arg0, s32 arg1);

s32 func_8011723C(s32 arg0) {
    func_8011723C_StructC *v = func_80005E44();
    func_800058DC(arg0, func_8011744C);
    arg0 = (s32)D_801BBBF0;
    v->p->h0 = ((func_8011723C_StructG *)arg0)->e8->p->h0;
    v->p->h2 = ((func_8011723C_StructG *)arg0)->e8->p->h2;
    v->p->h4 = ((func_8011723C_StructG *)arg0)->e8->p->h4;
    v->p->h6 = ((func_8011723C_StructG *)arg0)->e8->p->h6;
    *(func_8011723C_Blk *)&v->p->w8 = *(func_8011723C_Blk *)&((func_8011723C_StructG *)arg0)->e8->p->w8;
    v->p->h18 = ((func_8011723C_StructG *)arg0)->e8->p->h18;
    v->p->f1C = ((func_8011723C_StructG *)arg0)->e8->p->f1C;
    v->p->f20 = ((func_8011723C_StructG *)arg0)->e8->p->f20;
    v->p->f24 = ((func_8011723C_StructG *)arg0)->e8->p->f24;
    v->p->f28 = ((func_8011723C_StructG *)arg0)->e8->p->f28;
    v->p->f2C = ((func_8011723C_StructG *)arg0)->e8->p->f2C;
    v->p->f30 = ((func_8011723C_StructG *)arg0)->e8->p->f30;
    v->p->f34 = ((func_8011723C_StructG *)arg0)->e8->p->f34;
    v->p->f38 = ((func_8011723C_StructG *)arg0)->e8->p->f38;
    v->p->f3C = ((func_8011723C_StructG *)arg0)->e8->p->f3C;
    v->p->f40 = ((func_8011723C_StructG *)arg0)->e8->p->f40;
    v->p->f44 = ((func_8011723C_StructG *)arg0)->e8->p->f44;
    v->p->f48 = ((func_8011723C_StructG *)arg0)->e8->p->f48;
    v->p->f4C = ((func_8011723C_StructG *)arg0)->e8->p->f4C;
    v->p->f50 = ((func_8011723C_StructG *)arg0)->e8->p->f50;
    v->p->f54 = ((func_8011723C_StructG *)arg0)->e8->p->f54;
    v->p->w58 = ((func_8011723C_StructG *)arg0)->e8->p->w58;
    return (s32)v;
}
