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


struct func_8001C6E8_Struct {
    u8 data[8];
};

extern struct func_8001C6E8_Struct D_800446A4;

u8 func_8001C6E8(u8 arg0) {
    u8 pad[4];
    struct func_8001C6E8_Struct sp4;
    u8 var_v1;

    sp4 = D_800446A4;
    if (arg0 < 8) {
        var_v1 = sp4.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

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


u8 func_8001D588(u8 arg0) {
    u8 c;

    if (arg0 == 0) {
        c = 0x30;
    }
    if (arg0 == 1) {
        c = 0x31;
    }
    if (arg0 == 2) {
        c = 0x32;
    }
    if (arg0 == 3) {
        c = 0x33;
    }
    if (arg0 == 4) {
        c = 0x34;
    }
    if (arg0 == 5) {
        c = 0x35;
    }
    if (arg0 == 6) {
        c = 0x36;
    }
    if (arg0 == 7) {
        c = 0x37;
    }
    if (arg0 == 8) {
        c = 0x38;
    }
    if (arg0 == 9) {
        c = 0x39;
    }
    if (arg0 == 0xA) {
        c = 0x41;
    }
    if (arg0 == 0xB) {
        c = 0x42;
    }
    if (arg0 == 0xC) {
        c = 0x43;
    }
    if (arg0 == 0xD) {
        c = 0x44;
    }
    if (arg0 == 0xE) {
        c = 0x45;
    }
    if (arg0 == 0xF) {
        c = 0x46;
    }
    return c;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001D69C.s")


void func_8001DBC8(s32 arg0, u8 arg1, s8 *arg2) {
    s32 var_s0;

    if (arg0 < 0) {
        *arg2 = 0x2D;
        var_s0 = -arg0;
        arg2++;
    } else {
        var_s0 = arg0;
    }
    if (var_s0 >= 0x10000000) {
        *arg2 = func_8001D588((u8)(((u32)(var_s0 & 0xF0000000)) >> 28));
        arg2++;
    } else if (arg1 >= 8) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0F000000) >> 24));
        arg2++;
    } else if (arg1 >= 7) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00F00000) >> 20));
        arg2++;
    } else if (arg1 >= 6) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000F0000) >> 16));
        arg2++;
    } else if (arg1 >= 5) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0000F000) >> 12));
        arg2++;
    } else if (arg1 >= 4) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00000F00) >> 8));
        arg2++;
    } else if (arg1 >= 3) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000000F0) >> 4));
        arg2++;
    } else if (arg1 >= 2) {
        *arg2 = 0x20;
        arg2++;
    }
    *arg2 = func_8001D588((u8)(var_s0 & 0xF));
    arg2++;
    *arg2 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DFFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E4C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E66C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E768.s")

extern struct func_8001EA48_Struct D_801BBBF0;

extern void func_80005700();
extern void func_801170DC(s32 arg0);
extern s16 D_80089354;
extern s32 D_801BBD50;

void func_8001E830(s32 arg0, s32 arg1) {
    u8 *base;

    D_80089354 = 2;
    base = (u8 *)&D_801BBBF0;
    base[0x15D] = 0;
    base[0x164] = 0;
    func_80005700(arg0);
    D_801BBD50 = 0;
    func_801170DC(4);
}


void func_80006214(s32);

struct func_8001E87C_Sub {
    u8 pad[0xB];
    s8 unkB;
    u8 pad2[4];
    s16 unk10;
};

struct func_8001E87C_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_8001E87C_Sub *unk30;
};

void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1) {
    s32 var_v0;

    *(u16 *) ((u8 *) &D_801BBBF0 + 0x158) = (u16) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) - 1);
    D_80089354 = 0;
    if (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) != 0) {
        func_80006214(arg0);
        (*arg1)->unk30->unk10 = 0x1002;
        (*arg1)->unk30->unkB = (s8) ((s32) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) * 0xFF) / (s32) *(u16 *) ((u8 *) &D_801BBBF0 + 0x154));
        return;
    }
    (*arg1)->unk22 = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x164) = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) = (u8) (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) & 0xF);
    func_80005700();
    *(s32 *) ((u8 *) &D_801BBBF0 + 0x160) = 0;
    if (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15E) != 0) {
        var_v0 = 0x80;
    } else {
        var_v0 = 4;
    }
    func_801170DC(var_v0 & 0xFFFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001E978.s")


struct func_8001EA48_Struct {
    u8 pad[0x156];
    s16 unk156;
    u8 pad2[0x15D - 0x158];
    u8 unk15D;
};


void func_8001EA48(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
    }
}


void func_8001EA74(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
        *(s16 *)&D_801BBBF0.pad[0x154] = 1;
    }
}


struct func_8001EAA4_Struct {
    u8 pad[0x154];
    s16 unk154;
    s16 unk156;
    s16 unk158;
    u8 pad2[3];
    u8 unk15D;
    u8 pad3[2];
    s32 unk160;
};

void func_8001EAA4(void) {
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk160 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk15D = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk156 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk154 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk158 = 0;
}

