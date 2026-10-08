#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803813C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038150C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381D48.s")


struct func_80381E78_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0xF];
    void *unkA4;
};

extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_8001F6FC(void);
extern u8 D_8038C9DC[];
extern u8 D_8038C9E0[];
extern u8 D_8038C9E4[];
extern u8 D_8038C9E8[];
extern u8 func_8021BF74[];
extern u8 func_8021C198[];

void func_80381E78(struct func_80381E78_Struct *arg0, s32 arg1) {
    func_8001B204(0x10, 0x1C, 0x9E, D_8038C9DC);
    func_8001B204(0x11, 0x1C, 0xAC, D_8038C9E0);
    func_8001B204(0x12, 0x1C, 0xAC, D_8038C9E4);
    func_8001B204(0x13, 0x1C, 0xAC, D_8038C9E8);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0->unkA4, func_8021BF74);
    } else {
        func_800058DC(arg0->unkA4, func_8021C198);
    }
    func_8001F6FC();
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803821B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803822F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803823D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803825CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803828F0.s")

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
extern u16 D_80089474[];
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

