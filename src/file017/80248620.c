#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/func_80248620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/func_80248964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/func_80248CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/func_80248E64.s")


struct func_802490A4_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_800058DC();
extern void func_802490EC();

void func_802490A4(struct func_802490A4_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802490EC);
    }
}


typedef struct func_802490EC_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_802490EC_StructGlobal;

typedef struct func_802490EC_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_802490EC_StructObj;

extern func_802490EC_StructGlobal *D_8025DDD0;
extern void func_8024915C(void);
extern s32 func_80126944(void);
extern s32 func_80133A24(u16);

void func_802490EC(func_802490EC_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDD0->unkA2) == 0)
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
    func_800058DC(arg0, func_8024915C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/func_8024915C.s")

