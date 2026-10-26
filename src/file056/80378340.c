#include "common.h"


extern s32 func_80005700(s32);
extern s32 func_80149330(u8);
extern u8 D_8038A90A;

void func_80378340(s32 arg0, s32 arg1) {
    if (func_80149330(D_8038A90A) != 0) {
        func_80005700(arg0);
    }
}

#define func_803784C0 func_803784C0__func_8037837C
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
#undef func_803784C0


void func_803784C0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_803787F0 func_803787F0__func_803784CC
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
#undef func_803787F0


extern s32 func_8014C0A8(u16);
extern u8 D_801BBE22[];
extern void func_8037890C(s32 arg0, s32 arg1);

void func_803787B0(s32 arg0, s32 arg1) {
    if (func_8014C0A8(*(u16 *)&D_801BBE22[0x12]) == 0) {
        func_800058DC(arg0, func_8037890C);
    }
}

#define D_801BBBF0 D_801BBBF0__func_803787F0
#define func_80011140 func_80011140__func_803787F0
#define func_803787B0 func_803787B0__func_803787F0
void func_803787B0(s32 arg0, s32 arg1);
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
#undef D_801BBBF0
#undef func_80011140
#undef func_803787B0

#define D_8001B204 D_8001B204__func_8037890C
#define D_80130E34 D_80130E34__func_8037890C
#define D_8013A28C D_8013A28C__func_8037890C
#define D_801494A4 D_801494A4__func_8037890C
#define D_80388968 D_80388968__func_8037890C
#define D_80388988 D_80388988__func_8037890C
#define D_803889A0 D_803889A0__func_8037890C
#define D_803889B0 D_803889B0__func_8037890C
#define D_80389454 D_80389454__func_8037890C
#define D_8038947C D_8038947C__func_8037890C
#define D_80389484 D_80389484__func_8037890C
#define D_803894A0 D_803894A0__func_8037890C
#define D_803894C8 D_803894C8__func_8037890C
#define D_803894FC D_803894FC__func_8037890C
#define D_8038A90C D_8038A90C__func_8037890C
#define func_80133980 func_80133980__func_8037890C
#define func_8013D520 func_8013D520__func_8037890C
#define func_8013D5F4 func_8013D5F4__func_8037890C
#define func_80149580 func_80149580__func_8037890C
#define func_8014B034 func_8014B034__func_8037890C
#define func_8014B3B0 func_8014B3B0__func_8037890C
#define func_8014B4A0 func_8014B4A0__func_8037890C
#define func_803787F0_S0 func_803787F0_S0__func_8037890C
#define func_803787F0_S1 func_803787F0_S1__func_8037890C
#define func_80378CD8 func_80378CD8__func_8037890C
extern s32 D_8038A90C;
typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;


typedef struct func_8037890C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8037890C_StructB;
typedef struct func_8037890C_StructA {
    u8 pad0[0x30];
    func_8037890C_StructB *unk30;
} func_8037890C_StructA;
typedef struct func_8037890C_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8037890C_StructG;
typedef struct func_8037890C_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037890C_Vec;

extern void D_8001B204();
extern void D_80130E34(s32, s32, f32, s32, f32 *, f32 *);
extern void func_80133980(s32);
extern void D_8013A28C(s32, func_8037890C_Vec);
extern s32 func_8013D520(u8, s32, s32);
extern s32 func_8013D5F4(u8);
extern s32 D_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
extern void func_8014B034(u16, s32);
extern void func_8014B3B0(u16, s32);
extern void func_8014B4A0(u16, f32 *);
extern func_8037890C_StructG *B_801BBCD8;
extern u8 D_80388968[];
extern func_8037890C_Vec D_80388988;
extern func_8037890C_Vec D_803889A0;
extern u8 D_803889B0;
extern u8 D_80389454[];
extern u8 D_8038947C[];
extern u8 D_80389484[];
extern u8 D_803894A0[];
extern u8 D_803894C8[];
extern f32 D_803894FC;
extern u8 func_80378CD8[];

