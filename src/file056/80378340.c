#include "common.h"


extern s32 func_80005700(s32);
extern s32 func_80149330(u8);
extern u8 D_8038A90A;

void func_80378340(s32 arg0, s32 arg1) {
    if (func_80149330(D_8038A90A) != 0) {
        func_80005700(arg0);
    }
}

extern void func_800058DC(s32, void *);

extern void func_802169AC(void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80145348(void *, s32, s32);
extern void func_803784C0(s32 arg0, s32 arg1);

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


void func_803784C0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_803784CC.s")


extern s32 func_8014C0A8(u16);
extern u8 D_801BBE22[];
extern u8 func_8037890C[];

void func_803787B0(s32 arg0, s32 arg1) {
    if (func_8014C0A8(*(u16 *)&D_801BBE22[0x12]) == 0) {
        func_800058DC(arg0, func_8037890C);
    }
}

typedef struct func_803790F0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803790F0_Struct2;
extern s32 func_80010550(s32, s32);
extern void func_80011140(s32, s32, func_803790F0_Struct2, s32);
typedef struct func_80379190_Globals {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80379190_Globals;
extern func_80379190_Globals D_801BBBF0;

typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;

extern s32 func_8014C068(u16);
extern void func_8014C138(u16);
extern struct func_803790F0_Struct2 *D_8038A904;

void func_803787F0(func_803787F0_S0 *arg0, s32 arg1) {
    func_803787F0_S1 *s = arg0->unk5C;
    s32 *p = &s->unk1C;
    u32 a;

    if (s->unk1C == 0x0168003C || *p == 0x0168002D) {
        a = func_80010550(arg1, (s32)s) & 0xFFFF;
    } else {
        func_80011140(arg1, (s32)s, *D_8038A904, 5);
        a = 0;
    }
    if (*p == 0x0168003C || *p == 0x0168002D) {
        if (a != 0) {
            if (func_8014C068(*(u16 *)((u8 *)&D_801BBBF0 + 0x244)) != 0) {
                func_8014C138(*(u16 *)((u8 *)&D_801BBBF0 + 0x244));
                func_800058DC((s32)arg0, func_803787B0);
            } else {
                func_800058DC((s32)arg0, func_8037890C);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_8037890C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80378CD8.s")



extern void func_8001B204(s32, s32, s32, void *);
extern func_803790F0_Struct2 D_80216B90;
extern s32 D_803894D0[];
extern s32 D_8038A90C;
extern void func_80379190();

void func_803790F0(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_8001B204(0xF, 0, 0, D_803894D0);
        func_80005700(D_8038A90C);
        func_80011140(arg1, temp_a1, D_80216B90, 5);
        func_800058DC(arg0, func_80379190);
    }
}


typedef struct func_80379190_Struct {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80379190_Struct;

typedef struct func_80379190_Arg {
    u8 pad0[0x5C];
    func_80379190_Struct *unk5C;
} func_80379190_Arg;


extern void func_8001F6FC();
extern void func_8001F74C(s32);
extern void func_80126E88(s32);
extern u8 func_801E5010[];
extern s32 D_801BBCCC;

void func_80379190(func_80379190_Arg *arg0, s32 arg1) {
    func_80379190_Struct *temp_a1;

    temp_a1 = arg0->unk5C;
    D_801BBBF0.unkEF0 = (u16) (D_801BBBF0.unkEF0 & 0xFFAF);
    func_80011140(arg1, (s32) temp_a1, D_80216B90, 5);
    if (temp_a1->unk1C == 0x01680041) {
        func_8001F6FC();
        func_8001F74C(D_801BBCCC);
        func_80126E88(0xC1);
        func_800058DC((s32) arg0, func_801E5010);
    }
}

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


typedef struct func_803794DC_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_803794DC_StructB;
typedef struct func_803794DC_StructA {
    u8 pad0[0x30];
    func_803794DC_StructB *unk30;
} func_803794DC_StructA;
typedef struct func_803794DC_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_803794DC_StructG;

extern s32 func_80126A0C(s32, s32, s32);
extern void func_80116E80(s32);
extern func_803794DC_StructA *func_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
extern s32 func_80005670(s32, void *);
extern s32 func_8013D5F4(u8);
extern void func_80130E34(s32, s32, s32, s32, f32 *, f32 *);
extern func_803794DC_StructG *D_801BBCD8;
extern u8 D_80388968[];
extern s16 D_803889B4;
extern u8 D_803894F0[];
extern f32 D_80389510;
extern func_803794DC_StructA *D_8038A910;
extern u8 func_80379690[];

void func_803794DC(s32 arg0, s32 arg1) {
    f32 sp44;
    f32 sp40;
    u8 sp3F;

    if (func_80126A0C(arg0, 0xC1, 0) != 0) {
        func_80116E80(0x10);
        D_803889B4 = 0;
        sp3F = *(u16 *)&D_8038A918 & 0xFF;
        D_8038A910 = func_801494A4(arg0, sp3F, 0x43610000, 0x42A00000, 0.0f, 1);
        func_80130E34(D_801BBCD8->unk2C, *(s32 *)&D_8038A918.unk4, *(s32 *)&D_8038A918.unk8, *(s32 *)&D_8038A918.unkC, &sp44, &sp40);
        if (sp44 < 0.0f) {
            sp44 = 0.0f;
        }
        if (sp40 < 0.0f) {
            sp40 = 0.0f;
        }
        D_8038A910->unk30->unk4 = sp44;
        D_8038A910->unk30->unk8 = sp40;
        D_8038A910->unk30->unk20 = D_80389510;
        D_8038A910->unk30->unk18 = D_8038A910->unk30->unk1C = D_8038A910->unk30->unk20;
        func_80149580(arg0, D_8038A910, sp3F);
        D_8038A90C = func_80005670(arg0, D_80388968);
        {
            extern void func_8001B204();
            func_8001B204(0xF, 0x7D0, 0xB0, D_803894F0, 4, 0, func_8013D5F4(sp3F));
        }
        func_800058DC(arg0, func_80379690);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/func_80379690.s")

