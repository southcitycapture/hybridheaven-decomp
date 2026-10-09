#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000AFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B1E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B258.s")


extern void func_8000B258(s32, void *);
extern void func_8000B67C(s32, void *);

void func_8000B578(s32 arg0, s32 *arg1) {
    s32 sp18[0x40 / 4];

    func_8000B67C(arg1[7], sp18);
    func_8000B258(arg0, sp18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B83C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BBF4.s")


struct func_8000BC5C_Struct {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[4];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

void func_8000BC5C(struct func_8000BC5C_Struct *arg0) {
    arg0->unk6 = 0;
    arg0->unkC = 0xFF;
    arg0->unkD = 0xFF;
    arg0->unkE = 0xFF;
    arg0->unkF = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BC78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C768.s")