void func_8037890C(s32 arg0, s32 arg1) {
    func_803787F0_S1 *sp6C;
    s32 pad68;
    u8 sp67;
    s32 pad5C[2];
    f32 sp58;
    f32 sp54;
    s32 pad40[5];
    f32 sp34[3];

    sp6C = ((func_803787F0_S0 *)arg0)->unk5C;
    sp58 = 160.0f;
    sp54 = 120.0f;
    sp67 = (u8)func_8014B3F0(*(u16 *)(D_801BBE22 + 0x12));
    D_8038A90C = func_80005670(arg0, D_80388968);
    D_803889B0 = 0;
    if (func_8014C068(*(u16 *)(D_801BBE22 + 0x12)) != 0) {
        if ((sp67 & 0xFF) != 0) {
            D_8038A900 = D_801494A4(arg0, sp67, 0x43610000, 0x42A00000, 0.0f, 1);
            func_8014B4A0(*(u16 *)(D_801BBE22 + 0x12), sp34);
            if (!(func_8014C1F0(*(u16 *)(D_801BBE22 + 0x12)) & 0xFF)) {
                D_80130E34(B_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 5.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            } else {
                D_80130E34(B_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 15.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            }
            if (sp58 < 0.0f) {
                sp58 = 0.0f;
            }
            if (sp54 < 0.0f) {
                sp54 = 0.0f;
            }
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk4 = sp58;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk8 = sp54;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk20 = D_803894FC;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk18 = ((func_8037890C_StructA *)D_8038A900)->unk30->unk1C = ((func_8037890C_StructA *)D_8038A900)->unk30->unk20;
            if (func_8013D520(sp67, 1, 0) != 0) {
                D_8001B204(0xF, 0x7D0, 0xB0, D_80389454, 4, 0);
                D_803889B0 = 1;
            } else {
                D_8001B204(0xF, 0x7D0, 0xB0, D_8038947C, 4, 0, func_8013D5F4(sp67));
                func_8014B3B0(*(u16 *)(D_801BBE22 + 0x12), 0);
            }
            func_80149580(arg0, (void *)D_8038A900, sp67);
        } else {
            D_8001B204(0xF, 0x7D0, 0xB0, D_80389484, 4, 0);
        }
    } else if (func_8013D520(sp67, 1, 0) != 0) {
        D_8001B204(0xF, 0x7D0, 0xB0, D_803894A0, 4, 0);
    } else {
        D_8001B204(0xF, 0x7D0, 0xB0, D_803894C8, 4, 0, func_8013D5F4(sp67));
        func_8014B034(*(u16 *)(D_801BBE22 + 0x12), 0);
        if (sp67 == 0x26) {
            func_80133980(0x272);
        }
    }
    if (sp6C->unk1C == 0x0168003C) {
        D_8013A28C(arg1, D_80388988);
    } else {
        D_8013A28C(arg1, D_803889A0);
    }
    func_800058DC(arg0, func_80378CD8);
}
#undef D_8001B204
#undef D_80130E34
#undef D_8013A28C
#undef D_801494A4
#undef D_80388968
#undef D_80388988
#undef D_803889A0
#undef D_803889B0
#undef D_80389454
#undef D_8038947C
#undef D_80389484
#undef D_803894A0
#undef D_803894C8
#undef D_803894FC
#undef D_8038A90C
#undef func_80133980
#undef func_8013D520
#undef func_8013D5F4
#undef func_80149580
#undef func_8014B034
#undef func_8014B3B0
#undef func_8014B4A0
#undef func_803787F0_S0
#undef func_803787F0_S1
#undef func_80378CD8

/* hh-block asm/nonmatchings/file056/80378340/_mrg_keep_text_func_80378CD8.s {"functions":["func_80378CD8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/_mrg_keep_text_func_80378CD8.s")

#define D_80216B90 D_80216B90__func_803790F0
#define func_80011140 func_80011140__func_803790F0
#define func_80379190 func_80379190__func_803790F0


extern void func_8001B204(s32, s32, s32, void *);
extern void func_80011140(s32, s32, func_803790F0_Struct2, s32);
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
#undef D_80216B90
#undef func_80011140
#undef func_80379190

#define D_801BBBF0 D_801BBBF0__func_80379190

typedef struct func_80379190_Struct {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80379190_Struct;

typedef struct func_80379190_Arg {
    u8 pad0[0x5C];
    func_80379190_Struct *unk5C;
} func_80379190_Arg;


extern func_80379190_Globals D_801BBBF0;
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
#undef D_801BBBF0


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

/* hh-block asm/nonmatchings/file056/80378340/_mrg_keep_text_func_80379690.s {"functions":["func_80379690"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80378340/_mrg_keep_text_func_80379690.s")


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80378340[] = {
    0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xC6, 0xA5, 0xE0, 0xA5, 0xC7, 0xA1, 0xBC, 0xA5, 0xBF, 0xA4, 0xCE,
    0xC5, 0xB8, 0xB3, 0xAB, 0xBD, 0xAA, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA2, 0xA5, 0xA4,
    0xA5, 0xC6, 0xA5, 0xE0, 0xA5, 0xC7, 0xA1, 0xBC, 0xA5, 0xBF, 0xA4, 0xCE, 0xC5, 0xB8, 0xB3, 0xAB,
    0xC3, 0xE6, 0x0A, 0x00, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0xC3, 0xE6,
    0xA4, 0xAB, 0xA5, 0xC1, 0xA5, 0xA7, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xB7, 0xA4, 0xC6, 0xA4, 0xA4,
    0xA4, 0xDE, 0xA4, 0xB9, 0xA1, 0xA3, 0x0A, 0x00, 0xA5, 0xC6, 0xA5, 0xAF, 0xA5, 0xB9, 0xA5, 0xC1,
    0xA5, 0xE3, 0xA5, 0xC7, 0xA1, 0xBC, 0xA5, 0xBF, 0xC5, 0xB8, 0xB3, 0xAB, 0xB4, 0xB0, 0xCE, 0xBB,
    0xA1, 0xAA, 0x00, 0x00, 0xC0, 0xB8, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xC6, 0xA5, 0xE0, 0xA4, 0xCE,
    0xBE, 0xEC, 0xB9, 0xE7, 0xA1, 0xA2, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4, 0xB7, 0xA4, 0xCA, 0xA4, 0xA4,
    0xA4, 0xE8, 0x0A, 0x00, 0x25, 0x6D, 0x25, 0x70, 0xA3, 0xD9, 0xA3, 0xEF, 0xA3, 0xF5, 0x20, 0xA3,
    0xE8, 0xA3, 0xE1, 0xA3, 0xF6, 0xA3, 0xE5, 0x20, 0xA3, 0xF4, 0xA3, 0xEF, 0xA3, 0xEF, 0x20, 0xA3,
    0xED, 0xA3, 0xE1, 0xA3, 0xEE, 0xA3, 0xF9, 0xA1, 0xA5, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0xA3, 0xC5, 0xA3, 0xED, 0xA3, 0xF0, 0xA3, 0xF4,
    0xA3, 0xF9, 0x20, 0xA3, 0xE2, 0xA3, 0xEF, 0xA3, 0xF8, 0xA1, 0xA5, 0xA1, 0xA5, 0xA1, 0xA5, 0x00,
    0x25, 0x6D, 0x25, 0x70, 0xA3, 0xD9, 0xA3, 0xEF, 0xA3, 0xF5, 0x20, 0xA3, 0xE8, 0xA3, 0xE1, 0xA3,
    0xF6, 0xA3, 0xE5, 0x20, 0xA3, 0xF4, 0xA3, 0xEF, 0xA3, 0xEF, 0x20, 0xA3, 0xED, 0xA3, 0xE1, 0xA3,
    0xEE, 0xA3, 0xF9, 0xA1, 0xA5, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0x25, 0x73, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xA5, 0xC6, 0xA5, 0xAF, 0xA5, 0xB9, 0xA5, 0xC1, 0xA5, 0xE3, 0xA5, 0xC7,
    0xA1, 0xBC, 0xA5, 0xBF, 0xC5, 0xB8, 0xB3, 0xAB, 0xB4, 0xB0, 0xCE, 0xBB, 0xA1, 0xAA, 0x00, 0x00,
    0x25, 0x6D, 0x25, 0x70, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x57, 0x1F, 0x36,
    0x3F, 0xEB, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xEB, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3C, 0x57, 0x1F, 0x36, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xEB, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3F, 0xEB, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
