#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BBC06[];
extern u8 D_801BCC20;
extern s32 D_8023E3B8;
extern u8 D_8038CD70[];
extern void (*D_80216D10[])(void *, s32);
extern void func_800058DC();
void func_80020744(s32);
s32 func_802363D8(void);
s32 func_80236C9C(void);
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;
void func_80237004(func_80237004_Struct *arg0, s32 *arg1);
struct func_802387D4_Struct1 {
    u8 pad[0x38];
    u32 unk38;
};
struct func_802387D4_Struct0 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x74];
    struct func_802387D4_Struct1 *unk9C;
    u8 pad2[0x8];
    u8 unkA8;
    u8 pad3[3];
    u16 unkAC;
};
void func_802387D4(struct func_802387D4_Struct0 *arg0, s32 *arg1);
typedef struct func_80239E80_StructQ {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
    u8 pad2[0x2D8 - 0x32];
    u8 unk2D8;
} func_80239E80_StructQ;
typedef struct func_80239E80_StructR {
    u8 pad[0x74];
    u8 unk74;
} func_80239E80_StructR;
typedef struct func_80239E80_Struct {
    u8 pad[0x90];
    func_80239E80_StructR *unk90;
    u8 pad2[0x4];
    func_80239E80_StructQ *unk98;
} func_80239E80_Struct;
void func_80239E80(func_80239E80_Struct *arg0, s32 arg1);
typedef struct func_8023A09C_StructInner {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
} func_8023A09C_StructInner;
typedef struct func_8023A09C_Struct {
    u8 pad[0x98];
    func_8023A09C_StructInner *unk98;
} func_8023A09C_Struct;
void func_8023A09C(func_8023A09C_Struct *arg0, s32 arg1);
typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;
typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;
void func_8023A0EC(func_8023A0EC_Struct *arg0, s32 arg1);


typedef struct func_80236CC0_StructR {
    u8 pad[0x74];
    u8 unk74;
} func_80236CC0_StructR;

typedef struct func_80236CC0_StructQ {
    u8 pad[0x30];
    union {
        struct {
            u32 a : 3;
            u32 m : 4;
            u32 r : 25;
        } w;
        struct {
            u16 x : 13;
            u16 low : 3;
        } h;
        struct {
            u8 b30;
            u8 hi31 : 1;
            u8 r31 : 7;
            u8 b32;
            u8 hi33 : 1;
            u8 r33 : 7;
        } b;
        struct {
            u8 b30;
            u8 b31;
        } c;
        struct {
            u8 b30;
            s8 b31;
        } d;
        struct {
            u8 b30;
            s8 sign : 1;
            u8 rest : 7;
        } e;
    } u;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
} func_80236CC0_StructQ;

typedef struct func_80236CC0_Struct {
    u8 pad[0x90];
    func_80236CC0_StructR *unk90;
    u8 pad94[4];
    func_80236CC0_StructQ *unk98;
    func_80236CC0_StructQ *unk9C;
    u8 padA0[2];
    s8 unkA2;
    u8 padA3[9];
    u16 unkAC;
    u8 padAE[2];
    u8 *unkB0;
} func_80236CC0_Struct;
extern void func_80002364(s32, s32, s32, u8);
extern void func_8001F74C();
extern void func_80116E80(s32);
extern s32 func_80147598(void);
extern void func_8022ABD8();
extern void func_80376B2C(void *);
extern void func_8023B704();
extern void func_80239A5C();

void func_80236CC0(func_80236CC0_Struct *arg0, s32 arg1) {
    func_80236CC0_StructQ *sp2C;
    func_80236CC0_StructQ *sp28;
    func_80236CC0_StructR *sp24;
    s32 v;
    u32 a;
    s32 hi;
    s32 m;
    s32 m2;

    sp2C = arg0->unk98;
    sp28 = arg0->unk9C;
    sp24 = arg0->unk90;
    func_8001F74C(arg0);
    arg0->unkAC = 0;
    v = sp2C->u.h.low;
    a = v & 2;
    if (a != 0 && (sp24->unk74 == 0 || sp24->unk74 == 1U || sp24->unk74 == 2)) {
        if (func_802363D8() != 0) {
            func_80002364(0x0F000000, 8, 2, D_801BCC20);
            func_80116E80(0x10);
            func_80376B2C(sp2C);
            D_8023E3B8 = (s32)arg0;
            *(s32 *)(D_801BBBF0 + 0x720) = 0;
            *(s32 *)(D_801BBBF0 + 0xABC) = 0;
            func_80020744(0x275);
            if (func_80147598() != 0) {
                D_801BBC06[4] = 0;
                func_800058DC(arg0, func_8023B704);
                return;
            }
            if (func_80236C9C() != 0) {
                func_800058DC(arg0, func_8023B704);
                return;
            }
            func_800058DC(arg0, func_80237004);
        }
        return;
    }
    if (v & 4) {
        hi = sp28->u.b.hi31;
        if (hi != 0 && (sp24->unk74 == 0 || sp24->unk74 == 1U || sp24->unk74 == 2)) {
            if (sp28->unk2D8 == 0xB
                || (s32)sp2C->u.w.m == 1 || (s32)sp2C->u.w.m == 4
                || sp2C->u.b.hi33 == 1) {
                sp2C->unk2D8 = 0x14;
                func_800058DC(arg0, func_8023A09C);
            } else if (hi != 0) {
                arg0->unkB0 = D_8038CD70;
                arg0->unkA2 = 0;
                func_80020744(0x277);
                func_800058DC(arg0, func_802387D4);
            } else if (!sp28->u.h.low) {
                sp2C->u.c.b31 &= ~7;
                func_800058DC(arg0, func_8023A0EC);
            }
            D_8023E3B8 = (s32)arg0;
            return;
        }
    }
    if (a != 0 && (u16)sp24->unk74 == 3) {
        arg0->unkAC = 0x20;
        func_800058DC(arg0, func_80239E80);
        return;
    }
    if (sp28->u.e.sign != 0) {
        if (sp28->unk2D8 == 0xB
            || (s32)sp2C->u.w.m == 1 || (s32)sp2C->u.w.m == 4
            || sp2C->u.b.hi33 == 1) {
            sp2C->unk2D8 = 0x14;
            func_800058DC(arg0, func_8023A09C);
        } else {
            func_8022ABD8(arg0, sp2C);
            arg0->unkAC = 0x20;
            func_800058DC(arg0, func_80239A5C);
        }
    } else if (!sp28->u.h.low) {
        sp2C->u.c.b31 &= ~7;
        func_800058DC(arg0, func_8023A0EC);
    }
}
