#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021D8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021E414.s")


struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 func_80224F5C();
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_8013A28C(s32 arg0, struct func_8021E52C_Struct arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8021E59C();

void func_8021E52C(s32 arg0, s32 arg1) {
    struct func_8021E52C_Struct sp1C;

    if (func_80224F5C() == 0) {
        func_802256E4(&sp1C, arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_800058DC(arg0, func_8021E59C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021E59C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021EB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021ECD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021F184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021F7AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021F9C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FB0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FD00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FE14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FF78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022038C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802208B0.s")


struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern struct func_80220F60_Struct D_801BBBF0;
extern void func_80359560(s32);
extern void func_80220FC0();

void func_80220F60(s32 arg0) {
    s32 sp1C;

    if (arg0 != D_801BBBF0.unkDC) {
        sp1C = D_801BBBF0.unkDC;
    } else {
        sp1C = D_801BBBF0.unkEC;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80359560(arg0);
        func_800058DC(sp1C, func_80220FC0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80220FC0.s")


extern void func_8035C048();
extern u8 D_801BCC21;

void func_80221040(void) {
    if (D_801BCC21 != 0xF) {
        func_8035C048();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221720.s")

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

struct func_802218D4_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};

struct func_802218D4_Obj {
    u8 pad0[0x36];
    u16 unk36;
};

extern s32 D_801BBCCC;
extern void func_802219F8();
extern void func_80221E9C();
extern void func_80222708();
extern s32 func_803628B8();

void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1) {
    extern s32 func_80224F5C();
    struct func_802218D4_Struct *v1;
    u32 a0;
    u32 t;

    if ((s32) arg0 == D_801BBCCC) {
        v1 = (struct func_802218D4_Struct *) &D_801BC03C;
    } else {
        v1 = (struct func_802218D4_Struct *) &D_801BC3D8;
    }
    v1->unk392 = 0;
    if (arg0->unk36 == 0x11D) {
        a0 = 0;
    } else {
        a0 = func_80224F5C(arg0, arg1) & 0xFFFF;
    }
    if (a0 == 0) {
        t = v1->unk2D8;
        if (t == 0xE) {
            func_800058DC((s32) arg0, func_802219F8);
            return;
        }
        if (t == 0xF) {
            func_803628B8((s32) arg0, arg1);
            return;
        }
        if (t == 0xD) {
            func_800058DC((s32) arg0, func_80221E9C);
            return;
        }
        if (((v1->u30.w << 9) >> 30) == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_800058DC((s32) arg0, func_80222708);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802219F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221BA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802227A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222B08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222E84.s")


void func_80222FCC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022310C.s")


extern s32 func_801DB6B8(s32, s32, s32);
extern void func_802237B0(s32, s32);
extern void func_80223260();

void func_8022321C(s32 arg0, s32 arg1) {
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_802237B0(arg0, 0);
        func_800058DC(arg0, func_80223260);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80223260.s")


void func_802233A4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802233B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802234F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022359C.s")

