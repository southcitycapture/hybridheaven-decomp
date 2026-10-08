#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80378340.s")


extern void func_802169AC(void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80145348(void *, s32, s32);
extern void func_803784C0(void);

void func_8037837C(void *arg0, s32 arg1) {
    u8 sp47[4];

    func_802169AC(arg0, &sp47[3], 0x66, 0x50, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 0);
    func_80145348(arg0, 2, 0);
    func_802169AC(arg0, &sp47[3], 0x76, 0x60, 0xA6, 0x80, 0x20, 0, 0, 0xFF, 0xCB, 1);
    func_80145348(arg0, 2, 0);
    func_802169AC(arg0, &sp47[3], 0x66, 0xE0, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 2);
    func_80145348(arg0, 2, 0);
    func_800058DC(arg0, func_803784C0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803784C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803784CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803787B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803787F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_8037890C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80378CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803790F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80379190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80379244.s")


struct func_80379498_Struct {
    s16 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
};

extern struct func_80379498_Struct D_8038A918;

void func_80379498(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 *p;
    f32 *q;
    p = &arg0;
    q = &arg3;
    arg0 &= 0xFF;
    D_8038A918.unk0 = arg0;
    D_8038A918.unk4 = arg1;
    D_8038A918.unk8 = arg2;
    D_8038A918.unkC = arg3;
    D_8038A918.unk10 = arg4;
    D_8038A918.unk14 = arg5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803794DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80379690.s")

