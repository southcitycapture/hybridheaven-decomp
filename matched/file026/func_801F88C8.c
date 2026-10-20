#include "context.h"

struct func_801F88C8_S3 { u8 pad[0x2C]; struct func_801F88C8_S4 *unk2C; };
struct func_801F88C8_S4 { u8 pad[8]; f32 unk8; };
struct func_801F88C8_S2 { u8 pad[0x24]; struct func_801F88C8_S3 *unk24; };
struct func_801F88C8_S1 { u8 pad[8]; struct func_801F88C8_S2 *unk8; };
#define P88C8 (*(struct func_801F88C8_S1 **)((u8 *)&func_801DAAF0 + 0x24))
extern f64 D_801FD3D8;
extern f64 D_801FD3E0;

s32 func_801F88C8(s32 arg0, s32 arg1)
{
  u64 t;
  if (func_801C0B8C(0x05392DB5) != 0)
  {
    (*((struct func_801F88C8_S1 **) (((u8 *) (&func_801DAAF0)) + 0x24)))->unk8->unk24->unk2C->unk8 = 0.0f;
    if (D_801CFD40() == 1)
    {
      return 0x18;
    }
    func_801CC470(0, 0x02A80015, 0, 0, 3.0f);
    return 0x19;
  }
  t = func_801C0B2C();
  (*((struct func_801F88C8_S1 **) (((u8 *) (&func_801DAAF0)) + 0x24)))->unk8->unk24->unk2C->unk8 = ((0.0 - ((f64) D_801FB9CC)) * (((f64) ((f32) ((func_80034C24(t) / D_801FD3D8) - D_801FD3E0))) / 5.0)) + ((0, (f64) D_801FB9CC));
  return 0x18;
}
