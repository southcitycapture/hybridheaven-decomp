#include "context.h"

#ifdef DEV
typedef struct func_8021E52C_Struct func_8021DFA8_S3;
#else
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8021DFA8_S3;
extern void func_8013A28C();
#endif
extern void func_8021E59C();

struct func_8021DFA8_Sub {
    u8 pad0[0x1C];
    union {
        func_8021DFA8_S3 s;
        struct {
            s32 unk1C;
            s32 unk20;
            f32 unk24;
        } f;
    } u;
};
struct func_8021DFA8_P68 {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8021DFA8_Actor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    struct func_8021DFA8_Sub *unk5C;
    u8 pad60[0x68 - 0x60];
    struct func_8021DFA8_P68 *unk68;
};
struct func_8021DFA8_Player {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u16 pad : 13;
            u16 st : 3;
        } g;
    } unk30;
    u8 pad34[0x312 - 0x34];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
struct func_8021DFA8_Pair {
    union {
        u16 h[4];
        u16 h2[2][2];
        s32 w[2];
    } u;
};
extern struct func_8021DFA8_Pair D_8023C290;
extern s32 func_8021DEA8();
extern s32 func_801DFE00();
extern void func_80226710(s32, u16, f32, u8);
extern void func_8013B808();
extern void func_80371930();

#define ACT ((struct func_8021DFA8_Actor *)arg0)

void func_8021DFA8(s32 arg0, s32 arg1) {
    struct func_8021DFA8_Sub *sp44 = ACT->unk5C;
    struct func_8021DFA8_Player *v1;
    struct func_8021DFA8_Player *a0;
    struct func_8021DFA8_P68 *t0;
    f32 sp34;
    f32 sp30;
    s32 w;
    u8 sp2B;
    struct func_8021DFA8_Pair sp20;
    u8 a3;

    if (ACT == (struct func_8021DFA8_Actor *)D_801BBCCC) {
        v1 = (struct func_8021DFA8_Player *)&D_801BC03C;
    } else {
        v1 = (struct func_8021DFA8_Player *)&D_801BC3D8;
    }
    a0 = (struct func_8021DFA8_Player *)((D_801BBCCC != arg0) ? &D_801BC03C : &D_801BC3D8);
    t0 = ACT->unk68;
    sp2B = 0;
    v1->unk392 = 0;
    v1->unk30.b[2] &= ~0xE0;
    if (D_801BCC21 != 5) {
        return;
    }
    if (v1->unk30.f.a != 0) {
        return;
    }
    {
        if (v1->unk2 <= 0 || v1->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if (v1->unk30.g.st == 5U) {
            func_8022397C(arg0);
            return;
        }
        if ((t0->unk4 & 0x8000) && !(a0->unk30.b[0] & 1) && v1->unk6 >= 0x1F && a0->unk2 != 0) {
            func_802237EC(arg0);
            return;
        }
        if (sp44->u.f.unk1C == 0x03480010 && sp44->u.f.unk24 != 4.0) {
            sp44->u.f.unk24 = 4.0f;
            func_8013A28C(arg1, sp44->u.s);
        } else if (sp44->u.f.unk1C == 0x0410002B && sp44->u.f.unk24 != 5.0) {
            sp44->u.f.unk24 = 5.0f;
            func_8013A28C(arg1, sp44->u.s);
        }
        func_80010550(arg1, (s32)sp44);
        sp34 = -t0->unk6 / 20.0;
        sp30 = t0->unk8 / 20.0;
        if (func_802242D0(arg0) != 0 || func_8021DEA8((struct func_8021DEA8_Actor *)arg0) != 0) {
            if (ACT->unk36 == 0x29 || ACT->unk36 == 0x2B || ACT->unk36 == 0x2C || ACT->unk36 == 0x11B || ACT->unk36 == 0x11C) {
                sp20 = D_8023C290;
                a3 = 0;
                if (func_801DFE00(arg0) != 0) {
                    w = 1;
                } else {
                    w = 0;
                }
                if (ACT->unk36 == 0x11B || ACT->unk36 == 0x11C) {
                    a3 = 1;
                }
                func_80226710(arg0, sp20.u.h2[a3][w], 1.0f, a3);
            } else {
                func_8013B808(arg0, arg1, 1);
            }
            func_80371930(arg0, arg1, 1);
            sp2B = 1;
        }
        if (((v1->unk30.w << 3) >> 28) != 3 && D_801BBCCC == arg0 && sp34 * sp34 + sp30 * sp30 > 1.0) {
            sp2B = 1;
        }
        v1->unk312 = v1->unk312 - 1;
        if (v1->unk312 <= 0) {
            sp2B = 1;
        }
        if (sp2B != 0) {
            v1->unk312 = 0;
            v1->unk30.b[0] &= ~0x1E;
            v1->unk30.b[3] &= ~0x80;
            func_800058DC(arg0, (void *)func_8021E59C);
        }
    }
}
