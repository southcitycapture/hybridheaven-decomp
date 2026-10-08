#include "common.h"

typedef struct func_801514B0_Struct2C {
    u8 pad[0x12];
    s16 unk12;
} func_801514B0_Struct2C;

typedef struct func_801514B0_Struct24 {
    u8 pad[0x2C];
    func_801514B0_Struct2C *unk2C;
} func_801514B0_Struct24;

typedef struct func_801514B0_Struct {
    u8 pad[0x24];
    func_801514B0_Struct24 *unk24;
} func_801514B0_Struct;

s32 func_801517CC();

s32 func_801514B0(func_801514B0_Struct *arg0, s16 arg1)
{
  func_801514B0_Struct2C *temp_v1;
  if (func_801517CC())
  {
    temp_v1 = arg0->unk24->unk2C;
    temp_v1->unk12 = (s16) (((short) (temp_v1->unk12 + arg1)) & 0x1FFF);
    return 1;
  }
  return 0;
}
