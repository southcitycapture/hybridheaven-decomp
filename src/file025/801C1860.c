#include "common.h"

extern s32 D_801D8DC0;
extern s32 D_801D8DD0;
extern s32 D_801D8DD4;
extern s32 D_801D8DD8;
extern s32 D_801D8DDC;
extern s32 D_801DED70[];
extern s32 D_801DEF70[];
extern s32 func_8001B204();
extern s32 func_801C1C90(s32, s32, s32);                   /* extern */
extern s32 func_801C1E94();
extern s32 func_801C1F4C();
extern u16 D_80089474[];
extern u8 D_801DCF20[];
extern u8 D_801DCF3C[];
extern void func_801C1860(void);
extern void func_801C1D3C(void);                           /* extern */



void func_801C1860(void) {
    s32 i;

    D_801D8DC0 = 0;
    for (i = 0; i < 32; i++) {
        D_801DED70[i * 4 + 0] = -1;
        D_801DED70[i * 4 + 1] = -1;
        D_801DED70[i * 4 + 2] = -1;
        D_801DED70[i * 4 + 3] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C18CC.s")



s32 func_801C1974(void) {
    func_801C1860();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1A70.s")


s32 func_801C1AB4(void)
{
  s32 *p;
  s32 a;
  s32 r;
  a = 1;
 p = D_801DED70; do {
    if ((p[0] != (-1)) && (p[1] != (-1)))
    {
      a &= p[3];
    }
    p += 4;
    r = a;
  }
  while (p != D_801DEF70);
  r = a;
  func_801C1D3C();
  return r;
}



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



s32 func_801C1BB8(void) {
    s32 ret;

    ret = 0;
    return (D_801D8DC0 != 0) ? 1 : ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1BDC.s")



s32 func_801C1C84(void) {
    return D_801D8DC0;
}


/* Same signature as context.h's func_801BF680, spelled with the struct tag so it
   works before the typedef func_801C1CF0_Struct is declared later in the source file. */
struct func_801C1CF0_Struct;
extern void func_801BF680(s32, struct func_801C1CF0_Struct **);

s32 func_801C1C90(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp24;
    s32 temp_v1;
    s32 var_v0;

    func_801BF680(arg0, (struct func_801C1CF0_Struct **)&sp24);
    temp_v1 = *(s32 *)((u8 *)sp24 + (arg1 * 0x18) + 0xC);
    var_v0 = arg2 + 1;
    return (arg2 == temp_v1) || (var_v0 == temp_v1);
}


typedef struct func_801C1CF0_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8];
} func_801C1CF0_Struct;


s32 func_801C1CF0(s32 arg0, s32 arg1, s32 arg2) {
    func_801C1CF0_Struct *sp1C;
    s32 off;

    func_801BF680(arg0, &sp1C);
    off = arg1 * 0x18;
    return arg2 >= ((func_801C1CF0_Struct *)((u8 *)sp1C + off))->unkC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1D60.s")



s32 func_801C1D9C(void) {
    return D_801D8DD0;
}



s32 func_801C1DA8(u32 arg0) {
    return D_801D8DD0 >= arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1E00.s")



s32 func_801C1E20(void) {
    return D_801D8DD4;
}



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


s32 func_801C1E94() {
    if (D_801D8DD4 != 0) {
        D_801D8DD8 = D_801D8DDC;
        if (D_80089474[1] & 0x1000) {
            D_801D8DDC = 1;
            func_8001B204(7, 0x14, 0x28, D_801DCF20);
        } else {
            D_801D8DDC = 0;
            func_8001B204(7, 0x14, 0x28, D_801DCF3C);
        }
        return (D_801D8DDC == 1) && (D_801D8DD8 == 0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1860/func_801C1F4C.s")

