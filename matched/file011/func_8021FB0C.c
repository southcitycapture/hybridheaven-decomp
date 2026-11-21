#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8013A28C();
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);

struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
struct func_8021FB0C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
extern s32 func_8001EF38(f32, f32);
extern void func_8021FD00();

void func_8021FB0C(func_8021E59C_Actor *arg0, struct func_8021FB0C_Struct0 **arg1)
{
  func_8021E59C_Struct68 *p = arg0->unk68;
  struct func_8021F9C8_Struct *t0;
  f32 fa0;
  f32 fa1;
  s16 sp46;
  s16 a0;
  s16 d;
  u16 v0;
  u16 r;
  s32 ang;
  f32 yaw;
  s16 *new_var;
  struct func_8021E52C_Struct sp24;
  if (((s32) arg0) == ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unkDC)
  {
    t0 = &D_801BC03C;
  }
  else
  {
    t0 = &D_801BC3D8;
  }
  fa0 = (-p->unk6) / 20.0;
  fa1 = p->unk8 / 20.0;
  new_var = &sp46;
  sp46 = ((s16) (0x2800 - ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unk232)) & 0x1FFF;
  a0 = ((s16) (func_8001EF38(fa0, fa1) + (*new_var))) - (ang = (*arg1)->unk2C->unk12);
  if (((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF)) < 0)
  {
    d = -((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF));
  }
  else
  {
    ang = (a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF);
    d = ang;
  }
  yaw = (fa0 * fa0) + (fa1 * fa1);
  if (yaw > 10.0)
  {
    if (d < 0x400)
    {
      r = 0xC;
    }
    else
      if (d >= 0xC01)
    {
      r = 0xB;
    }
  }
  else
  {
    v0 = 0xA;
    r = v0;
  }
  func_802256E4(&sp24, (s32) arg0, r & 0xFF);
  func_8013A28C((s32) arg1, sp24);
  t0->unk32 = (t0->unk32 & 0xFF1F) | 0x20;
  func_800058DC((s32) arg0, func_8021FD00);
}
