#include "common.h"


typedef struct func_80151B30_Struct {
    u8 pad0[0x1D];
    u8 unk1D;
    u8 pad1[0x16E - 0x1E];
    u16 unk16E;
    u32 unk170;
    u32 unk174;
    u8 pad2[0x17A - 0x178];
    u16 unk17A;
} func_80151B30_Struct;

extern func_80151B30_Struct D_801BBBF0;
extern void func_80151B98(s32 arg0);
extern void func_80151BD0(s32 arg0);

void func_80151B30(void) {
    func_80151B98(1);
    func_80151BD0(0);
    func_80151C08(0);
    func_80151C40(0);
    if (D_801BBBF0.unk17A != 0) {
        D_801BBBF0.unk1D = (u8) (D_801BBBF0.unk17A - 1);
        D_801BBBF0.unk17A = 0;
    }
    D_801BBBF0.unk16E = 0;
    D_801BBBF0.unk170 = 0;
    D_801BBBF0.unk174 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BFC.s")


extern u8 D_801BBD5C;

s32 func_80151C08(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 < 2) {
        D_801BBD5C = arg0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_801521C8.s")

