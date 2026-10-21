#include "common.h"


extern void *func_80005670(void *, void *);
extern u8 D_801BBCCC[];
extern u8 D_80389780[];

void func_8037F410(s32 arg0) {
    u8 *p;

    p = func_80005670(*(void **)D_801BBCCC, D_80389780);
    *(s32 *)(p + 0x94) = arg0;
}


extern u8 D_8017DF14[];
typedef struct func_8037F448_Struct { u8 pad[0x375]; u8 n; u8 pad2[2]; u8 d[5]; } func_8037F448_Struct;

void func_8037F448(arg0, arg1)
u8 arg0;
func_8037F448_Struct *arg1;
{
    s32 i;

    if (arg1->n == 1) {
        for (i = 0; i < 2; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 2) {
        for (i = 0; i < 3; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 3) {
        for (i = 0; i < 4; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 4) {
        for (i = 0; i < 5; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    }
    D_8017DF14[arg0 * 7] = arg1->n + 1;
}


struct func_8037F58C_Struct {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x375 - 8];
    u8 unk375;
};

void func_8037F58C(struct func_8037F58C_Struct *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk6;
    if (temp_v0 == 0x1F4) {
        arg0->unk375 = 4;
        return;
    }
    if (temp_v0 >= 0x190) {
        arg0->unk375 = 3;
        return;
    }
    if (temp_v0 >= 0x12C) {
        arg0->unk375 = 2;
        return;
    }
    if (temp_v0 >= 0xC8) {
        arg0->unk375 = 1;
        return;
    }
    arg0->unk375 = 0;
}

extern u8 D_801BBBF0[];
extern u8 D_8038BC90[];
extern u8 D_8038BCB4[];
typedef struct { s32 *p; u8 pad[0x18]; } func_8037F5F0_Struct;
extern func_8037F5F0_Struct D_801842A0[];
extern void func_80006214();
extern void func_80002364();
extern void func_801460C8();
extern void func_800058DC(s32, void *);
struct func_8037F8C4_Struct;
void func_8037F8C4(struct func_8037F8C4_Struct *arg0, s32 *arg1);

void func_8037F5F0(struct func_8037F8C4_Struct *arg0, s32 arg1) {
    s8 sp6F;
    u8 i;
    extern void func_8001B204();

    sp6F = 0;
    func_801460C8(arg0, &sp6F, 0x3C, 0x54, 0xCE, 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_8001B204(1, 0x42, 0x57, D_8038BC90, 4, 0, D_801BBBF0[0x7C1] + 1);
    for (i = 0; i < (D_801BBBF0[0x7C1] + 1); i++) {
        func_8001B204((i + 3) & 0xFF, 0x4C, (s16)(i * 0xC + 0x68), D_8038BCB4, 4, 0, i + 1, *D_801842A0[(D_801BBBF0 + i)[0x7C4]].p);
    }
    func_801460C8(arg0, &sp6F, 0xBA, 0xB4, 0x50, 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_801460C8(arg0, &sp6F, 0x46, 0x66, 0xC0, D_801BBBF0[0x7C1] * 0xC + 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_80006214(arg0);
    ((s8 *)arg0)[0x91] = 0;
    func_80002364(0x03000000, 0xA, 3, 0);
    func_800058DC((s32)arg0, func_8037F8C4);
}


struct func_8037F8C4_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[6];
    u8 unk98;
};
extern u8 D_801BBC8E[];
extern u8 D_8038BCC0[];
extern u8 D_8038BCD4[];
extern u8 D_8038BCD8[];
extern u8 D_8038BCDC[];
extern void func_80006088();
extern void func_80020718();
extern void func_8037FAF4();
struct func_8037FEE4_Struct;
void func_8037FEE4(struct func_8037FEE4_Struct *arg0, s32 arg1);

void func_8037F8C4(struct func_8037F8C4_Struct *arg0, s32 *arg1) {
    s8 sp67;
    s32 a, b, c, d;
    extern void func_8001B204();

    sp67 = 0;
    if (*(u16 *)(D_801BBC8E + 0xA) & 0x200) {
        func_80020718(0x300);
        arg0->unk91 ^= 1;
    } else if (*(u16 *)(D_801BBC8E + 0xA) & 0x100) {
        func_80020718(0x300);
        arg0->unk91 ^= 1;
    }
    if (arg0->unk91 == 0) a = 1; else a = 0;
    if (arg0->unk91 == 0) b = 0; else b = 3;
    if (arg0->unk91 == 1) c = 1; else c = 0;
    if (arg0->unk91 == 1) d = 0; else d = 3;
    func_8001B204(2, 0xC0, 0xB5, D_8038BCC0, a, b, c, d);
    if (*(u16 *)(D_801BBC8E + 2) & 0x8000) {
        if (arg0->unk91 == 0) {
            arg0->unk90 = 0;
            func_80006088(arg1[arg0->unk98 + 2]);
            func_8001B204(6, 0, 0, D_8038BCD4);
            func_8001B204(7, 0, 0, D_8038BCD8);
            func_8001B204(1, 0x42, 0x57, D_8038BCDC, 4, 0);
            func_801460C8(arg0, &sp67, 0x3C, 0x78, 0xA8, 0x28, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
            func_80002364(0x0C000C00, 0xA, 3, 0);
            func_800058DC((s32)arg0, func_8037FAF4);
            return;
        }
        if (arg0->unk91 != 0) {
            func_800058DC((s32)arg0, func_8037FEE4);
        }
    }
}

struct func_8037FAF4_Pair { s32 a; s32 b; };
extern struct func_8037FAF4_Pair D_80389794;
extern u8 D_801BC03C[];
extern u8 D_8038BD28[], D_8038BD3C[], D_8038BD44[], D_8038BD4C[], D_8038BD54[], D_8038BD60[], D_8038BD6C[];
extern s32 func_8013D16C(s32, void *);
struct func_8037FAF4_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
};
extern s32 D_8001B204();
extern void D_8037F448();
#define PAD (*(u16 *)&D_801BBC8E[0xA])
void func_8037FAF4(struct func_8037FAF4_Struct *arg0, s32 arg1) {
    struct func_8037FAF4_Pair sp48;
    extern void func_8001B204();
    extern void func_800058DC();

    sp48 = D_80389794;
    if (PAD & 0x800) {
        func_80020718(0x300);
        arg0->unk90 = arg0->unk90 - 1;
    } else if (PAD & 0x400) {
        func_80020718(0x300);
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (PAD & 0x200) {
        func_80020718(0x300);
        arg0->unk91 = arg0->unk91 ^ 1;
    } else if (PAD & 0x100) {
        func_80020718(0x300);
        arg0->unk91 = arg0->unk91 ^ 1;
    }
    D_8001B204(2, 0xC0, 0xB5, D_8038BD28, arg0->unk91 == 0 ? 1 : 0, arg0->unk91 == 0 ? 0 : 3, arg0->unk91 == 1 ? 1 : 0, arg0->unk91 == 1 ? 0 : 3);
    if (arg0->unk90 < 0) {
        arg0->unk90 = 2;
    } else if (arg0->unk90 >= 3) {
        arg0->unk90 = 0;
    }
    func_8001B204(3, 0x42, 0x79, D_8038BD3C, 1, (arg0->unk90 == 0 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(0, D_801BC03C));
    func_8001B204(4, 0x42, 0x85, D_8038BD44, 1, (arg0->unk90 == 1 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(1, D_801BC03C));
    func_8001B204(5, 0x42, 0x91, D_8038BD4C, 1, (arg0->unk90 == 2 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(2, D_801BC03C));
    func_8001B204(6, 0x7A, 0x79, D_8038BD54, 1, (arg0->unk90 == 0 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    func_8001B204(7, 0x7A, 0x85, D_8038BD60, 1, (arg0->unk90 == 1 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    func_8001B204(8, 0x7A, 0x91, D_8038BD6C, 1, (arg0->unk90 == 2 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    if (*(u16 *)&D_801BBC8E[2] & 0x8000) {
        func_80020718(0x104);
        if (arg0->unk91 != 0) {
            func_800058DC(arg0, func_8037FEE4);
        } else {
            D_8037F448((u8)arg0->unk90, D_801BC03C);
            func_800058DC(arg0, func_8037FEE4);
        }
    }
}


struct func_8037FEE4_Struct {
    u8 pad[0x94];
    s32 unk94;
};

extern void func_800023A8(s32);
extern void func_80005700(void *);
extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_8038BD78[];
extern u8 D_8038BD7C[];
extern u8 D_8038BD80[];
extern u8 D_8038BD84[];
extern u8 D_8038BD88[];
extern u8 D_8038BD8C[];
extern u8 D_8038BD90[];
extern u8 D_8038BD94[];
extern void func_8021C934();

void func_8037FEE4(struct func_8037FEE4_Struct *arg0, s32 arg1) {
    func_800023A8(0);
    func_8001B204(1, 0, 0, D_8038BD78);
    func_8001B204(2, 0, 0, D_8038BD7C);
    func_8001B204(3, 0, 0, D_8038BD80);
    func_8001B204(4, 0, 0, D_8038BD84);
    func_8001B204(5, 0, 0, D_8038BD88);
    func_8001B204(6, 0, 0, D_8038BD8C);
    func_8001B204(7, 0, 0, D_8038BD90);
    func_8001B204(8, 0, 0, D_8038BD94);
    func_800058DC(arg0->unk94, func_8021C934);
    func_80005700(arg0);
}

