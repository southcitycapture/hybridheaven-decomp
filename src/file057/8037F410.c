#include "common.h"


extern void *func_80005670(void *, void *);
extern u8 D_801BBCCC[];
extern u8 D_80389780[];

void func_8037F410(s32 arg0) {
    u8 *p;

    p = func_80005670(*(void **)D_801BBCCC, D_80389780);
    *(s32 *)(p + 0x94) = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037F410/func_8037F448.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037F410/func_8037F5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037F410/func_8037F8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037F410/func_8037FAF4.s")


struct func_8037FEE4_Struct {
    u8 pad[0x94];
    s32 unk94;
};

extern void func_800023A8(s32);
extern void func_80005700(void *);
extern void func_800058DC(s32, void *);
extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_8038BD78[];
extern u8 D_8038BD7C[];
extern u8 D_8038BD80[];
extern u8 D_8038BD84[];
extern u8 D_8038BD88[];
extern u8 D_8038BD8C[];
extern u8 D_8038BD90[];
extern u8 D_8038BD94[];
extern void func_8021C934(void);

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

