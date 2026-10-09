#include "common.h"


typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;

extern func_80004310_Struct D_800892B0;
extern s32 D_800894F4[];

void func_80004310(s32 arg0) {
    volatile u8 *p = &D_800892B0.unk1BD;
    D_800894F4[*p] = arg0;
    *p = *p + 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_8000433C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_800044BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_800044FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_800045E8.s")


extern s32 func_8000469C(s32, s32);
extern void func_80016EAC(u16);

s32 func_80004664(s32 arg0, s32 arg1) {
    func_80016EAC((u16) arg0);
    func_8000469C(arg0, arg1);
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_8000469C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004EE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004F98.s")


extern u32 D_80038FEC[];

s32 func_8000511C(u16 arg0) {
    return D_80038FEC[arg0] & 0x7FFFFFFF;
}


extern s32 D_80038FF0[];

s32 func_80005144(u16 arg0) {
    return D_80038FF0[arg0] & 0x7FFFFFFF & 0x7FFFFFFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80005170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_800051A4.s")


extern s32 func_8001703C(s32);
extern s32 func_80017064(s32);

void func_80005204(s32 arg0) {
    func_8001703C(func_80017064(arg0 & 0xFFFF));
}



s32 func_8000522C(s32 arg0, s32 arg1) {
    return func_8001703C(func_80017064(arg0 & 0xFFFF)) + (arg1 & 0xFFFFFF);
}

