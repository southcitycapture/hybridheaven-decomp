#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802450B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802453F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_8024573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245F8C.s")


struct func_802461CC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_800058DC();
extern void func_80246214();

void func_802461CC(struct func_802461CC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246214);
    }
}


typedef struct func_80246214_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80246214_StructGlobal;

typedef struct func_80246214_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246214_StructObj;

extern func_80246214_StructGlobal *D_8025DDB0;
extern void func_80246284(void);
extern s32 func_80126944(void);
extern s32 func_80133A24(u16);

void func_80246214(func_80246214_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDB0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_80246284);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246B40.s")


void func_80241910(f32 a, f32 b, f32 c);
void func_80246DE0(void);

void func_80246BD4(void) {
    func_80246DE0();
    func_80241910(0.0f, -100.0f, 0.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802471F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80247530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802476F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80247930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80247978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802479E8.s")

