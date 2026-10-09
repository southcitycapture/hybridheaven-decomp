#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013C8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013CC10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013CD04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D09C.s")


struct func_8013D134_Struct {
    u8 pad[0x375];
    u8 unk375;
    u8 unk376;
};

void func_8013D134(struct func_8013D134_Struct *arg0) {
    arg0->unk376 = arg0->unk375;
}


extern u8 D_8018E2FC[];
extern u8 D_8018E300[];

u8 *func_8013D140(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0 < 0xE) {
        return D_8018E2FC;
    }
    return D_8018E300;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D3F8.s")

