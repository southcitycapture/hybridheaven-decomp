#include "common.h"
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;
extern func_80377140_Struct D_801BBBF0;
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern struct func_8037769C_Glob D_80216B90;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8014B4A0(u16, f32 *);


struct func_8037775C_StructV {
    f32 x;
    f32 y;
    f32 z;
    s16 r;
};
struct func_8037775C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
extern void func_80126E88(s32);
extern void D_8014C194(u16);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8001F6FC(void);
extern void func_8001F74C(void *);
extern u8 D_80389230[];
extern const f64 D_80389398;
extern const f64 D_803893A0;
extern u8 func_801E5010[];

void func_8037775C(struct func_8037775C_Struct *arg0, s32 arg1)
{
  s32 sp8C;
  f32 z_temp;
  u8 pad[4];
  struct func_8037775C_StructV v;
  f32 sp70;
  f32 sp6C;
  f32 sp68;
  f32 sp64;
  f32 sp60;
  f32 sp5C;
  sp8C = arg0->unk5C;
  if (func_80010550(arg1, sp8C) != 0)
  {
    func_80126E88(0x1AB);
    D_8014C194(D_801BBBF0.unk8);
    func_8014B4A0(D_801BBBF0.unk8, &v.x);
    sp70 = (f32) ((((f64) func_8001EAD0(v.r)) * D_80389398) + ((f64) v.x));
    sp6C = (f32) (((f64) v.y) + 25.0);
    z_temp = (f32) ((((f64) func_8001EB64(v.r)) * D_803893A0) + ((f64) v.z));
    sp68 = z_temp;
    sp5C = v.z;
    sp64 = v.x;
    sp60 = (f32) (((f64) v.y) + 15.0);
    if (func_8010843C(v.x, sp60, v.z, sp70, sp6C, sp68) != 0)
    {
      sp70 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x380));
      sp6C = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x384));
      sp68 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x388));
    }
    func_8011AAF4(D_80389230, 0x265, (s32) arg0, 2, 1, 10.0f, sp70, sp6C, sp68, 10.0f, sp64, sp60, sp5C, 0.0f, 35.0f, -1, -1);
    *((u16 *) (((u8 *) (&D_801BBBF0)) + 0xEF0)) = (*((u16 *) (((u8 *) (&D_801BBBF0)) + 0xEF0))) & 0xFFAF;
    func_80011140(arg1, (void *) sp8C, D_80216B90, 5);
    func_8001F6FC();
    func_8001F74C(*((void **) (((u8 *) (&D_801BBBF0)) + 0xDC)));
    func_800058DC(arg0, func_801E5010);
  }
}
