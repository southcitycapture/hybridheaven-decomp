#include "context.h"
extern f32 func_8001EAD0(s16);
extern s16 D_80181DA4[];
typedef struct func_80148B6C_Struct { u8 pad[0xB]; u8 unkB; } func_80148B6C_Struct;
typedef struct func_80148B6C_Outer { u8 pad[0x30]; func_80148B6C_Struct *unk30; } func_80148B6C_Outer;
void func_80148B6C(void)
{
  func_80148B6C_Struct *sp1C;
  f32 new_var;
  int new_var2;
  f32 d = 2.0f;
  u32 r;
  sp1C = ((func_80148B6C_Outer *) D_801BED20)->unk30;
  new_var2 = 0;
  r = (u32) ((((new_var = func_8001EAD0(D_80181DA4[new_var2])) + 1.0f) * 255.0f) / d);
  sp1C->unkB = r;
  {
  }
  D_80181DA4[new_var2] += 0x200;
}
