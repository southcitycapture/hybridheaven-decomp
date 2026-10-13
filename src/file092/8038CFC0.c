#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038CFF8.s")


struct func_8038D630_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D630_Struct1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 unk30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D630_Struct2 {
    u8 pad0[0x9E];
    u16 unk9E;
    u8 pad9E[0x396 - 0xA0];
    u8 unk396;
};

s32 func_8022B640(s32, void *);                     /* extern */

void func_8038D630(struct func_8038D630_Struct0 *arg0, struct func_8038D630_Struct1 *arg1, struct func_8038D630_Struct2 *arg2) {
    s32 temp_v0;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0) && (((arg1->unk30 << 0x1B) >> 0x1E) == 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 4;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else {
        arg1->unk2D8 = 0x13;
        temp_v0 = func_8022B640(5, arg1);
        if (temp_v0 == 0) {
            goto case0;
        }
        if (temp_v0 == 1) {
            goto case1;
        }
        arg1->unk2D9 = 0;
        goto done;
case0:
        if (arg2->unk396 == 0) {
            arg1->unk2D9 = 1;
        } else {
            arg1->unk2D9 = 0;
        }
        goto done;
case1:
        if (arg2->unk9E == 0) {
            arg1->unk2D9 = 2;
        } else {
            arg1->unk2D9 = 0;
        }
done:;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_8038D740_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0xA0 - 0x10];
    u8 unkA0;
} func_8038D740_Struct;

extern s32 D_801BBCCC;
extern void func_8038D7D0();
extern void func_80229500(void *a, void *b, void *c);
extern void func_800058DC();

void func_8038D740(func_8038D740_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 3;
    func_8038D630((struct func_8038D630_Struct0 *)arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D0);
}


struct func_8038D7D0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 padA1[0xA8 - 0xA1];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void (*unkB0)();
};

struct func_8038D7D0_StructA {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u16 unk30;
};

struct func_8038D7D0_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};

extern struct func_8038D7D0_StructG D_801BBBF0;
extern void func_8022B3E0();

void func_8038D7D0(struct func_8038D7D0_Struct *arg0, s32 arg1) {
    struct func_8038D7D0_StructA *var_a1;
    struct func_8038D7D0_StructA *var_a2;
    s32 temp_v1;

    var_a1 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8;
    var_a2 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D630(arg0, var_a1, var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D7D0;
        func_800058DC(arg0, func_8022B3E0, var_a2);
        return;
    }
    if ((var_a1->unk2 < (var_a1->unk0 / 5)) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20) && ((((*(u32 *)&var_a1->unk30) << 0x1B) >> 0x1E) == 0)) {
        func_8038D630(arg0, var_a1, var_a2);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D630(arg0, var_a1, var_a2);
    }
}

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D92C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

