#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038D5D0[];
extern s32 func_800058DC(s32, void *);


struct func_8038D5D0_StructObj {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D5D0_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D5D0_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038D5D0_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};

extern struct func_8038D5D0_StructGlobal D_801BBBF0;
#define G D_801BBBF0
extern s32 func_8022AB58(void *, void *, void *);
extern void D_8038D438(void *, void *, void *, void *);
extern u8 func_8022B3E0[];

void func_8038D5D0(struct func_8038D5D0_StructObj *arg0, void *arg1) {
    struct func_8038D5D0_StructA *var_a1;
    struct func_8038D5D0_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (G.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC03C;
    } else {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC3D8;
    }
    if (G.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (G.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (G.unk1031 == 7) {
        arg0->unkB0 = D_8038D5D0;
        func_800058DC((s32) arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if (G.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 == 0) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    if (G.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
        D_8038D438(arg0, var_a1, var_a2, &G);
    }
}
