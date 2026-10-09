#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000AFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B1E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B258.s")


extern void func_8000B258(s32, void *);
extern void func_8000B67C(s32, void *);

void func_8000B578(s32 arg0, s32 *arg1) {
    s32 sp18[0x40 / 4];

    func_8000B67C(arg1[7], sp18);
    func_8000B258(arg0, sp18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B83C.s")


typedef struct func_8000B8F0_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x18];
    void *unk2C;
    void *unk30;
} func_8000B8F0_Struct;

typedef struct func_8000B8F0_StructB {
    u8 pad0[0x2C];
    void *unk2C;
} func_8000B8F0_StructB;

typedef struct func_8000B8F0_StructC {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    u8 pad1[0x4];
    f32 unk44;
} func_8000B8F0_StructC;

s32 func_8001EF38(f32, f32);
extern void *D_80089460;

void func_8000B8F0(func_8000B8F0_Struct *arg0)
{
  void *temp_v0;
  func_8000B8F0_StructC *temp_v0_2;
  void *var_v1;
  void *sp1C;
  temp_v0 = arg0->unk2C;
  if (temp_v0 != 0)
  {
    var_v1 = temp_v0;
  }
  else
  {
    var_v1 = arg0->unk30;
  }
  temp_v0_2 = ((func_8000B8F0_StructB *) D_80089460)->unk2C;
  sp1C = var_v1;
  ((func_8000B8F0_Struct *) sp1C)->unk12 = (s16) ((((short) func_8001EF38(temp_v0_2->unk3C - temp_v0_2->unk30, temp_v0_2->unk44 - temp_v0_2->unk38)) + 0x1000) & 0x1FFF);
  ((func_8000B8F0_Struct *) sp1C)->unk10 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BBF4.s")


struct func_8000BC5C_Struct {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[4];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

void func_8000BC5C(struct func_8000BC5C_Struct *arg0) {
    arg0->unk6 = 0;
    arg0->unkC = 0xFF;
    arg0->unkD = 0xFF;
    arg0->unkE = 0xFF;
    arg0->unkF = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BC78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C768.s")

