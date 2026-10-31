#include "common.h"
extern s16 D_801BEC88[];


typedef struct func_80145E78_StructObj {
    u8 pad0[0xB];
    u8 unkB;
    u8 pad1[0x3F];
    u8 unk4B;
} func_80145E78_StructObj;
typedef struct func_80145E78_Struct {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    func_80145E78_StructObj *unk30;
} func_80145E78_Struct;
extern f32 func_8001EAD0(s16, s16, s32, void *);

s16 func_80145E78(func_80145E78_Struct *arg0, s16 arg1, s32 arg2)
{
  f32 new_var;
  D_801BEC88[arg2 & 0xFF] += arg1;
  D_801BEC88[arg2 & 0xFF] &= 0x1FFF;
  new_var = (f32) ((((f64) func_8001EAD0(D_801BEC88[arg2 & 0xFF], arg1, arg2 & 0xFF, arg0)) + 1.0) * 0.5);
  if (arg0->unk2A == 0xC)
  {
    arg0->unk30->unk4B = (u32) (255.0f * new_var);
  }
  else
    if (arg0->unk2A == 0xD)
  {
    arg0->unk30->unkB = (u32) (255.0f * new_var);
  }
  return D_801BEC88[arg2 & 0xFF];
}
