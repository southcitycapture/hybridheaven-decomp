#include "context.h"

typedef struct func_80375688_StructData {
    u8 pad[0xC];
    u16 count;
} func_80375688_StructData;

typedef struct func_80375688_Struct {
    u8 pad[0x5C];
    func_80375688_StructData *data;
} func_80375688_Struct;

extern s32 func_80375634(void *, s32);
extern u8 D_8038CCC0[];

void func_80375688(func_80375688_Struct *arg0, u8 arg1, u16 arg2, u16 arg3)
{
  s32 limit;
  func_80375688_StructData *new_var;
  s32 i;
  new_var = arg0->data;
  limit = new_var->count - 1;
  if (limit < arg2)
  {
    arg2 = limit;
  }
  i = (limit + 1) <= arg3;
  if (i)
  {
    arg3 = limit;
  }
  for (i = arg2; i <= arg3; i++)
  {
    D_8038CCC0[func_80375634(arg0, i & 0xFF)] = arg1;
  }

}
