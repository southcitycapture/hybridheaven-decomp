#include "context.h"

typedef struct func_801268CC_Struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad1[0x3A2 - 4];
    u16 unk3A2;
} func_801268CC_Struct;

s32 func_801268CC(u16 arg0)
{
  func_801268CC_Struct *p;
  ;
  ((func_801268CC_Struct *) (&D_801BBBF0))->unk3A2 = ((func_801268CC_Struct *) (&D_801BBBF0))->unk2;
  if (arg0 != 0)
  {
    ((func_801268CC_Struct *) (&D_801BBBF0))->unk3A2 = arg0;
  }
  return 1;
}
