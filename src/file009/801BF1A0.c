#include "common.h"


extern s8 D_801E4010;

void func_801BF1A0(s32 arg0) {
    s32 *p = &arg0;
    D_801E4010 = arg0;
}


extern s8 D_801BC3D8[];

void func_801BF1B0(u8 arg0) {
    D_801BC3D8[0x3BB] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801BF1C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C1970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C1A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C1B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C1C1C.s")

typedef struct func_801C1EE0_StructB00 {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801C1EE0_StructB00;
extern void func_800058DC();
extern func_801C1EE0_StructB00 D_801E0B00;

typedef struct func_801C1D90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C1D90_StructInner;

typedef struct func_801C1D90_StructArg {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    func_801C1D90_StructInner *unk5C;
} func_801C1D90_StructArg;

extern s32 func_80010550();
extern void func_801C1E2C(void *arg0, s32 arg1);

void func_801C1D90(func_801C1D90_StructArg *arg0, s32 arg1) {
    func_801C1D90_StructInner *temp_a1;
    s32 temp_t7;
    extern void func_800058DC();

    temp_t7 = arg0->unk2C;
    temp_a1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B00.unk0 = 0x01680041;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk6 = 0x1100;
    D_801E0B00.unk8 = 1.0f;
    temp_a1->unk78 = 1;
    func_80010550(arg1, temp_a1, arg0, arg1);
    func_800058DC(arg0, &func_801C1E2C);
}


extern void func_801C1E74();
extern s16 D_801BBD86;

void func_801C1E2C(void *arg0, s32 arg1) {
    void *var_a1;

    var_a1 = *(void **)((u8 *)arg0 + 0x5C);
    func_80010550(arg1, var_a1, arg1);
    D_801BBD86 = 1;
    func_800058DC(arg0, func_801C1E74);
}

extern u8 D_801BBBF0[];

extern void func_801E5010();

typedef struct func_801C1E74_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1E74_StructDC;

typedef struct func_801C1E74_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C1E74_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x194 - 0x192];
    u16 unk194;
    u8 pad3[0xEF0 - 0x196];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C1E74_StructBBBF0;

typedef struct func_801C1E74_StructArg {
    u8 pad0[0x54];
    s32 unk54;
} func_801C1E74_StructArg;

void func_801C1E74(void *arg0, s32 arg1) {
    if (((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk194 == 2) {
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk18E = 3;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk190 = 0;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEF0 = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEF0 & 0xFFBF;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C | 0x40;
        ((func_801C1E74_StructArg *) arg0)->unk54 = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEFC;
        func_800058DC(arg0, &func_801E5010);
    }
}


typedef struct func_801C1EE0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C1EE0_StructInner;

typedef struct func_801C1EE0_StructArg {
    u8 pad0[0x5C];
    func_801C1EE0_StructInner *unk5C;
} func_801C1EE0_StructArg;

typedef struct func_801C1EE0_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C1EE0_StructBBBF0;


extern void func_801C1F40();

void func_801C1EE0(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructInner *inner;
    func_801C1EE0_StructBBBF0 *src;
    func_801C1EE0_StructB00 *dst;

    src = &D_801BBBF0;
    inner = arg0->unk5C;
    dst = &D_801E0B00;
    dst->unk4 = 0;
    dst->unk0 = src->unkF10;
    dst->unk6 = src->unkF00;
    dst->unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C1F40, src);
}

typedef struct func_801C2494_Struct388500 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C2494_Struct388500;
extern s32 func_8012CE9C(s32, void *, func_801C2494_Struct388500, s32);

typedef struct func_801C1F40_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C1F40_StructArg;

typedef struct func_801C1F40_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1F40_StructDC;

typedef struct func_801C1F40_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C1F40_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x194 - 0x192];
    u16 unk194;
    u16 unk196;
    u8 pad3[0xEF0 - 0x198];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C1F40_StructBBBF0;

void func_801C1F40(func_801C1F40_StructArg *arg0, s32 arg1) {
    extern void func_801C1A34();
    extern void func_801E5010();
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(func_801C2494_Struct388500 *)&D_801E0B00, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk194;
        ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk196 = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C1A34);
            temp_a0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk194;
        }
        if (temp_a0 == 2) {
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk18E = 3;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEF0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}


extern void func_801C2090();

void func_801C2030(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructBBBF0 *src;
    func_801C1EE0_StructInner *inner;

    src = (func_801C1EE0_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk0 = src->unkF10;
    D_801E0B00.unk6 = src->unkF00;
    D_801E0B00.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C2090, src);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C2090.s")


extern void func_801C2170();

void func_801C2110(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructBBBF0 *src;
    func_801C1EE0_StructInner *inner;

    src = (func_801C1EE0_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk0 = src->unkF10;
    D_801E0B00.unk6 = src->unkF00;
    D_801E0B00.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C2170, src);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C2170.s")


typedef struct func_801C22A0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C22A0_StructInner;

typedef struct func_801C22A0_StructArg {
    u8 pad0[0x5C];
    func_801C22A0_StructInner *unk5C;
} func_801C22A0_StructArg;

typedef struct func_801C22A0_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C22A0_StructBBBF0;

extern void func_801C2300();

void func_801C22A0(func_801C22A0_StructArg *arg0, s32 arg1) {
    func_801C22A0_StructInner *inner;
    func_801C22A0_StructBBBF0 *src;

    src = (func_801C22A0_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk0 = src->unkF10;
    D_801E0B00.unk6 = src->unkF00;
    D_801E0B00.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C2300, src);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801C2300.s")


typedef struct func_801C2494_Struct2C {
    u8 pad0[0x8];
    s32 unk8;
} func_801C2494_Struct2C;

typedef struct func_801C2494_StructE0 {
    u8 pad0[0x2C];
    func_801C2494_Struct2C *unk2C;
} func_801C2494_StructE0;

typedef struct func_801C2494_StructBBBF0 {
    u8 pad0[0xE0];
    func_801C2494_StructE0 *unkE0;
    u8 pad1[0x196 - 0xE4];
    s16 unk196;
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xF14 - 0x1A4];
    s32 unkF14;
    s32 unkF18;
} func_801C2494_StructBBBF0;


extern void func_801C1B38();
extern void func_8012AAE8(void *, s32, s32, s32, f32);
extern s32 func_8012A7F4(void *, s32, s32, s32);
extern func_801C2494_Struct388500 D_80388500;

void func_801C2494(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructInner *sp2C;

    sp2C = arg0->unk5C;
    *(s32 *) ((u8 *) arg0 + 0x54) = 1;
    func_8012AAE8(arg0, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk198, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkE0->unk2C->unk8, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk1A0, 1.0f);
    if (func_8012CE9C(arg1, sp2C, D_80388500, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        if (func_8012A7F4(arg0, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkF14, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkF18, 0x100) == 0) {
            sp2C->unk78 = 1;
            ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk196 = 1;
            func_800058DC(arg0, func_801C1B38);
        }
    }
}

