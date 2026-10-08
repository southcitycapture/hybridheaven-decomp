#include "common.h"


typedef struct func_801CA530_Struct {
    u8 pad[0x8E];
    u16 unk8E;
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u16 unk9A;
} func_801CA530_Struct;

extern func_801CA530_Struct D_8017DC40;

s32 func_801CA530(void) {
    func_801CA530_Struct *p = &D_8017DC40;
    return (p->unk9A + p->unk8E + p->unk90 + p->unk92 + p->unk94 + p->unk96 + p->unk98) & 0xFFFF;
}


extern u16 D_8017DCDC;
extern u16 D_8017DDA4;

s32 func_801CA574(void) {
    return (D_8017DCDC + D_8017DDA4) & 0xFFFF;
}


extern u16 D_8017DCCE[];

u16 func_801CA590(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    return D_8017DCCE[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA530/func_801CA5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA530/func_801CA618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA530/func_801CA624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA530/func_801CA630.s")

