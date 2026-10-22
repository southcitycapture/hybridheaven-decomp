#include "common.h"


struct func_8011723C_StructC;
s32 func_80117204(u16 arg0);
extern struct func_8011723C_StructC *func_80005E44();
extern s32 D_8011723C(s32, void *);
extern u8 D_80163CA4[], D_80163CF4[], D_80163D44[], D_80163D8C[];
extern u8 D_80163DA0[], D_80163DB4[], D_80163DC8[], D_80163DDC[];
extern u8 D_80163E2C[], D_80163E40[], D_80163E88[], D_80163ED0[];
extern s32 D_801BBE40;
extern s32 D_801BBE48[];

s32 func_80116E80(u16 arg0) {
    s32 base;
    s32 result;
    u8 index;
    s32 temp;
    s32 v;

    base = D_801BBE40;
    temp = func_80117204(arg0);
    index = temp;
    if (D_801BBE48[temp] != 0) {
        if (arg0 == 4) {
        } else if (arg0 == 0x10) {
        } else if (arg0 == 0x20) {
        } else if (arg0 == 0x40) {
        } else if (arg0 == 8) {
        } else if (arg0 == 0x80) {
        } else if (arg0 == 0x100) {
        } else if (arg0 == 0x200) {
        } else if (arg0 == 0x400) {
        } else if (arg0 == 0x800) {
        } else if (arg0 == 0x2000) {
        } else if (arg0 == 0x4000) {
        }
        return 1;
    }
    v = arg0;
    if (v > 0x80) {
        if (v == 0x100) goto case100;
        if (v == 0x200) goto case200;
        if (v == 0x400) goto case400;
        if (v == 0x800) goto case800;
        if (v == 0x2000) goto case2000;
        if (v != 0x4000) goto done;
        if (1) goto case4000;
    }
    if (v == 4) goto case4;
    if (v == 8) goto case8;
    if (v == 0x10) goto case10;
    if (v == 0x20) goto case20;
    if (v == 0x40) goto case40;
    if (v != 0x80) goto done;
    if (1) goto case80;
case4:
    result = (s32)func_80005E44(base, D_80163CA4); if (1) goto done;
case10:
    result = (s32)func_80005E44(base, D_80163CF4); if (1) goto done;
case20:
    result = (s32)func_80005E44(base, D_80163D44); if (1) goto done;
case40:
    result = D_8011723C(base, D_80163D8C); if (1) goto done;
case8:
    result = (s32)func_80005E44(base, D_80163DA0); if (1) goto done;
case80:
    result = (s32)func_80005E44(base, D_80163DB4); if (1) goto done;
case100:
    result = (s32)func_80005E44(base, D_80163DC8); if (1) goto done;
case200:
    result = (s32)func_80005E44(base, D_80163DDC); if (1) goto done;
case400:
    result = (s32)func_80005E44(base, D_80163E2C); if (1) goto done;
case800:
    result = (s32)func_80005E44(base, D_80163E40); if (1) goto done;
case2000:
    result = (s32)func_80005E44(base, D_80163E88); if (1) goto done;
case4000:
    result = (s32)func_80005E44(base, D_80163ED0);
done:
    D_801BBE48[index] = result;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80116E80/func_801170DC.s")


s32 func_80117204(u16 arg0)
{
  s32 *p;
  s32 var_v0;
  s32 var_v1;
  s32 var_t;
  p = (s32 *) (&arg0);
  var_v0 = 1;
  var_v1 = 0;
  do
  {
    var_t = (var_v0 & arg0) & 0xFFFFFFFFFFFFFFFF;
    var_v0 = var_v0 * 2;
    if (var_t)
    {
      break;
    }
    var_v1 = (var_v1 + 1) & 0xFF;
    var_v0 = var_v0 & 0xFFFF;
  }
  while (var_v1 < 0x10);
  return var_v1;
}


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

