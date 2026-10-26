#include "context.h"

extern void *func_80005E44(void *, void *);
extern void func_801170DC(s32);
extern u8 D_80171CEC[];
extern u8 D_80181C40[];
extern u8 D_80181CA8[];
extern f32 D_8018FB54;
extern f32 D_8018FB58;

typedef struct func_80147E34_Struct {
    s32 w0;
    s32 w4;
    s16 h8;
    s16 hA;
    f32 *pC;
    f32 f10[3];
    s16 h1C;
    s16 h1E;
    s16 h20;
    u8 pad22[2];
    s32 w24;
    u16 h28;
    u8 pad2A[2];
    s32 w2C;
    u16 h30;
    u8 pad32[14];
    f32 f40[3];
    u8 padEnd[4];
} func_80147E34_Struct;

s32 func_80147E34(void *arg0, u16 arg1, u8 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6)
{
  func_80147E34_Struct s;
  u8 **p;
  u16 *h;
  void *res;
  u8 new_var;
  s32 t;
  u16 h0;
  u16 h1;
  p = *((u8 ***) (D_80171CEC + (arg1 * 4)));
  t = ((s32 *) p[1])[arg2];
  h = (u16 *) p[0];
  h0 = h[0];
  h1 = h[1];
  s.f10[0] = arg3;
  s.f10[1] = arg4;
  s.f10[2] = arg5;
  if (((u8) arg6) == 2)
  {
    s.w24 = 0x902;
  }
  else
  {
    s.w24 = 0x102;
  }
  new_var = (u8) arg6;
  s.h28 = h0;
  s.w2C = t;
  s.h30 = h1;
  s.w0 = 0;
  s.w4 = 0x80000900;
  if ((((u8) arg6) == 1) || (new_var == 2))
  {
    s.h8 = 0x10;
    s.h1C = 0x1100;
    s.h1E = 0;
    s.h20 = 0x198;
    s.f40[0] = D_8018FB54;
    s.f40[1] = D_8018FB54;
    s.f40[2] = D_8018FB54;
  }
  else
    if (((u8) arg6) == 0)
  {
    s.f40[0] = D_8018FB58;
    s.h8 = 0x10;
    s.h1C = 0x1000;
    s.f40[1] = D_8018FB58;
    s.f40[2] = D_8018FB58;
    if (D_8018FB54)
    {
    }
    if (((s8 *) arg0)[0x91] == 1)
    {
      s.h1E = 0xAAA;
    }
    else
      if (((s8 *) arg0)[0x91] == 2)
    {
      s.h1E = 0x471;
      s.f10[1] += 2.0f;
    }
    else
    {
      s.h1E = 0x400;
    }
    s.h20 = 0x266;
  }
  s.hA = 0xC;
  s.pC = s.f10;
  res = func_80005E44(arg0, &s);
  if (res == 0)
  {
    func_80005700((s32) arg0);
    func_801170DC(0x10);
  }
  else
  {
    func_80006214(arg0);
    if (((u8) arg6) == 2)
    {
      ((s32 *) (*((u8 **) (((u8 *) res) + 0x30))))[0x30 / 4] = ((s32) D_80181CA8) | 0x40000000;
      func_801451C0(res, 1);
    }
    else
    {
      ((s32 *) (*((u8 **) (((u8 *) res) + 0x30))))[0x30 / 4] = ((s32) D_80181C40) | 0x40000000;
      func_801451C0(res, 0);
    }
  }
  return (s32) res;
}
#undef c
