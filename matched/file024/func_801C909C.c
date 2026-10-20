#include "context.h"

extern void func_80005700(s32);
extern f32 D_801CF3D4;

typedef struct func_801C909C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C909C_Inner;

typedef struct func_801C909C_Holder {
    u8 pad0[0x30];
    func_801C909C_Inner *unk30;
} func_801C909C_Holder;

typedef struct func_801C909C_Obj {
    func_801C909C_Holder *unk0;
    func_801C909C_Holder *unk4;
} func_801C909C_Obj;

void func_801C909C(s32 arg0, func_801C909C_Obj *arg1)
{
  func_801C909C_Inner *temp_a0;
  func_801C909C_Inner *temp_v1;
  s16 temp_v0;
  f32 k;
  f32 cmp;
  arg1->unk4->unk30->unk48 = func_8012C6B4(0x100);
  arg1->unk4->unk30->unk49 = func_8012C6B4(0x100);
  temp_v0 = func_8012C6B4(0x100);
  k = D_801CF3D4;
 goto dummy_label_48230; dummy_label_48230: ;
  arg1->unk4->unk30->unk4A = temp_v0;
  temp_a0 = arg1->unk0->unk30;
  temp_a0->unk8 = temp_a0->unk8 + k;
  temp_v1 = arg1->unk4->unk30;
  cmp = arg1->unk0->unk30->unk8;
  temp_v1->unk8 = arg1->unk4->unk30->unk8 + k;
  if (cmp > 60.0f)
  {
    func_80005700(arg0);
  }
}
