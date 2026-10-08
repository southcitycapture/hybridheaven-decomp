#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_80241010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_80241054.s")


struct func_80241304_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern void *func_80005670(s32 arg0, void *arg1);
extern u8 D_80248E78[];

void *func_80241304(s32 arg0, s32 arg1) {
    struct func_80241304_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248E78);
    if (temp_v0 != NULL) {
        temp_v0->unk2C = arg1;
    }
    return temp_v0;
}


typedef struct func_80241340_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 unk35;
} func_80241340_Struct;

extern s32 func_800058DC(void *, void *);
extern void func_80241378(void);

void func_80241340(func_80241340_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk35 = 0;
    arg0->unk30 = arg0->unk2C;
    func_800058DC(arg0, func_80241378);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_80241378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_802415B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_802415D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_80241640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_8024164C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_802416B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_8024171C.s")


struct func_8024175C_Struct {
    u8 pad[0xF26];
    s8 unkF26;
};

extern struct func_8024175C_Struct D_801BBBF0;

void func_8024175C(s32 arg0, s32 arg1) {
    D_801BBBF0.unkF26 = D_801BBBF0.unkF26 + 4;
    if (D_801BBBF0.unkF26 >= 0x70) {
        D_801BBBF0.unkF26 = 0x10;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/_pad_16.s")

