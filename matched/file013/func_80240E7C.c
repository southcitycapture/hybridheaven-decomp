#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_80133980(s32, void *);
extern void func_80240F00(void);

struct func_80240E7C_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_80240E7C_Struct1 {
    u8 pad[0x30];
    struct func_80240E7C_Struct2 *unk30;
};

struct func_80240E7C_Struct0 {
    u8 pad[0x4];
    struct func_80240E7C_Struct1 *unk4;
};

struct func_80240E7C_Struct3 {
    u8 pad[0x90];
    s16 unk90;
};

void func_80240E7C(struct func_80240E7C_Struct3 *arg0, struct func_80240E7C_Struct0 *arg1)
{
  s16 temp_v1;
  int new_var;
  struct func_80240E7C_Struct2 *temp_v0;
  struct func_80240E7C_Struct3 *temp_a3;
  temp_a3 = arg0;
  temp_v0 = arg1->unk4->unk30;
  new_var = 0;
  arg1->unk4->unk30->unk8 = (f32) (((f64) temp_v0->unk8) - 0.5);
  temp_v1 = temp_a3->unk90;
  temp_a3->unk90 = temp_v1 - 1;
  if (temp_v1 == new_var)
  {
    arg1->unk4->unk30->unk8 = -60.0f;
    func_80133980(1, arg1);
    func_800058DC(temp_a3, func_80240F00);
  }
}
