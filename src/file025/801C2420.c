#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C2420.s")


extern void func_8001F540(s32);
extern void func_801C288C(s32);

typedef struct func_801C250C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
} func_801C250C_Struct;

s32 func_801C250C(func_801C250C_Struct *arg0) {
    if (arg0->unkC != 0) {
        func_801C288C(arg0->unk0);
        func_8001F540(arg0->unkC);
        arg0->unkC = 0;
    }
    if (arg0->unk10 != 0) {
        func_801C288C(arg0->unk4);
        func_8001F540(arg0->unk10);
        arg0->unk10 = 0;
    }
    return 1;
}


extern void func_801C27BC(s32, s32, s32);

void func_801C2570(s32 arg0, s32 arg1) {
    func_801C27BC(arg0, arg1, 0);
}



void func_801C2590(s32 arg0, s32 arg1) {
    func_801C27BC(arg0, arg1, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C25B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C2608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C26C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C276C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C278C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C27BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C288C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C28F0.s")

