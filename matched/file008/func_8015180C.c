#include "context.h"

typedef struct func_8015180C_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x72 - 0x30];
    u16 unk72;
    u8 pad2[0x8C - 0x74];
    void (*unk8C)(void);
} func_8015180C_Struct;

extern void func_80126EAC(void);

s32 func_8015180C(func_8015180C_Struct *arg0, func_8015180C_Struct *arg1)
{
  void *temp_t0;
  u16 temp_t9;
  if (func_8001F7B0() != 0)
  {
    arg0->unk2C = arg0->unk2C | 0x8000;
    temp_t0 = (void *) func_80126EAC;
    temp_t9 = arg1->unk72;
    arg0->unk72 = arg1->unk72;
    arg0->unk8C = (void (*)(void)) temp_t0;
    return 1;
  }
  return 0;
}
