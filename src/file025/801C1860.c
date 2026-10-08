#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C18CC.s")


extern void func_801C1860(void);

s32 func_801C1974(void) {
    func_801C1860();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1AB4.s")


s32 func_801C1C90(s32, s32, s32);                   /* extern */
void func_801C1D3C(void);                           /* extern */
extern s32 D_801D8DC0;
extern s32 D_801DED70[];
extern s32 D_801DEF70[];

s32 func_801C1B1C(void)
{
  s32 *var_s0;
  s32 *var_s3;
  s32 var_s2;
  var_s2 = 1;
 do { if (D_801D8DC0 == 0) { return 0; } var_s0 = D_801DED70; var_s3 = D_801DEF70; } while (0);
  do
  {
    if (var_s0[0] != (-1))
    {
      if (var_s0[1] != (-1))
      {
        var_s2 &= func_801C1C90(var_s0[0], var_s0[1], var_s0[2]);
      }
    }
    var_s0 += 4;
  }
  while (var_s0 != var_s3);
  func_801C1D3C();
  return var_s2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1C90.s")


typedef struct func_801C1CF0_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8];
} func_801C1CF0_Struct;

extern void func_801BF680(s32, func_801C1CF0_Struct **);

s32 func_801C1CF0(s32 arg0, s32 arg1, s32 arg2) {
    func_801C1CF0_Struct *sp1C;
    s32 off;

    func_801BF680(arg0, &sp1C);
    off = arg1 * 0x18;
    return arg2 >= ((func_801C1CF0_Struct *)((u8 *)sp1C + off))->unkC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1E00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1E20.s")


s32 func_801C1E94();
s32 func_801C1F4C();
extern s32 D_801D8DD0;
extern s32 D_801D8DD4;

s32 func_801C1E2C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801D8DD4 != 0) {
        if (func_801C1E94() != 0) {
            var_v1 = 1;
        } else {
            var_v1 = func_801C1F4C();
        }
    }
    if (var_v1 != 0) {
        D_801D8DD0 += 1;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1F4C.s")

