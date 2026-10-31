#include "common.h"
extern u8 D_801BBBF0[];
extern s32 func_80010550(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
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
