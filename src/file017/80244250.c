#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80244250/func_80244250.s")


extern void func_800058DC();
extern s32 func_80133A24();
extern void *func_801505AC();
extern void func_80244DF8(void);

typedef struct func_80244D1C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80244D1C_Struct;

void func_80244D1C(func_80244D1C_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  void *new_var2;
  s32 temp_v1;
  u8 *temp_v0_2;
  u8 *temp_v0_3;
  u8 *temp_v0_4;
  u8 *temp_v0_5;
  func_80244D1C_Struct *new_var;
  int new_var3;
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 < 2;
  arg0->unk3C = temp_v0 + 1;
  temp_v0 = 0;
  if (temp_v1)
  {
    return;
  }
  if (func_80133A24(0x114, arg0) != temp_v0)
  {
    temp_v0_2 = func_801505AC(1);
    temp_v0_2[0x91] = temp_v0_2[0x91] | 0x40;
  }
  new_var = arg0;
  if (func_80133A24(0x115) != temp_v0)
  {
    temp_v0_3 = func_801505AC(2);
    temp_v0_3[0x91] = temp_v0_3[0x91] | 0x40;
  }
  if (func_80133A24(0x116) != temp_v0)
  {
    temp_v0_4 = func_801505AC(3);
    temp_v0_4[0x91] = temp_v0_4[0x91] | 0x40;
  }
  new_var3 = 4;
  if (func_80133A24(0x117) != temp_v0)
  {
    new_var2 = func_801505AC(new_var3);
    temp_v0_5 = new_var2;
    temp_v0_5[0x91] = temp_v0_5[0x91] | 0x40;
  }
  func_800058DC(new_var, func_80244DF8);
}


extern void func_80241910(f32, f32, f32);
extern void func_80245040();

void func_80244DF8(void) {
    func_80245040();
    func_80241910(0.0f, 0.0f, 0.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80244250/func_80244E2C.s")


typedef struct func_80245040_Struct {
    u8 pad0[4];
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
} func_80245040_Struct;

typedef struct func_80245040_Obj {
    u8 pad0[0x30];
    u8 *unk30;
} func_80245040_Obj;

void func_80245040(s32 arg0, void *arg1) {
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v0 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk4)->unk30;
    temp_v0[0x4C] = (u8) (temp_v0[0x4C] + 1);
    temp_v1 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk8)->unk30;
    temp_v1[0x4C] = (u8) (temp_v1[0x4C] + 2);
    temp_a0 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unkC)->unk30;
    temp_a0[0x4C] = (u8) (temp_a0[0x4C] - 2);
    temp_a2 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk10)->unk30;
    temp_a2[0x4C] = (u8) (temp_a2[0x4C] + 2);
    temp_a3 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk14)->unk30;
    temp_a3[0x4C] = (u8) (temp_a3[0x4C] - 2);
}

