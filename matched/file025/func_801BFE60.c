#include "context.h"
typedef struct func_801C0640_Struct {
    s32 unk0;
    s16 unk4;
    s32 unk8;
} func_801C0640_Struct;
extern s32 func_801BF7A0();

extern s32 func_801C2090(s32, s32);
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;
extern struct func_801C0640_Struct D_801D8D68;

void func_801BFE60(void)
{
  s32 temp_s3;
  s32 var_s0;
  struct func_801C0640_Struct sp34;
  s32 var_s1;
  sp34 = D_801D8D68;
  var_s1 = 1;
  var_s0 = 0;
  temp_s3 = func_801C2090(D_801D8CE4, D_801D8CE8);
  do
  {
    if (temp_s3 & var_s1)
    {
      if (1)
      {
        func_801BF7A0(var_s0, sp34);
      }
    }
    var_s0 += 1;
    var_s1 *= 2;
  }
  while (var_s0 != 9);
}
