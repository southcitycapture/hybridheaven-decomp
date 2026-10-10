#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800024D0.s")


extern void func_80032FB0(void *, void *, s32);
extern u8 D_8005CE20[];
extern u8 D_8005CE70[];

void func_8000257C(u8 arg0) {
    s32 temp_a2;

    temp_a2 = arg0;
    func_80032FB0(D_8005CE20, D_8005CE70 + temp_a2 * 0x68, temp_a2);
}


extern void func_800308D0(void *, s32);

void func_800025C8(s32 arg0) {
    s32 temp_a1;
    s32 *pad;

    pad = &arg0;
    temp_a1 = arg0 & 0xFF;
    func_800308D0(&D_8005CE70[temp_a1 * 0x68], temp_a1);
}


extern void func_8002A350(void *, u16, s32, void *, void *, s32, s32);

void func_8000260C(u8 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    func_8002A350(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 8), *(s32 *)(arg1 + 4), arg1 + 0xE, arg1 + 0xA, arg2, arg3);
}


extern void func_80031BC0(void *, u16, s32, void *, void *);

void func_80002684(u8 arg0, u8 *arg1) {
    func_80031BC0(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA);
}


extern void func_8002EE40(void *, u16, s32, void *, void *, s32);

void func_800026E4(u8 arg0, u8 *arg1, s32 arg2) {
    func_8002EE40(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800027D8.s")


extern void func_8002A7D0(void *arg0, s32 arg1);

void func_8000281C(s32 arg0) {
    func_8002A7D0(D_8005CE20, arg0);
}


extern void func_80029784(void *, s32, s32, s32, s32, s32);

void func_80002844(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80029784((void *)(D_8005CE70 + arg0 * 0x68), arg1, 0, arg2, arg3, arg4);
}



void func_800028A8(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80029784(D_8005CE70 + arg0 * 0x68, arg1, 1, arg2, arg3, arg4);
}

extern s32 D_80037770[];
extern s32 D_80037780[];

void func_8000290C(void)
{
  s32 func_80027A90();
  s32 *temp_s1;
  s32 *var_s0;
  s32 var_s2;
  s32 var_s3;
  var_s2 = 0; var_s3 = 0; var_s0 = &D_80037770[0]; do {
    temp_s1 = (s32 *) ((u8 *) &D_80037780[0] + var_s3);
    if (((*var_s0) != 0) && ((*temp_s1) != 0))
    {
      if (func_80002A94(var_s2 & 0xFF) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      else
        if (func_80027A90(D_8005CE70 + (var_s2 * 0x68), 0) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      *var_s0 -= 1;
    }
    var_s2 += 1;
    var_s3 += 4;
    var_s0 += 1;
  }
  while (var_s2 != 4);
}


s32 func_80002A94(s32);

void func_80002A04(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 != 4; var_s0++) {
        if (func_80002A94(var_s0 & 0xFF) == 0) {
            D_80037780[var_s0] = 1;
            D_80037770[var_s0] = 3;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002A94.s")


extern s32 func_80027A90(void *, s32, s32);

s32 func_80002B44(u8 arg0) {
    u32 temp_a2;

    temp_a2 = arg0 & 0xFF;
    if (D_80037780[temp_a2] != 0) {
        return func_80027A90(D_8005CE70 + temp_a2 * 0x68, 1, temp_a2) & 0xFF;
    }
    return 0xFF;
}



s32 func_80002BAC(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    if (D_80037780[arg0] != 0) {
        D_80037770[arg0] = 3;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_8000303C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80003118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800031EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800032E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800033CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80003550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800035C4.s")

