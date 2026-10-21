float func_8001EAD0(short);
float func_8001EB64(short);
#include "context.h"

typedef struct func_8014F940_Struct_Cam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F940_Struct_Cam;
typedef struct func_8014F940_Struct_E8 {
    u8 pad0[0x2C];
    func_8014F940_Struct_Cam *unk2C;
} func_8014F940_Struct_E8;
typedef struct func_8014F940_Struct_G {
    u8 pad0[0xE8];
    func_8014F940_Struct_E8 *unkE8;
    u8 pad1[0x198 - 0xEC];
    f32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    f32 unk1A0;
    u8 pad3[0x1E8 - 0x1A4];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    f32 unk200;
    u8 pad4[0x328 - 0x204];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014F940_Struct_G;
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;
typedef struct func_8014F940_Struct_A {
    u8 pad0[0x38];
    func_8014F940_Struct_P *unk38;
} func_8014F940_Struct_A;

#define GF ((func_8014F940_Struct_G *)D_801BBBF0)
extern f32 func_8002FC20(f32);
extern u8 D_801826C0[];

void func_8014F940(func_8014F940_Struct_A *arg0)
{
  func_8014F940_Struct_Cam *c;
  func_8014F940_Struct_P *p;
  f32 dx;
  f32 dz;
  f32 dy;
  f64 a;
  f64 b;
  f64 a2;
  f64 b2;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1E8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk30;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1EC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk34;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F0 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk38;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F4 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk3C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk40;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1FC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk44;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk334 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk328;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk338 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk32C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk33C = ((func_8014F940_Struct_G *) D_801BBBF0)->unk330;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk340 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk198;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk344 = (((f64) ((f32) arg0->unk38->unk8)) / 10.0) + 15.0;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk348 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk1A0;
  c = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C;
  p = arg0->unk38;
  a = c->unk30;
  b = ((f64) ((f32) p->unk6)) / 10.0;
  if (a < b)
  {
    dx = -(a - b);
  }
  else
  {
    b2 = b;
    dx = a - b2;
  }
  a2 = c->unk34;
  b2 = ((f64) ((f32) p->unk8)) / 10.0;
  if (b2 > a2)
  {
    dy = -(a2 - b2);
  }
  else
  {
    dy = a2 - b2;
  }
  a = c->unk38;
  b = ((f64) ((f32) p->unkA)) / 10.0;
  if (a < b)
  {
    dz = -(a - b);
  }
  else
  {
    dz = a - b;
  }
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk200 = func_8002FC20(((dx * dx) + (dy * dy)) + (dz * dz)) / 12.0;
  func_80005670(arg0, D_801826C0);
}
