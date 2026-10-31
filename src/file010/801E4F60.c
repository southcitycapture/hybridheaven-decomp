#include "common.h"


typedef struct func_801E4F60_Struct {
    u8 pad[0x54];
    s32 unk54;
} func_801E4F60_Struct;

extern void func_801C4A5C(void *, s32, s32);
extern func_801E4F60_Struct *D_801BBCCC;

void func_801E4F60(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 = temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}



void func_801E4F94(u16 arg0) {
    s32 *temp_a0;

    temp_a0 = D_801BBCCC;
    temp_a0[0x54 / 4] |= arg0;
    func_801C4A5C(temp_a0, 0, arg0);
}


void func_801E4FD0(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 &= ~temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E5010.s {"functions":["func_801E5010"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E5010.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E6BCC.s {"functions":["func_801E6BCC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E6BCC.s")

extern f32 D_8021AFB0;

typedef struct func_801E7274_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E7274_Sub;
typedef struct func_801E7274_Arg2 {
    u8 pad[0x1C];
    func_801E7274_Sub unk1C;
} func_801E7274_Arg2;
typedef struct func_801E7274_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E7274_Arg0;
typedef struct func_801E7274_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E7274_Inner;
typedef struct func_801E7274_Outer {
    u8 pad[0x2C];
    func_801E7274_Inner *unk2C;
} func_801E7274_Outer;
typedef struct func_801E7274_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7274_Table;

extern void D_80011140(s32, void *, func_801E7274_Table, s32);
extern void D_8013A28C(s32, func_801E7274_Sub);
extern void func_800111E0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

/* globals reached from an earlier-declared symbol */
#define GOUTER (((func_801E7274_Outer **)&D_801BBCCC)[1])
#define GTABLE (*(func_801E7274_Table *)((u8 *)&D_801BBCCC + 0x5AED0))
#define GSCALE D_8021AFB0

void func_801E7274(func_801E7274_Arg0 *arg0, s32 arg1, func_801E7274_Arg2 *arg2, s32 arg3) {
    func_801E7274_Sub *p = &arg2->unk1C;
    s32 t = p->unk0;

    if (t == 0x168003E) goto a;
    if (t == 0x168003F) goto def;
    if (t == 0x1680040) goto def;
    if (t != 0x1680041) goto def;
    goto def;
a:
    if ((f64)p->unk8 != 1.0) {
        p->unk8 = 1.0f;
    }
    D_8013A28C(arg1, *p);
    arg0->unk2C = (arg0->unk2C | 0x60);
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800111E0(arg1, (u8 *)p + 6);
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    return;
def:
    D_80011140(arg1, arg2, GTABLE, 5);
    arg0->unk2C = arg0->unk2C & ~0x80;
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
}
#undef GOUTER
#undef GTABLE
#undef GSCALE

typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;

typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;

typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;

typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;

extern void func_8013A28C(s32, func_801E74DC_Sub);
extern func_801E74DC_Outer *D_801BBCD0;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;

void func_801E74DC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    s32 pad[4];
    func_801E74DC_Sub *s;

    s = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x168003E) goto def;
    if (arg2->unk1C.unk0 == 0x168003F) goto caseA;
    if (arg2->unk1C.unk0 == 0x1680040) goto caseC;
    if (arg2->unk1C.unk0 != 0x1680041) goto def;
    goto caseB;

caseA:
    if (s->unk8 != 1.0) {
        s->unk8 = 1.0f;
    }
    func_8013A28C(arg1, *s);
    arg0->unk2C |= 0x60;
    arg0->unk2C &= ~0x80;
    func_800111E0(arg1, (u8 *)s + 6);
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

caseB:
    func_80011140(arg1, arg2, D_80216B9C, 5);
    arg0->unk2C &= ~0x80;
    arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    return;

caseC:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

def:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    }
}

extern f32 func_8002FC20(f32);
extern s32 D_80011258(s32, void *);

void func_801E79B8(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    u8 pad[12];
    func_801E74DC_Sub *v;
    f32 len;
    f32 fs;

    v = &arg2->unk1C;
    if (v->unk0 == 0x01680040) {
        if ((f64)v->unk8 != 1.0) {
            v->unk8 = 1.0f;
        }
        func_8013A28C(arg1, *v);
        arg0->unk2C |= 0x60;
        arg0->unk2C &= ~0x80;
        func_800111E0(arg1, (u8 *)v + 6);
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
        return;
    }
    if (D_80011258(arg1, (u8 *)v + 6) == 0) {
        v->unk0 = 0x01680040;
        *(s16 *)((u8 *)v + 4) = 0;
        *(s16 *)((u8 *)v + 6) = 0x1000;
        func_8013A28C(arg1, *v);
        arg0->unk2C &= ~0x80;
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
    }
}

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E7C30.s {"functions":["func_801E7C30"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E7C30.s")

#define D_801BBBF0 D_801BBBF0__func_801E8BD0
#define D_801E4011 D_801E4011__func_801E8BD0
#define D_80216BF0 D_80216BF0__func_801E8BD0
#define D_80216C00 D_80216C00__func_801E8BD0
#define D_80218578 D_80218578__func_801E8BD0
#define D_80218580 D_80218580__func_801E8BD0
#define D_80218588 D_80218588__func_801E8BD0
#define D_80218590 D_80218590__func_801E8BD0
#define D_8021AFB4 D_8021AFB4__func_801E8BD0
#define D_8021AFBC D_8021AFBC__func_801E8BD0
#define D_8021AFC0 D_8021AFC0__func_801E8BD0
#define func_80010550 func_80010550__func_801E8BD0
#define func_800113D0 func_800113D0__func_801E8BD0
#define func_8001EF38 func_8001EF38__func_801E8BD0
#define func_8013A28C func_8013A28C__func_801E8BD0
#define func_801518D4 func_801518D4__func_801E8BD0
#define func_801BF1A0 func_801BF1A0__func_801E8BD0
#define func_801C5A1C func_801C5A1C__func_801E8BD0
#define func_801E4F60 func_801E4F60__func_801E8BD0
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E8BD0
extern u8 D_801BBBF0[];
extern s32 func_80010550(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);


typedef struct func_801E8BD0_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801E8BD0_Sub;
typedef struct func_801E8BD0_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801E8BD0_Arg0;
typedef struct func_801E8BD0_Arg2 {
    u8 pad[0x1C];
    func_801E8BD0_Sub unk1C;
} func_801E8BD0_Arg2;
typedef struct func_801E8BD0_Arg4 {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
} func_801E8BD0_Arg4;
typedef struct func_801E8BD0_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E8BD0_In;
typedef struct func_801E8BD0_Mid {
    u8 pad[0x2C];
    func_801E8BD0_In *unk2C;
} func_801E8BD0_Mid;
typedef struct func_801E8BD0_G {
    u8 pad0[0xE0];
    func_801E8BD0_Mid *unkE0;
    u8 pad1[0x232 - 0xE4];
    s16 unk232;
    u8 pad2[0x35A - 0x234];
    u8 unk35A;
    u8 pad3;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad4[0x380 - 0x368];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad5[0xEF0 - 0x38C];
    u16 unkEF0;
    u8 pad6[4];
    u8 unkEF6;
    u8 pad7[5];
    s32 unkEFC;
} func_801E8BD0_G;
extern s32 func_8001EF38(f32, f32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_800113D0(s32, void *);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern s8 D_801E4011;
extern f64 D_80218578;
extern f64 D_80218580;
extern f64 D_80218588;
extern f64 D_80218590;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;

#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
void func_801E8BD0(func_801E8BD0_Arg0 *arg0, s32 arg1, func_801E8BD0_Arg2 *arg2, u16 arg3, func_801E8BD0_Arg4 *arg4) {
    func_801E8BD0_Sub *sub;
    func_801E8BD0_In *in;
    f32 fv1;
    s16 ang;
    f32 sp6C;
    f32 sp60[3];
    f32 fa0;
    f32 fa1;
    u8 sp57;
    s32 v;

    sub = &arg2->unk1C;
    ang = (s16)(0x2800 - g->unk232) & 0x1FFF;
    fa0 = (f64)-arg4->unk6 / 20.0;
    fa1 = (f64)arg4->unk8 / 20.0;
    fv1 = fa0 * fa0 + fa1 * fa1;
    if ((f64)fv1 < 1.0) {
        fv1 = 0.0f;
    }
    fa0 = func_8001EB64((s16)((s16)((s16)func_8001EF38(fa0, fa1) + (u16)ang) - g->unkE0->unk2C->unk12) & 0x1FFF);
    if ((f64)fa0 < 0.0) {
        fa0 = 0.0f;
    }
    switch (sub->unk0) {
    case 0x168004F:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if (arg3 != 0) {
            sub->unk0 = 0x1680050;
            sub->unk4 = 0;
            sub->unk6 = 1;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk2C = arg0->unk2C & ~0x80;
            arg0->unk3F = 3;
            func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
        }
        return;
    case 0x1680050:
        P->unk4 += (func_8001EAD0(P->unk12) * (fv1 * fa0)) * D_80218578;
        P->unkC += (func_8001EB64(P->unk12) * (fv1 * fa0)) * D_80218580;
        if (arg0->unk44 < 0.0) {
            func_800113D0(arg1, (u8 *)sub + 6);
        }
        if (arg0->unk30 & 4) {
            if (g->unkEF6 == 0x18) {
                func_801E4F60(1);
                arg0->unk3E = 0xAF;
                D_80216C00 = g->unkE0->unk2C->unk12;
                func_801518D4(0, 3, 5);
                sub->unk0 = 0x168002B;
                sub->unk4 = 2;
                sub->unk6 = 0;
                sub->unk8 = 1.0f;
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                return;
            }
            if (D_80216BF0 < 0x14) {
                sub->unk0 = 0x1680051;
                sub->unk8 = 1.0f;
            } else {
                func_801518D4(0, 3, 6);
                sub->unk0 = 0x1680052;
                sub->unk8 = 3.0f;
            }
            sub->unk4 = 1;
            sub->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
            arg0->unk44 = 0.0f;
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            func_80010550(arg1, arg2);
            return;
        }
        if (arg0->unk44 < 0.0f) {
            D_80216BF0 += 1;
        }
        if (!(g->unkEF0 & 8)) {
            return;
        }
        if (func_801C5A1C(func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 5.0 + P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 5.0 + P->unkC) == 0) {
            return;
        }
        if (!(g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11 || g->unk35A == 0x23)) {
            return;
        }
        sp57 = g->unk35A;
        sp6C = g->unk384;
        if (func_801C5A1C(P->unk4, P->unk8 + D_80218588, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + D_80218588, func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
            if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) == 0) {
                sub->unk0 = 0x168000D;
                sub->unk4 = 0;
                sub->unk6 = 0;
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                arg0->unk2C = arg0->unk2C & ~0x40;
                arg0->unk2C = arg0->unk2C & ~0x80;
                func_801E4F60(0);
                arg0->unk40 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk48 = 0.0f;
                if (sp57 == 8 || sp57 == 0x11) {
                    g->unkE0->unk2C->unk8 = sp6C - D_80218590;
                    g->unkEF0 = g->unkEF0 | 6;
                    func_801BF1A0(9);
                    D_801E4011 = 0;
                } else if (sp57 == 0x23) {
                    g->unkE0->unk2C->unk8 = sp6C - 20.0;
                    g->unkEF0 = g->unkEF0 | 0x102;
                } else if (sp57 == 9) {
                    func_801BF1A0(0xA);
                    D_801E4011 = 0;
                    g->unkE0->unk2C->unk8 = sp6C - 21.0;
                    g->unkEF0 = g->unkEF0 | 4;
                }
                if (func_801C5A1C(P->unk4, P->unk8 + 10.0, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 10.0, func_8001EB64(P->unk12) * 10.0 + P->unkC) != 0) {
                    sp60[2] = g->unk364;
                    sp60[0] = g->unk35C;
                    sp60[1] = g->unk360;
                    D_8021AFC0 = (s16)(func_8001EF38(-sp60[2], sp60[0]) + 0x1800) & 0x1FFF;
                    D_8021AFB4 = g->unk380;
                    D_8021AFBC = g->unk388;
                    return;
                }
                func_801BF1A0(1);
                sub->unk0 = 0x1680053;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C = arg0->unk2C | 0x40;
                func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                g->unkEF0 = g->unkEF0 & 0xFEF1;
                g->unkEF0 = g->unkEF0 | 0x200;
            }
        }
    break;
    default:
        sub->unk0 = 0x168004F;
        sub->unk4 = 0;
        sub->unk6 = 0;
        sub->unk8 = 1.0f;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        arg0->unk40 = 0.0f;
        arg0->unk2C = arg0->unk2C | 0x80;
        arg0->unk48 = 0.0f;
        g->unkEF0 = g->unkEF0 | 8;
    }
}
#undef g
#undef P
#undef D_801BBBF0
#undef D_801E4011
#undef D_80216BF0
#undef D_80216C00
#undef D_80218578
#undef D_80218580
#undef D_80218588
#undef D_80218590
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_80010550
#undef func_800113D0
#undef func_8001EF38
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Sub

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E95D4.s {"functions":["func_801E95D4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E95D4.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EACA4.s {"functions":["func_801EACA4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EACA4.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EB7A8.s {"functions":["func_801EB7A8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EB7A8.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EBCC4.s {"functions":["func_801EBCC4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EBCC4.s")

extern func_801EFD14_Table D_80216B90;

extern u8 D_80216C0C;

void func_801ECF58(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801E74DC_Sub *s;
    s32 a3 = arg3;
    s32 id;

    id = arg2->unk1C.unk0;
    if (id == 0x1680007) goto l7;
    if (id != 0x1680021) goto lelse;
    goto l21;
l7:
    if (arg4 != 0) {
        D_80216C0C = 1;
    }
    if (a3 != 0) {
        s = &arg2->unk1C;
        if (D_80216C0C != 0) {
            s->unk0 = 0x1680022;
        } else {
            s->unk0 = 0x1680021;
        }
        *(s16 *)((u8 *)s + 4) = 0;
        *(s16 *)((u8 *)s + 6) = 0;
        func_8013A28C(arg1, *s);
        D_80216C0C = 0;
    }
    return;
l21:
    if (a3 != 0) {
        func_80011140(arg1, arg2, D_80216B90, 0xA);
        arg0->unk2C |= 0x80;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
    } else {
        D_80216C0C = 0;
    }
    return;
lelse:
    s = &arg2->unk1C;
    if (s != NULL) {
    }
    s->unk0 = 0x1680007;
    *(s16 *)((u8 *)s + 4) = 0;
    *(s16 *)((u8 *)s + 6) = 0;
    func_8013A28C(arg1, *s);
    arg0->unk40 = 0.0f;
    arg0->unk2C |= 0x80;
    arg0->unk48 = 0.0f;
    D_80216C0C = 0;
}

#define D_801BBBF0 D_801BBBF0__func_801ED0EC
#define func_80010550 func_80010550__func_801ED0EC
#define func_8013A28C func_8013A28C__func_801ED0EC
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801ED0EC
#define func_801E74DC_Inner func_801E74DC_Inner__func_801ED0EC
#define func_801E74DC_Outer func_801E74DC_Outer__func_801ED0EC
#define func_801E74DC_Sub func_801E74DC_Sub__func_801ED0EC
#define func_801F10C8_Struct func_801F10C8_Struct__func_801ED0EC
#define func_801F10C8_Struct_Inner func_801F10C8_Struct_Inner__func_801ED0EC
#define func_801F10C8_Struct_Inner2 func_801F10C8_Struct_Inner2__func_801ED0EC
typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;
typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;
typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;
extern func_801F10C8_Struct D_801BBBF0;
extern s32 func_80010550(s32, void *);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801ED0EC_StructGlobal {
    u8 pad[0xE0];
    func_801E74DC_Outer *unkE0;
} func_801ED0EC_StructGlobal;

typedef struct func_801ED0EC_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801ED0EC_Sub;

typedef struct func_801ED0EC_Arg2 {
    u8 pad[0x1C];
    func_801ED0EC_Sub unk1C;
} func_801ED0EC_Arg2;

void func_801ED0EC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801ED0EC_Arg2 *arg2, u16 arg3)
{
    func_801ED0EC_Sub *temp;
    func_801E74DC_Inner *inner;

    temp = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x01680022) {
        if (arg3 == 0) {
            return;
        }
        {
            temp->unk0 = 0x0168003E;
            temp->unk4 = 0;
            temp->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 + 0x1000;
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 & 0x1FFF;
            func_80010550(arg1, arg2);
        }
    } else {
        temp->unk0 = 0x01680022;
        temp->unk4 = 0;
        temp->unk6 = 0;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        arg0->unk2C |= 0x80;
    }
}
#undef D_801BBBF0
#undef func_80010550
#undef func_8013A28C
#undef func_801E74DC_Arg0
#undef func_801E74DC_Inner
#undef func_801E74DC_Outer
#undef func_801E74DC_Sub
#undef func_801F10C8_Struct
#undef func_801F10C8_Struct_Inner
#undef func_801F10C8_Struct_Inner2


typedef struct func_801ED1F4_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801ED1F4_StructPos;
typedef struct func_801ED1F4_StructObj {
    u8 pad[0x2C];
    func_801ED1F4_StructPos *pos;
} func_801ED1F4_StructObj;
typedef struct func_801ED1F4_StructGlobal {
    u8 pad[0xE0];
    func_801ED1F4_StructObj *obj;
    u8 pad2[0x230 - 0xE4];
    u8 flag;
} func_801ED1F4_StructGlobal;
extern s32 func_80010550(s32, void *);
extern void func_801E6BCC(s32, s32, void *, u16);

extern u8 D_801CBBF0[];

#define FUNC_801ED1F4_G ((func_801ED1F4_StructGlobal *)(D_801CBBF0 - 0x10000))

void func_801ED1F4(s32 arg0, s32 arg1, u8 *arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    func_801E74DC_Sub sp20;
    u16 sp1E;
    func_801ED1F4_StructPos *temp_v0;
    u8 *p;

    temp_v0 = FUNC_801ED1F4_G->obj->pos;
    sp2C = temp_v0->x;
    sp30 = temp_v0->y;
    sp34 = temp_v0->z;
    sp1E = func_80010550(arg1, arg2);
    FUNC_801ED1F4_G->obj->pos->x = sp2C;
    FUNC_801ED1F4_G->obj->pos->y = sp30;
    FUNC_801ED1F4_G->obj->pos->z = sp34;
    FUNC_801ED1F4_G->flag = 1;
    p = *(u8 **)&arg2;
    *(s16 *)(p + 0x22) = 0;
    p += 0x1C;
    func_8013A28C(arg1, *(func_801E74DC_Sub *)p);
    func_801E6BCC(arg0, arg1, arg2, sp1E);
}

#undef FUNC_801ED1F4_G

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801ED2D4.s {"functions":["func_801ED2D4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801ED2D4.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801ED72C.s {"functions":["func_801ED72C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801ED72C.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EDF0C.s {"functions":["func_801EDF0C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EDF0C.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EEC58.s {"functions":["func_801EEC58"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EEC58.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EF440.s {"functions":["func_801EF440"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EF440.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EF6F8.s {"functions":["func_801EF6F8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EF6F8.s")


typedef struct func_801EFBEC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    s32 unk5C;
} func_801EFBEC_Struct;

s32 func_800058DC(void *arg0, void *arg1);
s32 func_80011198(void *arg0, s32 arg1, void *arg2, void *arg3);
extern u8 D_801BBE1A[];
extern s16 D_80216C10;
extern void func_801EFC50();

void func_801EFBEC(func_801EFBEC_Struct *arg0, void *arg1) {
    s32 temp;

    temp = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    D_80216C10 = 0;
    func_80011198(arg1, temp, arg0, arg1);
    D_801BBE1A[6] = 1;
    func_800058DC(arg0, func_801EFC50);
}

typedef struct func_801EFD14_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_801EFD14_Struct;
extern func_801EFD14_Table D_80216BCC;
void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1);

extern void func_80011258(s32, s32, u16);

void func_801EFC50(void *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_a2;

    sp24 = (s32) *(void **) ((u8 *) arg0 + 0x5C);
    temp_a2 = (u16) func_80010550(arg1, (void *) sp24);
    if ((*(u16 *) &D_80216C10)++ >= 0x1F) {
        func_80011258(arg1, sp24 + 0x22, temp_a2);
    }
    if (temp_a2 != 0) {
        *(u16 *) &D_80216C10 = 0;
        func_80011140(arg1, (void *) sp24, D_80216BCC, 0x14);
        func_800058DC(arg0, &func_801EFD14);
    }
}

extern u16 D_801BCAE0;


typedef struct func_801EFD14_Obj {
    u8 pad[0x1C];
    s32 unk1C;
} func_801EFD14_Obj;


extern void func_801E5010(void);

void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1) {
    func_801EFD14_Obj *temp_a1;
    s32 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v1 = temp_a1->unk1C;
    if (temp_v1 == 0x01680041) {
        D_801BCAE0 = 0x80;
        func_800058DC(arg0, func_801E5010);
    } else if (temp_v1 != 0x03480010) {
        func_80011140(arg1, temp_a1, D_80216BCC, 0x14);
    } else {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_80011140(arg1, temp_a1, D_80216B90, 0xA);
        }
    }
}


void func_801EFE0C(f32 arg0) {
    f64 t = (f64) arg0;
    if (t > 1.0) {
        if (t > 3.0) {
            D_801BBCD0->unk2C->unk12 -= 0x50;
        } else if (t > 2.0) {
            D_801BBCD0->unk2C->unk12 -= 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 -= 0x28;
        }
    } else if (t < -1.0) {
        if (t < -3.0) {
            D_801BBCD0->unk2C->unk12 += 0x50;
        } else if (t < -2.0) {
            D_801BBCD0->unk2C->unk12 += 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 += 0x28;
        }
    }
    D_801BBCD0->unk2C->unk12 &= 0x1FFF;
}

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EFF78.s {"functions":["func_801EFF78"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801EFF78.s")


typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;

typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;

typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;

extern func_801F10C8_Struct D_801BBBF0;

s32 func_801F10C8(void) {
    s32 var_a0;
    func_801F10C8_Struct_Inner2 *p;
    s32 flags;

    p = D_801BBBF0.unkDC->unk68;
    flags = D_801BBBF0.unkEF0;
    if (flags & 0x20) {
        return 1;
    }
    var_a0 = (p->unk4 & 0x4000) != 0;
    if (var_a0 != 0) {
        var_a0 = (flags & 0x880) != 0;
    }
    return var_a0 & 0xFF;
}


u8 func_801F1114(void) {
    return ((u8 *)&D_801BCAE0)[6];
}


u8 func_801F1120(void) {
    return ((u8 *)&D_801BCAE0)[7];
}



s32 func_801F112C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801BCAE0 & 0x10) {
        var_v1 = 1;
    }
    if (D_801BCAE0 & 2) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 4) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 8) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x40) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x200) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x400) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x1000) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F11C0.s {"functions":["func_801F11C0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F11C0.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F13B8.s {"functions":["func_801F13B8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F13B8.s")

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F152C.s {"functions":["func_801F152C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801F152C.s")

#define D_802187B8 D_802187B8__func_801F1888
#define func_801C5A1C func_801C5A1C__func_801F1888
#define func_80247294 func_80247294__func_801F1888

typedef struct func_801F1888_Vec { u8 pad[4]; f32 x; f32 y; f32 z; } func_801F1888_Vec;
typedef struct func_801F1888_Obj { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_801F1888_Obj;
typedef struct func_801F1888_Buf { u8 pad[0xC]; s16 unkC; s16 unkE; f32 unk10; } func_801F1888_Buf;
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_80247294(s32, void *);
extern f64 D_802187B8;

#define V (*(func_801F1888_Vec **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C))
s32 func_801F1888(void) {
    f64 k;
    func_801F1888_Buf sp3C;
    func_801F1888_Obj *o;

    o = (func_801F1888_Obj *)D_801BBBF0.unkDC;
    if (func_801C5A1C(V->x, V->y + 2.0, V->z, V->x, V->y - 2.0, V->z) != 0 && ((u8 *)&D_801BBBF0)[0x35A] == 0x25) {
        func_80247294(*(s32 *)((u8 *)&D_801BBBF0 + 0x38C), &sp3C);
        o->unk40 = -func_8001EAD0(sp3C.unkC) * sp3C.unk10;
        o->unk44 = 0.0f;
        o->unk48 = -func_8001EB64(sp3C.unkC) * sp3C.unk10;
        return 1;
    }
    k = D_802187B8;
    o->unk40 = o->unk40 * k;
    o->unk48 = o->unk48 * k;
    return 0;
}
#undef V
#undef D_802187B8
#undef func_801C5A1C
#undef func_80247294


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801E4F60[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x6D, 0x6F, 0x76, 0x65, 0x2E, 0x63, 0x00, 0x00,
    0xB6, 0xF5, 0xC3, 0xE6, 0x0A, 0x00, 0x00, 0x00, 0x32, 0x2E, 0x30, 0x6D, 0xA4, 0xCE, 0xC3, 0xCA,
    0xBA, 0xB9, 0xA4, 0xCF, 0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xCD,
    0xA1, 0xA3, 0x0A, 0x00, 0x6C, 0x6A, 0x75, 0x6D, 0x70, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x68,
    0x69, 0x74, 0x20, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x0A, 0x00, 0x00,
    0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB,
    0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0x32, 0x2E, 0x30, 0x6D,
    0xA4, 0xCE, 0xC3, 0xCA, 0xBA, 0xB9, 0xA4, 0xCF, 0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3,
    0xA4, 0xC6, 0xA4, 0xCD, 0xA1, 0xA3, 0x0A, 0x00, 0x76, 0x6A, 0x75, 0x6D, 0x70, 0x3D, 0x3D, 0x3D,
    0x3D, 0x3D, 0x3D, 0x68, 0x69, 0x74, 0x20, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64,
    0x20, 0x0A, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4,
    0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB,
    0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED,
    0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6,
    0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F,
    0x6D, 0x6F, 0x76, 0x65, 0x2E, 0x63, 0x00, 0x00, 0xC0, 0xB5, 0xBE, 0xEF, 0xC6, 0xB0, 0xBA, 0xEE,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA,
    0xA1, 0xAA, 0x0A, 0x00, 0xC0, 0xB5, 0xBE, 0xEF, 0xC6, 0xB0, 0xBA, 0xEE, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA, 0xA1, 0xAA, 0x0A, 0x00,
    0xB7, 0xE3, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA, 0xA1, 0xAA,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA,
    0xA1, 0xAA, 0x0A, 0x00, 0x32, 0x2E, 0x30, 0x6D, 0xA4, 0xCE, 0xC3, 0xCA, 0xBA, 0xB9, 0xA4, 0xCF,
    0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xCD, 0xA1, 0xA3, 0x0A, 0x00,
    0x72, 0x61, 0x6B, 0x6B, 0x61, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x68, 0x69, 0x74, 0x20, 0x6B,
    0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x0A, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED,
    0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6,
    0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xB9, 0xA5, 0xC6, 0xA1, 0xBC, 0xA5, 0xB8,
    0xC0, 0xDA, 0xA4, 0xEA, 0xC2, 0xD8, 0xA4, 0xA8, 0x20, 0x20, 0x25, 0x78, 0x0A, 0x00, 0x00, 0x00,
    0x3D, 0x3E, 0x00, 0x00, 0x64, 0x65, 0x6D, 0x6F, 0x20, 0xBE, 0xF5, 0xC2, 0xD6, 0xB0, 0xDC, 0xB9,
    0xD4, 0xB4, 0xB0, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0xA4, 0xDB, 0xA4, 0xD5, 0xA4, 0xAF, 0xCA, 0xE4,
    0xB4, 0xB0, 0xC3, 0xE6, 0x41, 0x20, 0x00, 0x00, 0xA4, 0xDB, 0xA4, 0xD5, 0xA4, 0xAF, 0xCA, 0xE4,
    0xB4, 0xB0, 0xC3, 0xE6, 0x42, 0x20, 0x00, 0x00, 0x73, 0x74, 0x61, 0x6E, 0x64, 0x20, 0xBE, 0xF5,
    0xC2, 0xD6, 0xB0, 0xDC, 0xB9, 0xD4, 0xB4, 0xB0, 0xCE, 0xBB, 0x0A, 0x00, 0xB6, 0xF5, 0xC3, 0xE6,
    0x0A, 0x00, 0x00, 0x00, 0x80, 0x1E, 0x5C, 0x20, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5A, 0x74,
    0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74,
    0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x80,
    0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x80, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5C, 0xC4,
    0x80, 0x1E, 0x5C, 0xF0, 0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x57, 0xD8,
    0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x18, 0x80, 0x1E, 0x57, 0xA4, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x57, 0xA4, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x57, 0xCC,
    0x80, 0x1E, 0x58, 0x54, 0x80, 0x1E, 0x58, 0x54, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x58, 0x2C, 0x80, 0x1E, 0x58, 0x2C,
    0x80, 0x1E, 0x58, 0x2C, 0x80, 0x1E, 0x58, 0x00, 0x80, 0x1E, 0x58, 0x00, 0x80, 0x1E, 0x5D, 0x18,
    0x80, 0x1E, 0x5D, 0x18, 0x80, 0x1E, 0x5D, 0x18, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0x74,
    0x80, 0x1E, 0x71, 0x08, 0x80, 0x1E, 0x6C, 0x2C, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC,
    0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC,
    0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC,
    0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC,
    0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC, 0x80, 0x1E, 0x71, 0xEC,
    0x80, 0x1E, 0x6F, 0xA4, 0x80, 0x1E, 0x70, 0x60, 0x80, 0x1E, 0x70, 0x04, 0x80, 0x1E, 0x6E, 0x0C,
    0x80, 0x1E, 0x6E, 0xD4, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF1, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xF4, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x3F, 0xF3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x33, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD,
    0x3F, 0xEC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x3F, 0x94, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0x94, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x33, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x80, 0x1E, 0x96, 0x6C, 0x80, 0x1E, 0x98, 0x1C,
    0x80, 0x1E, 0x98, 0x9C, 0x80, 0x1E, 0x99, 0x38, 0x80, 0x1E, 0xAA, 0x08, 0x80, 0x1E, 0xA5, 0x00,
    0x80, 0x1E, 0xAC, 0xF0, 0x80, 0x1E, 0xB0, 0x3C, 0x80, 0x1E, 0xB0, 0x90, 0x80, 0x1E, 0xB4, 0x18,
    0x80, 0x1E, 0xB7, 0x08, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xA6, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1E, 0xD3, 0x94, 0x80, 0x1E, 0xD4, 0x80,
    0x80, 0x1E, 0xD3, 0xF4, 0x80, 0x1E, 0xD3, 0x94, 0x80, 0x1E, 0xD4, 0x80, 0x80, 0x1E, 0xD3, 0xF4,
    0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94,
    0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94,
    0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94,
    0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94,
    0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD5, 0x94, 0x80, 0x1E, 0xD4, 0x80, 0x3E, 0xCC, 0xCC, 0xCD,
    0x80, 0x1E, 0xD7, 0x80, 0x80, 0x1E, 0xD9, 0xB0, 0x80, 0x1E, 0xD9, 0xB0, 0x80, 0x1E, 0xD7, 0xF4,
    0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C,
    0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C,
    0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xDB, 0x7C, 0x80, 0x1E, 0xD8, 0x78, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xD9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x33, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x3F, 0xEC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD,
    0x3F, 0xC3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xC3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3F, 0xEE, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
    0x3F, 0xD6, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xA6, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xE3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x80, 0x1E, 0xF8, 0x6C, 0x80, 0x1E, 0xFB, 0x38,
    0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xF7, 0xDC, 0x80, 0x1E, 0xF7, 0xDC, 0x80, 0x1E, 0xF8, 0xF0,
    0x80, 0x1E, 0xF8, 0xF0, 0x80, 0x1E, 0xF8, 0xF0, 0x80, 0x1E, 0xFA, 0xF4, 0x80, 0x1E, 0xFA, 0xF4,
    0x80, 0x1E, 0xFA, 0xF4, 0x80, 0x1E, 0xFA, 0xF4, 0x80, 0x1E, 0xFA, 0xF4, 0x80, 0x1E, 0xFA, 0x3C,
    0x80, 0x1E, 0xFA, 0x3C, 0x80, 0x1E, 0xFA, 0x3C, 0x80, 0x1E, 0xF9, 0x74, 0x80, 0x1E, 0xFA, 0x78,
    0x80, 0x1E, 0xF9, 0x74, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38,
    0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38,
    0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38,
    0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38,
    0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xFB, 0x38, 0x80, 0x1E, 0xF8, 0xF0,
    0x3F, 0x99, 0x99, 0x9A, 0x3F, 0x99, 0x99, 0x9A, 0x3F, 0xA9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x40, 0xD9, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xEE, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
};
