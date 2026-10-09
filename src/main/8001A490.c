#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001A490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001A584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001A804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001AA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001ADD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001B0B0.s")


extern u8 D_8008EF70[];

void *func_8001B154(s32 arg0) {
    if (arg0 < 0x1C) {
        return D_8008EF70 + arg0 * 0x11A;
    }
    return NULL;
}



void func_8001B194(u8 arg0, s16 arg1, s16 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = D_8008EF70 + arg0 * 0x11A;
    temp_v0[8] = arg3;
    temp_v0[0] = 1;
    temp_v0[1] = 1;
    if (arg1 != 0x7D0) {
        *(s16 *)(temp_v0 + 2) = arg1;
    }
    *(s16 *)(temp_v0 + 4) = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001B204.s")


typedef struct func_8001BC04_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
} func_8001BC04_Struct;

u8 func_8001BD20(u8, u16);
void func_8001C0B0(u8, u16, u8, s32);
s32 func_8001D394(u8, u16);
extern u8 D_80090E48;
extern u8 D_80090E49;
extern u8 D_80090E4A;
extern u8 D_80090E4B;
extern u8 D_80090E4C;
extern u8 D_80090E4D;
extern u8 D_80090E4E;
extern u8 D_80090E4F;

s32 func_8001BC04(u8 arg0, u16 arg1, func_8001BC04_Struct *arg2, u16 arg3)
{
  D_80090E4C = func_8001BD20(D_80090E48, arg3);
  if ((arg1 + arg2->unk4) < 0x101)
  {
    func_8001C0B0(arg0, arg1, D_80090E48, func_8001D394(D_80090E48, arg3) & 0xFFFF);
    arg2->unk0 = D_80090E48;
    arg2->unk1 = D_80090E49;
    arg2->unk2 = D_80090E4A;
    arg2->unk3 = D_80090E4B;
    arg2->unk4 = D_80090E4C;
    arg2->unk5 = D_80090E4D;
    arg2->unk6 = D_80090E4E;
    arg2->unk7 = D_80090E4F;
    arg2->unk8 = 0xFF;
    return 1;
  }
  arg2->unk0 = 0xFF;
  arg2->unk1 = 0;
  arg2->unk2 = 0xFF;
  arg2->unk3 = 0;
  arg2->unk4 = 0;
  arg2->unk5 = 0;
  arg2->unk6 = 0;
  arg2->unk7 = 0;
  return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001BD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001BFE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C6E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C7A4.s")


struct func_8001C824_Struct {
    u8 data[0x54];
};

extern struct func_8001C824_Struct D_8004474C;

u8 func_8001C824(u8 arg0) {
    u8 var_v1;
    struct func_8001C824_Struct local;

    local = D_8004474C;
    if (arg0 < 0x54) {
        var_v1 = local.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C88C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001CE9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001CF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001D2E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001D394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001D588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001D69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DBC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DFFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E4C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E66C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E978.s")


struct func_8001EA48_Struct {
    u8 pad[0x156];
    s16 unk156;
    u8 pad2[0x15D - 0x158];
    u8 unk15D;
};

extern struct func_8001EA48_Struct D_801BBBF0;

void func_8001EA48(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001EA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001EAA4.s")

