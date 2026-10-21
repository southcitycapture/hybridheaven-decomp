#include "context.h"

typedef struct func_80241D7C_Struct_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80241D7C_Struct_Inner;

typedef struct func_80241D7C_Struct_Node {
    u8 pad0[0x30];
    func_80241D7C_Struct_Inner *unk30;
} func_80241D7C_Struct_Node;

typedef struct func_80241D7C_Struct_Arg1 {
    func_80241D7C_Struct_Node *unk0;
    func_80241D7C_Struct_Node *unk4;
} func_80241D7C_Struct_Arg1;

typedef struct func_80241D7C_Struct_Arg0 {
    u8 pad0[0x90];
    f32 unk90;
    s16 unk94;
} func_80241D7C_Struct_Arg0;

extern void func_800179B0(void *, void *, void *, s16);
extern u8 D_802456C0[];
extern f64 D_80249AF8;
extern void func_80241E64(void);

void func_80241D7C(void *arg0, void *arg1)
{
  f32 temp_fv0;
  s16 temp_a3;
  func_80241D7C_Struct_Inner *new_var;
  ((func_80241D7C_Struct_Arg0 *) arg0)->unk90 = (f32) (((f64) ((func_80241D7C_Struct_Arg0 *) arg0)->unk90) + D_80249AF8);
  temp_fv0 = ((func_80241D7C_Struct_Arg0 *) arg0)->unk90;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk0->unk30->unk20 = temp_fv0;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk0->unk30->unk1C = temp_fv0;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk0->unk30->unk18 = temp_fv0;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk0->unk30->unk12 = (s16) (((func_80241D7C_Struct_Arg1 *) arg1)->unk0->unk30->unk12 + 0xFE);
  temp_fv0 = ((func_80241D7C_Struct_Arg0 *) arg0)->unk90;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk4->unk30->unk20 = temp_fv0;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk4->unk30->unk1C = temp_fv0;
  ((func_80241D7C_Struct_Arg1 *) arg1)->unk4->unk30->unk18 = temp_fv0;
  (new_var = ((func_80241D7C_Struct_Arg1 *) arg1)->unk4->unk30)->unk12 = (s16) (((func_80241D7C_Struct_Arg1 *) arg1)->unk4->unk30->unk12 + 0xFE);
  temp_a3 = ((func_80241D7C_Struct_Arg0 *) arg0)->unk94;
  ((func_80241D7C_Struct_Arg0 *) arg0)->unk94 = (s16) (temp_a3 - 1);
  if (temp_a3 == 0)
  {
    ((func_80241D7C_Struct_Arg0 *) arg0)->unk94 = 7;
    func_800179B0(D_802456C0, arg1, arg0, temp_a3);
    func_800058DC(arg0, func_80241E64);
  }
}
