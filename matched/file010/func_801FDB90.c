#include "context.h"
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
struct func_801FDB90_Struct {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad3[0xA4 - 0x9C];
    f32 unkA4;
    u8 pad4[4];
    f32 unkAC;
};

void *func_801FDB90(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  u8 *e;
  u8 *p;
  struct func_801FDB90_Struct *o;
  f32 dx;
  f32 dy;
  f32 dz;
  s16 a;
 p = D_801BBBF0; e = D_801BBC00;
  do
  {
    o = *((struct func_801FDB90_Struct **) (p + 0x20C));
    if (o != 0)
    {
      dx = o->unk90 - arg0;
      dy = o->unk94 - arg1;
      dz = o->unk98 - arg2;
      if (((f64) func_8002FC20(((dx * dx) + (dy * dy)) + (dz * dz))) <= (((f64) arg3) + 12.0))
      {
        a = func_8001EF38(o->unk40, o->unk48);
        if (func_801FD4F4(a, func_8001EF38(arg0 - o->unkA4, arg2 - o->unkAC), 0x555) != 0)
        {
          return *((void **) (p + 0x20C));
        }
      }
    }
    p += 4;
  }
  while (p != e);
  return 0;
}
