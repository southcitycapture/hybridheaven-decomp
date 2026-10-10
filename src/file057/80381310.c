#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381310.s")

extern u8 D_801BC03C[];
void *func_800058DC(void *, void *);

struct func_803813C0_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
};

extern void func_8001F6E4(void);
extern void func_80116E80(s32);
extern void func_80006214(void *);
extern void func_80002BAC(s32);
extern u8 func_8022B640(s32);
extern void func_80381310(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8038150C(void);
extern void func_80381D48(void);
extern u8 D_801BC3D8[];

void func_803813C0(struct func_803813C0_Struct *arg0, s32 arg1) {
    s8 sp54[4];
    s32 i;

    sp54[3] = 0;
    i = (s32)((arg0->unk90 == 0) ? D_801BC03C : D_801BC3D8);
    func_8001F6E4();
    func_80116E80(0x80);
    func_80381310(arg0, &sp54[3], 0, 0, 0x140, 0x100, 0x20, 0x20, 0x20, 0x80, 0, 0, 0, 0, 0);
    func_80006214(arg0);
    if (*(s16 *)(i + 4) < 0x65) {
        arg0->unk92 = func_8022B640(6);
    } else {
        arg0->unk92 = func_8022B640(7);
    }
    arg0->unk93 = func_8022B640(3);
    arg0->unk91 = 0;
    i = 0;
    do {
        func_80002BAC(i & 0xFF);
        i = (i + 1) & 0xFF;
    } while (i < 4);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0, func_8038150C);
        return;
    }
    func_800058DC(arg0, func_80381D48);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038150C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381D48.s")

extern void func_80005700(void *);

struct func_80381E78_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0xF];
    void *unkA4;
};

extern void func_8001B204();
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
extern func_803828F0_Struct D_80389BC4;
extern func_803828F0_Struct D_80389BCC;
extern func_803828F0_Struct D_80389BD4;

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


extern void func_80384268();

void func_80384228(void *arg0, s32 arg1) {
    func_803828F0_Obj *obj = arg0;

    obj->unkB0 = obj->unkB0 - 1;
    if (obj->unkB0 < 0) {
        func_800058DC(arg0, func_80384268);
    }
}

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


typedef struct func_8038481C_Struct {
    u8 pad[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_8038481C_Struct;

typedef struct func_8038481C_Struct2 {
    s32 *ptr;
    u8 pad[24];
} func_8038481C_Struct2;

extern void func_80384948(void);
extern func_8038481C_Struct2 D_801842A0[];
extern u8 D_8038CB14[];

void func_8038481C(func_8038481C_Struct *arg0, s32 arg1) {
    u8 sp37;

    func_80381F40(arg0, 0x28, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5A), 0xA0, 0xA0, 0xA0, 0x17, &sp37);
    func_8001B204((arg0->unkA9 % 5) & 0xFF, 0x5C, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5D), D_8038CB14, 4, *D_801842A0[D_80240730[arg0->unkA9]].ptr);
    if ((arg0->unkA9 % 5) == 4) {
        arg0->unkB0 = 0x32;
    } else {
        arg0->unkB0 = 0xA;
    }
    func_800058DC(arg0, func_80384948);
}

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


extern void func_80385060(void);

void func_80385018(func_803828F0_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x65) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_80385060);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80385060.s")


typedef struct func_80385208_Obj {
    u8 pad0[0xA4];
    s16 unkA4;
} func_80385208_Obj;

typedef struct func_80385208_Arg {
    u8 pad0[0xC];
    func_80385208_Obj *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
} func_80385208_Arg;

typedef struct func_80385208_Globals {
    u8 pad0[0xA0];
    u16 unkA0;
    u8 pad1[6];
    u16 unkA8;
    u8 pad2[0x16];
    u16 unkC0;
    u8 pad3[6];
    u16 unkC8;
} func_80385208_Globals;

typedef struct func_80385208_Gfx {
    u8 pad0[0xA];
    u16 unkA;
} func_80385208_Gfx;

extern func_80385208_Globals D_801BBBF0;
extern func_80385208_Gfx D_801BBC8E;
extern u8 D_8038CB68[];
extern u8 D_8038CB74[];
extern u8 D_8038CB80[];
extern void func_8038540C();
extern void func_80020718(s32);

void func_80385208(func_80385208_Arg *arg0, void *arg1) {
    s16 var_v1;
    u32 var_v0;

    var_v0 = D_801BBBF0.unkA8;
    if ((var_v0 & 0x800) || (D_801BBBF0.unkC8 & 0x800)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 -= 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 < 0) {
            arg0->unkC->unkA4 = 2;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB68, 1, 1, 8);
        var_v0 = D_801BBC8E.unkA;
    }
    if ((var_v0 & 0x400) || (D_801BBBF0.unkC8 & 0x400)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 += 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 >= 3) {
            arg0->unkC->unkA4 = 0;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB74, 1, 1, 8);
    }
    if ((D_801BBBF0.unkA0 & 0x8000) || (D_801BBBF0.unkC0 & 0x8000)) {
        func_8001B204(0xD, 0x6A, (s16) ((arg0->unkC->unkA4 * 0xC) + 0x80), D_8038CB80, 1, 1, 4);
        func_80020718(0x104);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, (void *) func_8038540C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038540C.s")

