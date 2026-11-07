#include "common.h"
extern int D_8021AFC8;
extern int B_8021AFC8;
#define end D_8021AFC8
#define c0 D_8021AFC8; if (0) B_8021AFC8
extern s32 D_80011198(s32, void *);
extern u8 D_801BBBF0[];
extern s8 D_801E4011;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern f32 D_8021AFB0;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
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
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern s32 func_80010550(s32, void *);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);

#undef c0
#undef end

typedef struct func_801E7C30_Sub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_801E7C30_Sub;
typedef struct func_801E7C30_Stick {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
} func_801E7C30_Stick;
typedef struct func_801E7C30_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x68 - 0x4C];
    func_801E7C30_Stick *unk68;
} func_801E7C30_Arg0;
typedef struct func_801E7C30_Arg2 {
    u8 pad[0x1C];
    func_801E7C30_Sub unk1C;
} func_801E7C30_Arg2;
typedef struct func_801E7C30_G {
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
    u8 pad5[0xEC4 - 0x38C];
    s32 unkEC4;
    u8 pad6[0xEF0 - 0xEC8];
    u16 unkEF0;
    u8 pad7[4];
    u8 unkEF6;
    u8 pad8[5];
    s32 unkEFC;
} func_801E7C30_G;
extern void func_801DFE50(void *, s32);
extern u8 D_80216C08;

#undef g
#undef P
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern s32 B_8021AFC4;
extern s32 D_8021AFC4;
extern void *func_80011140__r(s32, void *, func_801EFD14_Table, s32);
#define SUBV (*(func_801E74DC_Sub *)sub)

