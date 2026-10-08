#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038CFF4.s")


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D668(void *arg0, void *arg1, void *arg2) {
    u8 *p0 = (u8 *) arg0;
    u8 *p1 = (u8 *) arg1;
    u8 *p2 = (u8 *) arg2;

    if (((*(u32 *) (p2 + 0x30) << 11) >> 30) != 0) {
        func_80229404(arg1);
        *(s16 *) (p0 + 0x9A) = (s16) (*(s16 *) (p0 + 0x9A) | 8);
    } else if ((*(u32 *) (p1 + 0x38) >> 31) != 0) {
        p1[0x2D8] = 2;
        *(s16 *) (p0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (func_8022B640(2) != 0) {
        p1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        p1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    p0[0xA1] = p1[0x2D8];
    p0[0xA2] = p1[0x2D9];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038D74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038D7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038D9D8.s")

