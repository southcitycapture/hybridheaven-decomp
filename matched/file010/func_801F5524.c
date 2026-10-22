#include "context.h"

typedef struct func_801F5524_StructSub {
    u8 pad[0x14];
    u32 unk14;
} func_801F5524_StructSub;

typedef struct func_801F5524_Struct {
    u8 pad[0x38];
    func_801F5524_StructSub *unk38;
} func_801F5524_Struct;

s32 func_801F5524(void *arg0)
{
  u32 temp_v0;
  temp_v0 = ((func_801F5524_Struct *) arg0)->unk38->unk14 >> 16;
  if ((((func_801F5524_Struct *) arg0)->unk38->unk14 >> 16) != 0)
  {
    if (func_80133A24(temp_v0) != 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
