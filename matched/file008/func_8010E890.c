#include "context.h"
extern void func_8010F5CC(void);
extern void func_8010EA78();
void func_8010EA34(s32 arg0, s32 arg1);

typedef struct func_8010E890_StructF { u8 pad0[0x4]; f32 f4; f32 f8; f32 fC; u8 pad10[0x8]; f32 f18; f32 f1C; f32 f20; f32 f24; f32 f28; u8 pad2C[0x10]; } func_8010E890_StructF;
typedef struct func_8010E890_StructE { u8 pad0[0x24]; f32 f24; f32 f28; u8 pad2C[0x10]; } func_8010E890_StructE;
typedef struct func_8010E890_StructD { u8 pad0[0x2C]; struct func_8010E890_StructG *p2C; } func_8010E890_StructD;
typedef struct func_8010E890_StructG { u8 pad0[0x24]; f32 f24; f32 f28; u8 pad2C[0x10]; } func_8010E890_StructG;
typedef struct func_8010E890_StructC { u8 pad0[0x22]; u8 b22; u8 pad23[0xD]; func_8010E890_StructF *p30; } func_8010E890_StructC;
typedef struct func_8010E890_StructB { u8 pad0[4]; func_8010E890_StructC *p4; } func_8010E890_StructB;
typedef struct func_8010E890_StructH { u8 pad0[0x3C]; f32 f3C; f32 f40; f32 f44; } func_8010E890_StructH;
typedef struct func_8010E890_StructI { u8 pad0[0x2C]; func_8010E890_StructH *p2C; } func_8010E890_StructI;
typedef struct func_8010E890_StructJ { u8 pad0[0x24]; func_8010E890_StructI *p24; } func_8010E890_StructJ;
typedef struct func_8010E890_StructK { u8 pad0[0x2C]; func_8010E890_StructG *p2C; } func_8010E890_StructK;
typedef struct func_8010E890_StructL {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_8010E890_StructK *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_8010E890_StructL;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_80163820[];
extern u8 D_80163830[];
extern s16 D_801637C8;
extern f32 D_80186154;

void func_8010E890(u8 *arg0, func_8010E890_StructB *arg1)
{
  f32 t;
  func_80005E44((s32) arg0, D_80163820);
  func_80005E44((s32) arg0, D_80163830);
  func_80006214((s32) arg0);
  ((func_8010E890_StructL *) D_801BBBF0)->s54 = (s32) arg0;
  if ((!((func_8010E890_StructH *) ((func_8010E890_StructI *) ((func_8010E890_StructL *) D_801BBBF0)->sE8)->p2C)->f3C) && (!((func_8010E890_StructH *) ((func_8010E890_StructI *) ((func_8010E890_StructL *) D_801BBBF0)->sE8)->p2C)->f3C))
  {
  }
  ((func_8010E890_StructL *) D_801BBBF0)->sE4 = (s32) arg0;
  ((func_8010E890_StructL *) D_801BBBF0)->sE8 = *((func_8010E890_StructK **) (arg0 + 0x24));
  arg1->p4->b22 = 0;
  func_8011A724(0);
  D_801637C8 = 0;
  func_8012C89C((s32) arg0, 1, 0xCA, 1);
  arg1->p4->p30->f20 = D_80186154;
  t = arg1->p4->p30->f20;
  arg1->p4->p30->f1C = t;
  arg1->p4->p30->f18 = t;
  arg1->p4->p30->f4 = ((func_8010E890_StructH *) ((func_8010E890_StructI *) ((func_8010E890_StructL *) D_801BBBF0)->sE8)->p2C)->f3C;
  arg1->p4->p30->f8 = ((func_8010E890_StructH *) ((func_8010E890_StructI *) ((func_8010E890_StructL *) D_801BBBF0)->sE8)->p2C)->f40;
  arg1->p4->p30->fC = ((func_8010E890_StructH *) ((func_8010E890_StructI *) ((func_8010E890_StructL *) D_801BBBF0)->sE8)->p2C)->f44;
  ((func_8010E890_StructL *) D_801BBBF0)->sE8->p2C->f24 = ((func_8010E890_StructL *) D_801BBBF0)->f29C;
  ((func_8010E890_StructL *) D_801BBBF0)->sE8->p2C->f28 = ((func_8010E890_StructL *) D_801BBBF0)->f2A0;
  if (((func_8010E890_StructL *) D_801BBBF0)->b2B5 == 1)
  {
    func_8010F5CC();
    func_8011A7FC();
    func_800058DC((s32) arg0, func_8010EA78);
    return;
  }
  if (((func_8010E890_StructL *) D_801BBBF0)->b2B5 == 2)
  {
    func_8011AA0C((s32) arg0, func_8010EA34, func_8010EA78);
    return;
  }
  func_800058DC((s32) arg0, func_8010EA78);
}
