#include "context.h"

extern void func_802237B0(void *arg0, s32 arg1);
extern void func_80222450(void *arg0, s32 arg1, u16 arg2, void *arg3);

typedef struct func_8036265C_Struct {
    u8 pad[0x38];
    u8 unk38_7 : 1;
    u8 unk38_56 : 2;
    u8 unk38_rest : 5;
} func_8036265C_Struct;

typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;

typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;

void func_8036265C(func_8036265C_Arg *arg0, s32 arg1)
{
  func_8036265C_Inner *temp_a3;
  func_8036265C_Struct *var_v0;
  s32 temp_v1;
  temp_v1 = D_801BBCCC;
  temp_a3 = arg0->unk5C;
  if (var_v0)
  {
  }
  if (((s32) arg0) == temp_v1)
  {
    var_v0 = (func_8036265C_Struct *) D_801BC03C;
  }
  else
  {
    var_v0 = (func_8036265C_Struct *) D_801BC3D8;
  }
  func_802237B0(arg0, 0);
  var_v0->unk38_7 = 0;
  var_v0->unk38_56 = 0;
  func_80222450(arg0, arg1, ((u16 *) temp_a3->unk7C)[3], temp_a3);
}
