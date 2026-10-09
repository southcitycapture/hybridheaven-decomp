#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCBE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCE0C.s")


extern void func_800058DC();
extern void func_801FCF40(void);

void func_801FCF14(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_801FCF40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCF98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD0F0.s")


struct func_801FD110_Inner {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_801FD110_Struct {
    u8 pad0[0x24];
    struct func_801FD110_Inner *unk24;
};

extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern u8 func_80126EAC[];

void func_801FD110(struct func_801FD110_Struct *volatile arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *arg1;
    temp_v0 = arg0->unk24->unk30;
    func_8013E5C4(temp_a0, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80126EAC);
}


struct func_801FD168_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
    s16 unkA6;
    s32 unkA8;
    u8 unkAC;
};

struct func_801FD168_Src {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern s32 D_801BBC2C;
extern struct func_801FD168_Src D_802172A4;
void *func_8012C4D0(s32, struct func_801FD168_Src, s32);

void *func_801FD168(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, s16 arg7, s16 arg8, u8 arg9, u8 arg10, s32 arg11) {
    struct func_801FD168_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802172A4, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = 2;
        temp_v0->unk91 = arg9;
        temp_v0->unk94 = arg0;
        temp_v0->unk98 = arg1;
        temp_v0->unk9C = arg2;
        temp_v0->unk40 = arg3;
        temp_v0->unk44 = arg4;
        temp_v0->unk48 = arg5;
        temp_v0->unkA0 = arg6;
        temp_v0->unkA2 = arg7;
        temp_v0->unkA4 = arg8;
        temp_v0->unk3C = 0;
        temp_v0->unk92 = 0;
        temp_v0->unkA6 = 0;
        temp_v0->unkAC = arg10;
        temp_v0->unkA8 = arg11;
        return temp_v0;
    }
    return NULL;
}


extern void func_801FD0F0(void);

struct func_801FD260_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x72 - 0x30];
    u16 unk72;
    u8 pad2[0x8C - 0x74];
    void (*unk8C)(void);
};

void func_801FD260(struct func_801FD260_Struct *arg0, struct func_801FD260_Struct *arg1) {
    void (*temp)(void);

    temp = func_801FD0F0;
    arg0->unk2C = arg0->unk2C | 0x8000;
    arg0->unk72 = arg1->unk72;
    arg0->unk8C = temp;
}


s16 func_801FD284(s16 arg0, s16 arg1, f32 arg2) {
    s16 d;

    arg0 &= 0x1FFF;
    arg1 &= 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            return (s16)(s32)((f32)arg0 + (f32)d * arg2) & 0x1FFF;
        }
        return (s16)(s32)((f32)arg0 - (f32)(0x2000 - d) * arg2) & 0x1FFF;
    }
    d = arg0 - arg1;
    if (d < 0x1000) {
        return (s16)(s32)((f32)arg0 - (f32)d * arg2) & 0x1FFF;
    }
    return (s16)(s32)((f32)arg0 + (f32)(0x2000 - d) * arg2) & 0x1FFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD3EC.s")


s32 func_801FD4F4(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_a2;

    temp_a2 = arg2;
    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        temp_v0 = arg1 - arg0;
        if (temp_v0 < 0x1000) {
            if (temp_a2 < temp_v0) {
                goto block_end;
            }
            return 1;
        }
        if (temp_v0 < (0x2000 - temp_a2)) {
            goto block_end;
        }
        return 1;
    }
    temp_v0 = arg0 - arg1;
    if (temp_v0 < 0x1000) {
        if (temp_a2 < temp_v0) {
            goto block_end;
        }
        return 1;
    }
    if (temp_v0 < (0x2000 - temp_a2)) {
        goto block_end;
    }
    return 1;
block_end:
    return 0;
}


