#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014ADB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014AEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B0BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B1A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B2CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B33C.s")


u8 *func_8014B7CC(s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B3F0.s")

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


u8 *func_8014B7CC(s32);                             /* extern */

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014C138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014C194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014C1F0.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014C294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014C2A0.s")

