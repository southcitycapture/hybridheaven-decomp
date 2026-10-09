#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E264.s")


s32 func_8000511C(u16);
extern u32 *D_80171CEC[];

s64 func_8000E58C(s32 arg0) {
    s32 ret;

    ret = func_8000511C(**(u16 **) D_80171CEC[((u32) (arg0 & 0xFFFF0000) >> 0x10) & 0xFFFF]);
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000EB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000EC64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000EC9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F2B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FD0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FE48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_800101D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8001061C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010D08.s")


struct func_80011140_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_80010D08(s32, s32, struct func_80011140_Struct, s32, s32);

void func_80011140(s32 arg0, s32 arg1, struct func_80011140_Struct arg2, u16 arg5) {
    func_80010D08(arg0, arg1, arg2, arg5, 0xFFFFFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011198.s")


extern void func_8000F2B8(s32, s32, s32, s32);

void func_800111E0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 0x100) != 0x100) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 0x100;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 0x100, 1, 0);
    }
}



s32 func_80011258(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 0x300) {
        *arg1 = temp_v0 & 0xFCFF;
        func_8000F2B8(*arg0, 0x300, 2, 0);
        return 1;
    }
    return 0;
}



void func_800112B0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 2) != 2) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 2;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 2, 1, 0);
    }
}



s32 func_80011328(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 2) {
        *arg1 = temp_v0 & 0xFFFD;
        func_8000F2B8(*arg0, 2, 2, 0);
        return 1;
    }
    return 0;
}



void func_80011380(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 1) != 1) {
        *arg1 = temp_v0 | 1;
        func_8000F2B8(*arg0, 1, 1, 0);
    }
}



s32 func_800113D0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 1) {
        *arg1 = temp_v0 & 0xFFFE;
        func_8000F2B8(*arg0, 1, 2, 0);
        return 1;
    }
    return 0;
}



void func_80011428(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 0x10) != 0x10) {
        *arg1 = temp_v0 | 0x10;
        func_8000F2B8(*arg0, 0x10, 1, 0);
    }
}



s32 func_80011478(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 0x10) {
        *arg1 = temp_v0 & 0xFFEF;
        func_8000F2B8(*arg0, 0x10, 2, 0);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_800114D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011678.s")

