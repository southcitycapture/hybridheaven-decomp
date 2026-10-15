#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014ADB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B034.s")

void *func_8014B5E8(void);

s32 func_8014B6F8(u16);

struct func_8014B0BC_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};

s32 func_8014B0BC(f32 arg0, f32 arg1, f32 arg2, s16 arg3, u16 arg4, u8 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9) {
    struct func_8014B0BC_Struct *temp_v0;

    if ((s32) arg4 < 0x8000) {
        return 0;
    }
    if (func_8014B6F8(arg4) != 0) {
        return 0;
    }
    temp_v0 = (struct func_8014B0BC_Struct *) func_8014B5E8();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk0 = (s8) (arg8 | 1);
    temp_v0->unk1 = arg9;
    temp_v0->unk2 = (s16) (s32) arg0;
    temp_v0->unk4 = (s16) (s32) arg1;
    temp_v0->unk6 = (s16) (s32) arg2;
    temp_v0->unk8 = arg3;
    temp_v0->unkA = arg4;
    temp_v0->unkE = arg7;
    temp_v0->unkC = arg5;
    temp_v0->unkD = (s8) arg6;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B1A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B28C.s")

void *func_8014B7CC(s32);

s32 func_8014B2CC(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return temp_v0[1];
    }
    return 0xFF00;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B2FC.s")


s32 func_8014B33C(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0xFF00;
}



s32 func_8014B36C(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        *temp_v0 |= 0x10;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B3B0.s")



s32 func_8014B3F0(s32 arg0) {
    void *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return ((u8 *)temp_v0)[8];
    }
    return 0xFF00;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B4A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B518.s")


extern u8 D_801BED38;
extern u8 D_801BEF38;

void *func_8014B5E8(void) {
    u8 *var_v1;

    for (var_v1 = &D_801BED38; ; ) {
        if (!(var_v1[0x0] & 1)) {
            return var_v1;
        }
        if (!(var_v1[0x10] & 1)) {
            return var_v1 + 0x10;
        }
        if (!(var_v1[0x20] & 1)) {
            return var_v1 + 0x20;
        }
        if (!(var_v1[0x30] & 1)) {
            return var_v1 + 0x30;
        }
        var_v1 += 0x40;
        if (var_v1 == &D_801BEF38) {
            return NULL;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B6F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B7CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B8DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B9FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014BB50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014BC18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014BC78.s")



s32 func_8014C068(s32 arg0) {
    u8 *temp_v0;
    s32 *arg_p;

    arg_p = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (*temp_v0 & 2)) {
        return 1;
    }
    return 0;
}



s32 func_8014C0A8(s32 arg0) {
    u8 *temp_v0;
    u8 temp_v1;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        if ((temp_v1 & 2) && (temp_v1 & 4)) {
            return 1;
        }
    }
    return 0;
}



s32 func_8014C0F0(s32 arg0) {
    u8 *temp_v0;
    u8 temp_v1;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        if ((temp_v1 & 2) && (temp_v1 & 8)) {
            return 1;
        }
    }
    return 0;
}

struct func_8014C1F0_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

s32 func_8014C138(unsigned int arg0)
{
  struct func_8014C1F0_Struct *temp_v0;
  temp_v0 = (struct func_8014C1F0_Struct *) func_8014B7CC(arg0 & 0xFFFF);
  if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0))
  {
    if (!arg0)
    {
    }
    return func_801FF348(temp_v0->unk4);
  }
  return 0;
}


s32 func_8014C194(unsigned int arg0)
{
  struct func_8014C1F0_Struct *temp_v0;
  temp_v0 = (struct func_8014C1F0_Struct *) func_8014B7CC(arg0 & 0xFFFF);
  if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0))
  {
    if (!arg0)
    {
    }
    return func_801FF3D0(temp_v0->unk4);
  }
  return 0;
}




s32 func_8014C1F0(s32 arg0) {
    struct func_8014C1F0_Struct *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL && (temp_v0->unk0 & 2) && temp_v0->unk4 != 0) {
        return temp_v0->unk9;
    }
    return 0xFF00;
}


struct func_8014C23C_Inner {
    u8 pad0[0xA8];
    u16 unkA8;
};

struct func_8014C23C_Struct {
    u8 unk0;
    u8 pad1[3];
    struct func_8014C23C_Inner *unk4;
};

s32 func_8014C23C(s32 arg0) {
    struct func_8014C23C_Struct *temp_v0;
    struct func_8014C23C_Inner *temp_v1;
    s32 *temp_ptr;

    temp_ptr = &arg0;
    temp_v0 = (struct func_8014C23C_Struct *) func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (temp_v0->unk0 & 2)) {
        temp_v1 = temp_v0->unk4;
        if (temp_v1 != NULL) {
            temp_v1->unkA8 = temp_v1->unkA8 | 8;
        }
    }
    return 0;
}


u8 *func_8014C294(void) {
    return &D_801BED38;
}


s32 func_8014C2A0(void) {
    return 0x200;
}

