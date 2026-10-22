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

extern void func_8001F75C(s32);
extern void func_8001F6E4();
extern void func_800113D0(s32, s32);
extern void func_80011198(s32, s32);
extern void func_80011140();
extern s32 func_80126A0C(s32, s32, s32);
extern void func_80116E80(s32);
extern s32 func_8014C068(u16);
extern s32 func_8014C1F0(u16);
extern s32 func_8014B3F0(s32);
extern s32 func_80005670(s32, void *);
extern void func_80376B80();
extern void func_803787F0();
extern u8 D_80388954[];
extern struct func_80379190_Globals D_801BBBF0;
extern struct func_803790F0_Struct2 D_80216B90;
extern struct func_803790F0_Struct2 D_8038897C;
extern struct func_803790F0_Struct2 D_80388994;
extern struct func_803790F0_Struct2 *D_8038A904;
extern s16 D_803889AC;
extern s32 D_8038A900;
extern s16 D_8038A908;

typedef struct func_803784CC_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_803784CC_Struct;

typedef struct func_803784CC_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803784CC_Vec;

#define G ((u8 *)&D_801BBBF0)
extern void D_80011140(s32, s32, func_803784CC_Vec, s32);
#define CALL_80011140 D_80011140
#define VEC(p) (*(func_803784CC_Vec *)(p))

void func_803784CC(func_803784CC_Struct *arg0, s32 arg1) {
    s32 sp;
    u8 v;

    sp = arg0->unk5C;
    if (G[0x182] == 0 && G[0x187] == 0) {
        func_8001F75C(*(s32 *)(G + 0xDC));
        func_8001F6E4();
        arg0->unk48 = 0.0f;
        arg0->unk2C |= 0xE0;
        arg0->unk44 = 0.0f;
        arg0->unk40 = 0.0f;
        *(u16 *)(G + 0xEF0) |= 0xC0;
        D_803889AC = 0;
        D_8038A900 = 0;
        D_8038A908 = 0;
        D_8038A90A = 0;
        if (func_80126A0C((s32)arg0, 0xC1, 0) != 0) {
            func_800113D0(arg1, sp + 0x22);
            func_80116E80(0x10);
            func_80011198(arg1, sp);
            if (func_8014C068(*(u16 *)(G + 0x244)) != 0) {
                v = func_8014C1F0(*(u16 *)(G + 0x244));
                if (v != 0) {
                    if (v != 1) {
                        if (v == 2) {
                            *(u16 *)(G + 8) = *(u16 *)(G + 0x244);
                            CALL_80011140(arg1, sp, VEC(&D_80216B90), 0xA);
                            func_800058DC((s32)arg0, func_80376B80);
                            return;
                        }
                        goto def;
                    }
                    CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_80388994), 5);
                    D_8038A90A = func_8014B3F0(*(u16 *)(G + 0x244)) & 0xFF;
                    func_80005670((s32)arg0, D_80388954);
                    arg0->unk2C &= ~0x80;
                    func_800058DC((s32)arg0, func_803787F0);
                    return;
                }
def:
                CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_8038897C), 5);
                D_8038A90A = func_8014B3F0(*(u16 *)(G + 0x244)) & 0xFF;
                func_80005670((s32)arg0, D_80388954);
                arg0->unk2C &= ~0x80;
                func_800058DC((s32)arg0, func_803787F0);
                return;
            }
            CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_8038897C), 5);
            arg0->unk2C &= ~0x80;
            func_800058DC((s32)arg0, func_803787F0);
        }
    }
}


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
typedef struct func_80379190_Globals {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80379190_Globals;

typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;

extern void func_8014C138(u16);

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


typedef struct func_80379244_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80379244_StructB;
typedef struct func_80379244_StructG {
    u8 pad0[0x2C];
    func_80379244_StructB *unk2C;
} func_80379244_StructG;
typedef struct func_80379244_StructA {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80379244_StructA;

extern func_80379244_StructG *D_801BBCD0;
extern s32 func_8014BC78(f32, f32, f32, s32);
extern void func_8014B4A0(u16, f32 *);
extern s32 func_8001EF38(f32, f32);
extern void func_801ED72C(void *, s32, s32, s32);

#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

void func_80379244(func_80379244_StructA *arg0, s32 arg1) {
    u8 pad[8];
    f32 sp44[3];
    s32 sp40;
    s32 v;
    u16 h;
    s16 a;
    s16 d;
    s16 r;
    s16 t1;
    func_80379244_StructB *p;

    sp40 = arg0->unk5C;
    p = D_801BBCD0->unk2C;
    v = func_8014BC78(p->unk4, p->unk8, p->unkC, 0x40A00000);
    h = v;
    if (v != 0) {
        *(u16 *)(D_801BBE22 + 0x12) = h;
        func_8014B4A0(h, sp44);
        p = D_801BBCD0->unk2C;
        r = ABS(p->unk8 - sp44[1]);
        if (r < 3.0) {
            t1 = (s16)(0x1800 - func_8001EF38(p->unkC - sp44[2], p->unk4 - sp44[0])) & 0x1FFF;
            p = D_801BBCD0->unk2C;
            p->unk12 = p->unk12 & 0x1FFF;
            p = D_801BBCD0->unk2C;
            a = p->unk12 - t1;
            d = ABS(WRAP(a));
            if (d < 0x401) {
                p->unk12 = t1;
                func_800058DC((s32)arg0, func_803784CC);
                return;
            }
            func_801ED72C(arg0, arg1, sp40, 0);
            func_800058DC((s32)arg0, func_801E5010);
            return;
        }
        func_801ED72C(arg0, arg1, sp40, 0);
        func_800058DC((s32)arg0, func_801E5010);
        return;
    }
    func_801ED72C(arg0, arg1, sp40, 0);
    func_800058DC((s32)arg0, func_801E5010);
}


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

extern func_803794DC_StructA *func_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
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

