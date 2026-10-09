#include "context.h"

typedef struct func_802291FC_Struct0 {
    u8 pad[0x94];
    u8 unk94;
} func_802291FC_Struct0;

typedef struct func_802291FC_Struct1 {
    u8 pad[0x38];
    u32 unk38;
} func_802291FC_Struct1;

typedef struct func_802291FC_Struct2 {
    u8 pad[0x4];
    s16 unk4;
} func_802291FC_Struct2;

s32 func_802291FC(void *arg0, void *arg1, void *arg2, u8 arg3)
{
  func_802291FC_Struct0 *s0 = arg0;
  int new_var;
  func_802291FC_Struct1 *s1 = arg1;
  func_802291FC_Struct2 *s2 = arg2;
  u32 temp_v0;
  u8 temp_v1;
  temp_v0 = s1->unk38;
  if (((temp_v0 >> 0x1F) != 0) && ((((u32) (temp_v0 * 2)) >> 0x1E) == 0))
  {
    temp_v1 = s0->unk94;
    new_var = arg3 < s0->unk94;
    s0->unk94 = (u8) (temp_v1 + 1);
    if (new_var)
    {
      s2->unk4 = 0x10;
      s0->unk94 = 0;
      return 2;
    }
    return 1;
  }
  s0->unk94 = 0;
  return 0;
}