s32 func_801FD5BC(f32 arg0, f32 arg1, f32 arg2) {
    if ((arg0 < -1000.0f) || (arg0 > 1000.0f) || (arg1 < -1000.0f) || (arg1 > 1000.0f) || (arg2 < -1000.0f) || (arg2 > 1000.0f)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD68C.s")


extern u8 D_801BBC0D;
extern u8 D_802174D4[];

f32 func_801FD780(u16 arg0) {
    return *(f32 *)(D_802174D4 + ((arg0 * 0xC) + (D_801BBC0D * 4)));
}


struct func_801FD7B4_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
    u8 pad2[0xA0 - 0x9C];
    f32 unkA0;
};

extern void func_80129FB8(f32, f32, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_801FC830(f32, f32, s32, s32, s32);
extern f32 D_8021922C;
extern void func_801FD884(void);

void func_801FD7B4(struct func_801FD7B4_Struct *arg0, s32 arg1) {
    f32 zero = 0.0f;

    func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, zero, zero, zero, zero, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xB4, -4, D_8021922C, 0x14, 0);
    func_801FC830(arg0->unk90, arg0->unk94, arg0->unk98, 0x43160000, 0x3A8);
    arg0->unk3C = 0;
    arg0->unkA0 = 0.0f;
    func_800058DC(arg0, func_801FD884);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD97C.s")


extern void func_80005700(void);
extern u8 D_801BBBF0[];
extern u8 D_801BBC00[];

s32 func_801FDB3C(s32 arg0)
{
  u8 *var_v0;
 var_v0 = D_801BBBF0; do {
    if (arg0 == (*((s32 *) (var_v0 + 0x20C))))
    {
      *((s32 *) (var_v0 + 0x20C)) = 0;
      func_80005700();
      return 1;
    }
    var_v0 += 4;
  }
  while (((s32) var_v0) != ((s32) D_801BBC00));
  return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDDC8.s")


struct func_801FDE78_Struct {
    u8 pad0[0xB0];
    u16 unkB0;
};

extern void func_80002BAC(s32);
extern void func_80020718(s32);
extern void func_801FDEDC(void);

void func_801FDE78(struct func_801FDE78_Struct *arg0, void *arg1) {
    s32 var_s0;

    arg0->unkB0 = 0;
    var_s0 = 0;
    do {
        func_80002BAC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
    func_80020718(0xF);
    func_800058DC(arg0, func_801FDEDC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDEDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDF1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE250.s")


extern void func_801FE700(void);

struct func_801FE5F0_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};

struct func_801FE5F0_Sub {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
};

struct func_801FE5F0_Obj {
    u8 pad0[0x30];
    struct func_801FE5F0_Sub *unk30;
};

void func_801FE5F0(struct func_801FE5F0_Struct *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 temp_v1;
    s16 temp_v0_3;

    var_a2 = 2;
    var_a3 = 2;
    do {
        temp_v1 = var_a3 * 4;
        temp_v0 = ((u8 *) arg0)[0xB1];
        var_a2 = (var_a2 + 1) & 0xFF;
        var_a3 = var_a2;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkA = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk9 = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk8 = temp_v0;
        temp_v0 = ((u8 *) arg0)[0xB1];
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkE = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkD = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkC = temp_v0;
    } while (var_a2 < 0xA);
    temp_v0_3 = arg0->unkB0;
    if (temp_v0_3 == 0) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_801FE700, var_a2);
        return;
    }
    arg0->unkB0 = temp_v0_3 - 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE840.s")


extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801FEA74(void);

typedef struct func_801FEA04_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
} func_801FEA04_Struct;

void func_801FEA04(func_801FEA04_Struct *arg0, s32 arg1)
{
  int new_var;
  s16 temp_v0;
  u32 flag;
  temp_v0 = arg0->unkB0;
  flag = temp_v0 >= 0x1F;
  arg0->unkB0 = temp_v0 + 1;
  new_var = 0x0C000C00;
  temp_v0 = 0;
  if (flag != temp_v0)
  {
    func_80002364(new_var, 0xA, 3, 0);
    arg0->unkB0 = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_801FEA74);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FEA74.s")

