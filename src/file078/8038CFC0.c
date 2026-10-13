#include "common.h"

extern f32 D_801BC3D8[];
extern s16 func_80228C20(void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 func_8038D5BC[];
extern void func_800058DC();
extern void func_802294BC(void *);
extern void func_80229500();
extern void func_80229CE0(void *, void *, s32);
extern void func_8038D000();
extern void func_8038D470(void *, void *, void *);



void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file078/8038CFC0/func_8038D000.s")


struct func_8038D470_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D470_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D470_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};


void func_8038D470(void *arg0, void *arg1, void *arg2) {
    struct func_8038D470_Struct0 *a0 = arg0;
    struct func_8038D470_Struct1 *a1 = arg1;
    struct func_8038D470_Struct2 *a2 = arg2;
    u8 temp_v0;

    if (((a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if ((f64) *(f32 *) ((u8 *) D_801BC3D8 + 0x3A8) > 20.0) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 0;
    } else {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
        temp_v0 = a0->unk92;
        a0->unk92 = temp_v0 + 1;
        a0->unk93 = temp_v0;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


struct func_8038D534_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


void func_8038D534(struct func_8038D534_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D470(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D5BC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file078/8038CFC0/func_8038D5BC.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D7D4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

