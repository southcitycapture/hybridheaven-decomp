#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038CFF4.s")


struct func_8038D7D8_StructA {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D7D8_StructB {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D7D8_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x396 - 0x34];
    u8 unk396;
};

s32 func_8022B640(s32);
void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
extern u8 D_801BC3D8[];

void func_8038D7D8(void *arg0, void *arg1, void *arg2) {
    struct func_8038D7D8_StructA *a0 = arg0;
    struct func_8038D7D8_StructB *a1 = arg1;
    struct func_8038D7D8_StructC *a2 = arg2;

    if (((u32) a1->unk38 >> 0x1F) != 0) {
        a1->unk2D8 = 2;
        a0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (a2->unk396 == 0) && (a0->unk98 != 0)) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 6;
    } else if (((u32) (a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if (func_8022B640(2) == 0) {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        a1->unk2D8 = 1;
        a1->unk2D9 = 0x23;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038D8FC.s")


struct func_8038D98C_Obj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x98 - 0x92];
    s16 unk98;
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D98C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D98C_P {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 f31 : 1;
    u32 fb : 2;
    u32 f28 : 1;
    u32 frest : 28;
    u8 pad1[0x396 - 0x3C];
    u8 unk396;
};
extern struct func_8038D98C_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 func_8022B3E0[];
extern u8 D_8038D98C[];
extern s32 func_8022AB58();

void func_8038D98C(struct func_8038D98C_Obj *arg0, struct func_8038D98C_P *arg1) {
    struct func_8038D98C_P *a1;
    struct func_8038D98C_P *a2;
    u32 t;
    u32 w;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        a1 = (struct func_8038D98C_P *)D_801BC03C;
    } else {
        a1 = (struct func_8038D98C_P *)D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        a2 = (struct func_8038D98C_P *)D_801BC3D8;
    } else {
        a2 = (struct func_8038D98C_P *)D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D7D8(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)&a1->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)D_8038D98C;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        if (arg0->unk9A == 0 && a2->unk396 == 0 && arg0->unk98 != 0) {
            arg0->unk9A = arg0->unk9A | 0x100;
            func_8038D7D8(arg0, a1, a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A = arg0->unk9A ^ 0x100;
            func_8038D7D8(arg0, a1, a2);
            return;
        }
    }
    t = (a2->unk30 << 11) >> 30;
    if (t != 0 && !(arg0->unk9A & 8)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (t == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    w = a1->f31;
    if (w != 0 && !a1->f28 && !(arg0->unk9A & 2)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (w != 0 && a1->f28 && !(arg0->unk9A & 4)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (w == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D7D8(arg0, a1, a2);
    }
}

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DC0C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

