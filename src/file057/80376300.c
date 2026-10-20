#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803763D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803764CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803765D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803767F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376900.s")


extern void func_803763D4();
extern void func_803764CC(void *);
extern void func_803765D4();
extern void func_80376708();
extern void func_803767F4();
extern void func_80376900(void *);
extern u8 D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;

void func_80376B2C(void *arg0) {
    u8 *var_v0;
    u32 temp_v1;

    if ((u32) arg0 == (u32) &D_801BBBF0 + 0x44C) {
        var_v0 = &D_801BC3D8;
    } else {
        var_v0 = &D_801BC03C;
    }
    temp_v1 = *(u32 *) ((u8 *) arg0 + 0x38);
    if ((temp_v1 >> 0x1F) == 0) {
        if (((u32) (*(u32 *) (var_v0 + 0x30) << 0xB) >> 0x1E) != 0) {
            func_803767F4();
            func_80376900(arg0);
            return;
        }
        func_803763D4();
        func_803764CC(arg0);
        return;
    }
    if (((u32) (temp_v1 * 8) >> 0x1F) == 1) {
        func_80376708();
        return;
    }
    func_803765D4();
}


struct func_80376BE4_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
extern u8 D_801842B0[];

void func_80376BE4(struct func_80376BE4_Struct *arg0)
{
  u8 temp_v1;
  if (arg0->unk2D9 < 0xE)
  {
    arg0->unk2D8 = 0;
    return;
  }
  if (arg0->unk2D9 < 0x22)
  {
    arg0->unk2D8 = 1;
    return;
  }
  if (arg0->unk2D9 < 0x25)
  {
    arg0->unk2D8 = 3;
    return;
  }
  if (arg0->unk2D9 < 0x3E)
  {
    arg0->unk2D8 = 2;
    return;
  }
  if (arg0->unk2D9 < 0x41)
  {
    arg0->unk2D8 = 8;
    return;
  }
  if (arg0->unk2D9 < 0x4E)
  {
    temp_v1 = D_801842B0[((unsigned int) arg0->unk2D9) * 0x1C];
    if (temp_v1 == 7)
    {
      goto case7;
    }
    if (temp_v1 == 8)
    {
      goto case8;
    }
    if (temp_v1 == 9)
    {
      goto case9;
    }
    if (temp_v1 == 10)
    {
      goto case10;
    }
    arg0->unk2D8 = 4;
    return;
    case7:
    arg0->unk2D8 = 4;

    return;
    case8:
    arg0->unk2D8 = 6;

    return;
    case9:
    arg0->unk2D8 = 5;

    return;
    case10:
    arg0->unk2D8 = 7;

  }
}


struct func_80376CCC_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

void func_80376CCC(struct func_80376CCC_Struct *arg0) {
    if (arg0->unk2D9 < 0x14) {
        arg0->unk2D8 = 0xB;
        return;
    }
    if (arg0->unk2D9 < 0x1E) {
        arg0->unk2D8 = 0xC;
        return;
    }
    arg0->unk2D8 = 0xB;
}

