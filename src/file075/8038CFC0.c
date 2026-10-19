#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file075/8038CFC0/func_8038CFF4.s")


struct func_8038D680_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D680_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D680_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

extern s32 func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D680(struct func_8038D680_StructA *arg0, struct func_8038D680_StructB *arg1, struct func_8038D680_StructC *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) *(s32 *) ((u8 *) arg1 + 0x38) >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, 0);
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D750_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D7D8[];

void func_8038D750(struct func_8038D750_Struct *arg0, void *arg1) {
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
    func_8038D680(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file075/8038CFC0/func_8038D7D8.s")


typedef struct func_8038D9E4_Struct { u8 pad[0xA5]; u8 unkA5; } func_8038D9E4_Struct;

void func_8038D9E4(func_8038D9E4_Struct *arg0, s32 arg1) {
    arg0->unkA5 = 0;
}

