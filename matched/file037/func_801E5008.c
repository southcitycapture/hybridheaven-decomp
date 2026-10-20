#include "context.h"
extern f64 D_801E6DB8;

s32 func_801E5008(s32 arg0, s32 arg1)
{
  u64 r;
  f32 f;
  s32 v;
  f32 new_var;
  v = D_801E6A58;
  if (D_801E6A58 == 0)
  {
    goto l0;
  }
  if (v == 1)
  {
    goto l1;
  }
  if (v != 2)
  {
    goto def;
  }
  goto l2;
  l0:
  if (func_801CE284() != 0)
  {
    func_801CC4D8(0, 0x0348005E, 0, 0, 5.0);
    D_801E6A58 = 1;
  }

  if (D_801E6A5C == 0x12)
  {
    func_8038D28C(0x677);
  }
  D_801E6A5C = D_801E6A5C + 1;
  goto join;
  l1:
  if (func_801CE274() == 0)
  {
    func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
    D_801E6A58 = 2;
  }

  goto join;
  l2:
  if (func_801C0B8C(0x01B77401))
  {
    func_801C0EB0(4, 0);
 return 0x13;
  }

  join:
  def:
  r = func_801C0F18(4, 0);


  ;
  *((f32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) (func_801DAAF0 + 0x24))) + 8))) + 0x24))) + 0x2C))) + 8)) = ((((f32) (func_80034C24(r) / D_801E6DB8)) / 10.0f) * ((D_801E6A60 + 121.0f) - (new_var = D_801E6A60))) + D_801E6A60;
  return 0x12;
}