void func_801E7C30(func_801E7C30_Arg0 *arg0, s32 arg1, func_801E7C30_Arg2 *arg2, u16 arg3) {
    func_801E7C30_Sub *sub;
    func_801E7C30_Stick *stick;
    f32 sp6C;
    f32 sp60[3];
    s16 ang;
    u8 kind;
    s32 d;
    f32 fa0;
    f32 fa1;

    sub = &arg2->unk1C;
    stick = arg0->unk68;
    switch (sub->unk0) {
    case 0x168004C:
        if (sub->unk4 == 2) {
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x40;
            g->unkEF0 |= 8;
            switch (D_80216C08) {
            case 0:
                arg0->unk3F = 4;
                break;
            case 1:
                arg0->unk3F = 0xA;
                break;
            case 2:
                arg0->unk3F = 0xB;
                break;
            }
        }
        if (g->unkEC4 & 0x20) {
            sub->unk0 = 0x1680053;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x40;
            arg0->unk40 = 0.0f;
            arg0->unk44 = 0.0f;
            arg0->unk48 = 0.0f;
            func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
            g->unkEF0 |= 8;
            return;
        }
        if (sub->unk4 < 5) {
            return;
        }
        if (arg0->unk30 & 4) {
            if (g->unkEF6 == 0x18) {
                func_801E4F60(1);
                arg0->unk3E = 0xAF;
                D_80216C00 = P->unk12;
                func_801518D4(0, 3, 5);
                sub->unk0 = 0x168002B;
                sub->unk4 = 2;
                sub->unk6 = 0;
                sub->unk8 = 1.0f;
                func_8013A28C(arg1, SUBV);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                return;
            }
            D_8021AFC4 = 0;
            if (D_80216BF0 >= 0x14) {
                func_801518D4(0, 3, 6);
            }
            sub->unk0 = 0x168004D;
            arg0->unk40 = 0.0f;
            arg0->unk44 = 0.0f;
            arg0->unk48 = 0.0f;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            func_80010550(arg1, arg2);
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            if (D_80216C08 == 2) {
                arg0->unk2C &= ~0x80;
                return;
            }
            arg0->unk2C |= 0x80;
            return;
        }
        if ((g->unkEF0 & 8) && func_801C5A1C(func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 6.0 + P->unkC, func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 6.0 + P->unkC) != 0 && (g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11)) {
            kind = g->unk35A;
            sp6C = g->unk384;
            if (func_801C5A1C(P->unk4, P->unk8 + 16.5, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 16.5, func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) == 0) {
                    sub->unk0 = 0x168000D;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 1.0f;
                    func_8013A28C(arg1, SUBV);
                    arg0->unk2C &= ~0x40;
                    arg0->unk2C &= ~0x80;
                    func_801E4F60(0);
                    arg0->unk40 = 0.0f;
                    arg0->unk44 = 0.0f;
                    arg0->unk48 = 0.0f;
                    if (kind == 8 || kind == 0x11) {
                        P->unk8 = sp6C - 19.8;
                        g->unkEF0 |= 6;
                        func_801BF1A0(9);
                        D_801E4011 = 0;
                    }
                    if (kind == 9) {
                        func_801BF1A0(0xA);
                        D_801E4011 = 0;
                        P->unk8 = sp6C - 21.0;
                        g->unkEF0 |= 4;
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
                    func_8013A28C(arg1, SUBV);
                    arg0->unk2C |= 0x40;
                    func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                    g->unkEF0 &= 0xFEF1;
                    g->unkEF0 |= 0x200;
                    return;
                }
            }
            return;
        }
        if (func_801C5A1C(P->unk4, P->unk8, P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8, func_8001EB64(P->unk12) * 5.0 + P->unkC) != 0 && g->unk35A != 0xD && g->unk35A != 0xE && g->unk35A != 0x21) {
            sub->unk0 = 0x168002A;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            arg0->unk40 = arg0->unk40 / -8.0;
            arg0->unk48 = arg0->unk48 / -8.0;
            return;
        }
        if (sub->unk4 >= 0xE) {
            D_80216BF0 += 1;
        }
        if (arg0->unk30 & 8) {
            arg0->unk40 = arg0->unk40 * 0.9;
            arg0->unk48 = arg0->unk48 * 0.9;
        }
        break;
    case 0x168004D:
        g->unkEF0 &= 0xFDF7;
        if (arg3 != 0) {
            fa0 = (f64)-stick->unk6 / 20.0;
            fa1 = (f64)stick->unk8 / 20.0;
            ang = (s16)(0x2800 - g->unk232) & 0x1FFF;
            if ((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1000) {
                d = (s16)(((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1FFF) - 0x2000);
            } else {
                d = (s16)((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1FFF);
            }
            if (D_8021AFB0 > 6.0) {
                if ((d < 0 ? -d : d) < 0x800) {
                    d = B_8021AFC4;
                    if (d == 0) {
                        sub->unk0 = 0x168004E;
                        sub->unk6 = 0;
                        sub->unk4 = 0;
                        sub->unk8 = 1.0f;
                        func_8013A28C(arg1, SUBV);
                        func_80010550(arg1, arg2);
                        arg0->unk2C &= ~0x80;
                        arg0->unk2C |= 0x20;
                        arg0->unk40 = func_8001EAD0(P->unk12) * 2.5;
                        arg0->unk48 = func_8001EB64(P->unk12) * 2.5;
                        return;
                    }
                }
            }
            func_80011140(arg1, arg2, D_80216B90, 6);
            d = B_8021AFC4;
            if ((!d) | (D_8021AFC4 = ++d, 0)) {
                arg0->unk2C &= ~0x80;
                arg0->unk2C |= 0x20;
                switch (D_80216C08) {
                case 0:
                    arg0->unk40 = 2.0 * func_8001EAD0(P->unk12);
                    arg0->unk48 = 2.0 * func_8001EB64(P->unk12);
                    return;
                case 1:
                    arg0->unk40 = func_8001EAD0(P->unk12) * 1.0;
                    arg0->unk48 = func_8001EB64(P->unk12) * 1.0;
                    return;
                case 2:
                    arg0->unk40 = func_8001EAD0(P->unk12) * 1.0;
                    arg0->unk48 = func_8001EB64(P->unk12) * 1.0;
                    return;
                }
            } else {
                arg0->unk2C |= 0x80;
                arg0->unk40 = 0.0f;
                arg0->unk48 = 0.0f;
            }
        }
        break;
    case 0x168004E:
        if (arg3 != 0) {
            sub->unk0 = 0x1680040;
            sub->unk4 = 1;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x20;
            arg0->unk40 = func_8001EAD0(P->unk12) * 2.5;
            arg0->unk48 = func_8001EB64(P->unk12) * 2.5;
        }
        break;
    default:
        D_80011198(arg1, arg2);
        switch (sub->unk0) {
        case 0x168003F:
            if (sub->unk4 < 0xA) {
                sub->unk6 = 0;
            } else if (sub->unk4 < 0x16) {
                sub->unk6 = 0x10;
            } else {
                sub->unk6 = 0;
            }
            D_80216C08 = 1;
            break;
        case 0x1680040:
            if (sub->unk4 < 0xA) {
                sub->unk6 = 0;
            } else {
                sub->unk6 = 0x10;
            }
            D_80216C08 = 0;
            func_801DFE50(arg0, 0);
            break;
        default:
            if (sub->unk4 < 0xB) {
                sub->unk6 = 0;
            } else if (sub->unk4 < 0x1D) {
                sub->unk6 = 0x10;
            } else {
                sub->unk6 = 0;
            }
            D_80216C08 = 2;
            break;
        }
        sub->unk0 = 0x168004C;
        sub->unk4 = 1;
        sub->unk8 = 1.0f;
        func_8013A28C(arg1, SUBV);
        arg0->unk2C |= 0x80;
        arg0->unk2C &= ~0x40;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        break;
    }
}
