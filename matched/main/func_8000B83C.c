#include "context.h"
s32 func_8001EF38(f32, f32);
extern void *D_80089460;

struct func_8000B83C_StructA {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
};

struct func_8000B83C_StructB {
    u8 pad[0x2C];
    void *unk2C;
    void *unk30;
};

struct func_8000B83C_StructC {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8000B83C_StructD {
    u8 pad[0x2C];
    struct func_8000B83C_StructC *unk2C;
};

f32 func_8002FC20(f32, f32);

void func_8000B83C(struct func_8000B83C_StructB *arg0)
{
  f32 sp24;
  f32 sp20;
  struct func_8000B83C_StructA *sp1C;
  s16 new_var;
  void *temp_v0;
  temp_v0 = arg0->unk2C;
  if (temp_v0 != 0)
  {
    sp1C = temp_v0;
  }
  else
  {
    sp1C = arg0->unk30;
  }
  sp24 = ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk3C - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk30;
  sp20 = ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk44 - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk38;
  sp1C->unk12 = (s16) (((new_var = func_8001EF38(sp24, sp20) ^ 0) + 0x1000) & 0x1FFF);
  sp1C->unk10 = func_8001EF38(((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk40 - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk34, func_8002FC20((sp24 * sp24) + (sp20 * sp20), sp20));
}
