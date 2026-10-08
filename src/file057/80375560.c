#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_80375560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_80375634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_80375688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_8037573C.s")


extern void func_800058DC(void *, void *);
extern void func_803758FC(void);

typedef struct func_803757B0_Struct {
    u8 pad[0x33];
    u8 unk33;
    u8 unk34;
    u8 pad2[0x3];
    u8 unk38;
} func_803757B0_Struct;

void func_803757B0(func_803757B0_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk33 = 0;
    arg0->unk38 = 0;
    func_800058DC(arg0, func_803758FC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_803757E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_803758FC.s")


extern void func_80005700(void *);
extern void func_801479A8(s32);

typedef struct func_803762CC_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_803762CC_Struct;

void func_803762CC(func_803762CC_Struct *arg0, s32 arg1) {
    func_801479A8(arg0->unk2C);
    func_80005700(arg0);
}

