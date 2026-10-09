#include "context.h"

s32 func_8001F74C(void);
s32 func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern u8 func_80150DB4[];

typedef struct func_80150D70_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80150D70_Struct;

void func_80150D70(void *arg0, s32 arg1)
{
  if (1)
  {
  }
  func_8001F74C();
  func_8013B570(arg0, ((func_80150D70_Struct *) arg0)->unk92, 0, 3, func_80150DB4);
}
