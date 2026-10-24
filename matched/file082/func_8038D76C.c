#define func_8038D76C func_8038D76C_ctx
#include "context.h"
#undef func_8038D76C

struct func_8038D76C_StructObj {
    u8 pad0[0x0C];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x98 - 0x92];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D76C_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D76C_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D76C[];

void func_8038D76C(struct func_8038D76C_StructObj *arg0, void *arg1) {
    struct func_8038D76C_StructA *var_a1;
    struct func_8038D76C_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D76C_StructA *) D_801BC03C;
    } else {
        var_a1 = (struct func_8038D76C_StructA *) D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038D76C_StructB *) D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D76C_StructB *) D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D5F8(arg0, var_a1, var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D76C;
        func_800058DC((s32) arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D5F8(arg0, var_a1, var_a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if ((temp_v0 == 0) && (arg0->unk98 != 0)) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            func_8038D5F8(arg0, var_a1, var_a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            func_8038D5F8(arg0, var_a1, var_a2);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D5F8(arg0, var_a1, var_a2);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
        func_8038D5F8(arg0, var_a1, var_a2);
    }
}
