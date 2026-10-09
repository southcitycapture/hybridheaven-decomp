#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803813C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038150C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381F40.s")


extern u8 D_8038CA30[];

void func_80382140(u8 arg0, u8 arg1, u8 arg2) {
    func_8001B204((arg1 + 1) & 0xFF, 0x75, (s16) ((arg1 * 0xE) + 0x64), D_8038CA30, 1, (s32) arg2, (s32) arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803821B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803822F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803823D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803825CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382744.s")


typedef struct func_803828F0_Struct {
    u8 unk[7];
} func_803828F0_Struct;

typedef struct func_803828F0_Obj {
    u8 pad0[0xB0];
    s16 unkB0;
} func_803828F0_Obj;

extern u16 D_80089474[];
extern u8 D_801BC03C[];
extern func_803828F0_Struct D_80389BC4;
extern func_803828F0_Struct D_80389BCC;
extern func_803828F0_Struct D_80389BD4;

void *func_800058DC(void *, void *);
void func_80382A24(void);
void func_803821B0(void *, s32, s32, s32, s32, s32, s32, s8 *);
void func_803822F0(void *, s32, s32, s32, s32, s32, s32, s8 *);

void func_803828F0(void *arg0, void *arg1) {
    s8 sp4F;
    u8 sp4E;
    func_803828F0_Struct sp44;
    func_803828F0_Struct sp3C;
    func_803828F0_Struct sp34;
    s16 temp_v0;

    sp4F = 0;
    sp44 = D_80389BC4;
    sp3C = D_80389BCC;
    sp34 = D_80389BD4;
    temp_v0 = ((func_803828F0_Obj *) arg0)->unkB0;
    ((func_803828F0_Obj *) arg0)->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        sp4E = D_801BC03C[0x2FF];
        func_803821B0(arg0, 0x2E, 0x9C, 0x50, 0x50, 0xFF, 3, &sp4F);
        func_803822F0(arg0, 0x7C, 0x9E, ((u8 *) &sp44)[sp4E], ((u8 *) &sp3C)[sp4E], ((u8 *) &sp34)[sp4E], sp4E, &sp4F);
        ((func_803828F0_Obj *) arg0)->unkB0 = 0x40;
        func_800058DC(arg0, func_80382A24);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803831B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80383210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803832F4.s")


struct func_803833A8_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
};

extern void func_80005670(void *, void *, void *);
extern void func_80005700(void *);
extern u8 D_80389B50[];

void func_803833A8(struct func_803833A8_Struct *arg0, s32 arg1) {
    if ((arg0->unkB0-- == 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_80005670(arg0->unkC, D_80389B50, arg0);
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80383414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80383A60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803840A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803845BC.s")


typedef struct func_80384718_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 pad1[0xB0 - 0xAA];
    s16 unkB0;
} func_80384718_Struct;

extern void func_80381F40(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 *a7);
extern u8 D_80240730[];
extern void func_803847DC();
extern void func_80384AB4();

void func_80384718(func_80384718_Struct *arg0, s32 arg1) {
    u8 sp2F;

    arg0->unkA9 = 0;
    if (D_80240730[0x20] != 0) {
        func_80381F40(arg0, 0, 0x48, 0xA0, 0xA0, 0xA0, 0x17, &sp2F);
        func_80381F40(arg0, 0x2E, 0x48, 0xFF, 0xFF, 0xFF, 0x19, &sp2F);
        arg0->unkB0 = 0xA;
        func_800058DC(arg0, func_803847DC);
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_80384AB4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803847DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038481C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384E4C.s")


extern void func_80126E88(s32, void *);

void func_80384ED0(struct func_803833A8_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        ((u8 *) arg0->unkC)[0xB3] = 1;
        func_80126E88(0xC1, arg0);
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80385018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80385060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80385208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038540C.s")

