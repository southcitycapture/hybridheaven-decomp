#include "common.h"
#define goto return; if (0) goto
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
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
#define SUBV (*(func_801E74DC_Sub *)sub)
s32 func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, void *);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
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
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
void func_801EFF78(func_801EFF78_StructObj *arg0, s32 arg1);

#undef goto

typedef struct func_801EDF0C_Sub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_801EDF0C_Sub;
typedef struct func_801EDF0C_Stick {
    u16 unk0;
    u16 unk2;
} func_801EDF0C_Stick;
typedef struct func_801EDF0C_Arg0 {
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
    func_801EDF0C_Stick *unk68;
} func_801EDF0C_Arg0;
typedef struct func_801EDF0C_Arg2 {
    u8 pad[0x1C];
    func_801EDF0C_Sub unk1C;
} func_801EDF0C_Arg2;
extern func_801EFD14_Table D_80216BC0;
extern f64 D_802186B8;
extern f64 D_802186C0;
extern f64 D_802186C8;
extern s32 func_8011B254();
extern s32 func_8011B260();
extern s32 func_801C7B18();
extern void func_801E95D4(void *, s32, void *, u16, s32);
extern void func_80118500();
extern void func_80118B70();
extern void func_801190F4();
#undef g
#undef P
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
#define SUBV (*(func_801E74DC_Sub *)sub)

void func_801EDF0C(func_801EDF0C_Arg0 *arg0, s32 arg1, func_801EDF0C_Arg2 *arg2, u16 arg3, f64 k) {
    func_801EDF0C_Sub *sub;
    f32 sp68;
    f32 sp5C[3];
    u8 kind;
    func_801EDF0C_Stick *stick;

    sub = &arg2->unk1C;
    stick = arg0->unk68;
    switch (sub->unk0) {
    case 0x168002A:
        if (arg3 != 0) {
            func_80011140(arg1, arg2, D_80216BC0, 5);
        }
    case 0x1680053:
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
            if (D_80216BF0 < 0x14) {
                if (D_8021AFB0 > 14.0) {
                    sub->unk0 = 0x1680040;
                    sub->unk4 = 8;
                    g->unkEF0 &= 0xFFF7;
                } else if (D_8021AFB0 > 6.0) {
                    sub->unk0 = 0x168003F;
                    sub->unk4 = 8;
                    g->unkEF0 &= 0xFFF7;
                } else if (D_8021AFB0 > 1.0) {
                    sub->unk0 = 0x168003E;
                    sub->unk4 = 9;
                    g->unkEF0 &= 0xFFF7;
                } else {
                    sub->unk0 = 0x1680051;
                    arg0->unk40 = 0.0f;
                    arg0->unk44 = 0.0f;
                    arg0->unk48 = 0.0f;
                    sub->unk4 = 1;
                    sub->unk8 = 1.0f;
                }
            } else {
                if (sub->unk8 > 1.0) {
                    func_801518D4(0, 7, 8);
                } else {
                    func_801518D4(0, 3, 6);
                }
                sub->unk0 = 0x1680052;
                sub->unk4 = 1;
                if (sub->unk8 < 2.0) {
                    sub->unk8 = 3.0f;
                } else {
                    sub->unk8 = 6.0f;
                }
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
            }
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            func_80010550(arg1, arg2);
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            arg0->unk2C |= 0x80;
            return;
        }
        D_80216BF0 += 1;
        if ((g->unkEF0 & 8) && func_801C5A1C(func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 6.0 + P->unkC, func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 6.0 + P->unkC) != 0 && (g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11)) {
            kind = g->unk35A;
            sp68 = g->unk384;
            if (func_801C5A1C(P->unk4, P->unk8 + D_802186B8, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + D_802186B8, func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
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
                        P->unk8 = sp68 - D_802186C0;
                        g->unkEF0 |= 6;
                        func_801BF1A0(9);
                        D_801E4011 = 0;
                    }
                    if (kind == 9) {
                        func_801BF1A0(0xA);
                        D_801E4011 = 0;
                        P->unk8 = sp68 - 21.0;
                        g->unkEF0 |= 4;
                    }
                    if (func_801C5A1C(P->unk4, P->unk8 + 10.0, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 10.0, func_8001EB64(P->unk12) * 10.0 + P->unkC) != 0) {
                        sp5C[2] = g->unk364;
                        sp5C[0] = g->unk35C;
                        sp5C[1] = g->unk360;
                        D_8021AFC0 = (s16)(func_8001EF38(-sp5C[2], sp5C[0]) + 0x1800) & 0x1FFF;
                        D_8021AFB4 = g->unk380;
                        D_8021AFBC = g->unk388;
                        return;
                    }
                    func_801BF1A0(1);
                    sub->unk0 = 0x1680053;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    arg0->unk2C |= 0x40;
                    func_8013A28C(arg1, SUBV);
                    func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                    g->unkEF0 &= 0xFEF1;
                    g->unkEF0 |= 0x200;
                    return;
                }
            }
            return;
        }
        if (arg0->unk30 & 8) {
            k = D_802186C8;
            arg0->unk40 *= k;
            arg0->unk48 *= k;
        }
        return;
    case 0x1680051:
        g->unkEF0 &= 0xFDF7;
        if (stick->unk2 & 0x10) {
            func_800058DC(arg0, func_801EFF78);
            return;
        }
        if ((stick->unk2 & 4) && (func_8011B260() == 0 || func_8011B254() == 2)) {
            func_800058DC(arg0, func_80118500);
            return;
        }
        if ((stick->unk2 & 2) && func_8011B260() == 0 && func_8011B254() == 2) {
            func_800058DC(arg0, func_801190F4);
            return;
        }
        if ((stick->unk2 & 1) && func_8011B260() == 0 && func_8011B254() == 2) {
            func_800058DC(arg0, func_80118B70);
            return;
        }
        if ((stick->unk2 & 0x2000) && func_801C5A1C(P->unk4, P->unk8 + 1.0, P->unkC, P->unk4, P->unk8 - 3.0, P->unkC) != 0 && g->unk35A != 0x11 && g->unk35A != 0x28 && func_801C7B18() != 0) {
            func_801E95D4(arg0, arg1, arg2, arg3, 0);
            return;
        }
        if (D_8021AFB0 > 14.0) {
            sub->unk0 = 0x1680040;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
        if (D_8021AFB0 > 6.0) {
            sub->unk0 = 0x168003F;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
        if (D_8021AFB0 > 1.0) {
            sub->unk0 = 0x168003E;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
    case 0x1680052:
        g->unkEF0 &= 0xFFF7;
        if (arg3 != 0) {
            func_80011140(arg1, arg2, *(func_801EFD14_Table *)&D_80216B90, 0xA);
            arg0->unk2C |= 0x80;
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
        }
        return;
    default:
        sub->unk0 = 0x1680053;
        sub->unk4 = 0;
        sub->unk6 = 0;
        sub->unk8 = 1.0f;
        func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
        func_8013A28C(arg1, SUBV);
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return;
    }
}
