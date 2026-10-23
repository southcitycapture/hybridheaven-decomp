#include "context.h"

typedef struct func_8038D9A8_StructArg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 pad92[8];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D9A8_StructArg;

typedef struct func_8038D9A8_StructA1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 unk38_31 : 1;
    u32 unk38_29 : 2;
    u32 unk38_28 : 1;
    u32 unk38_rest : 28;
} func_8038D9A8_StructA1;

typedef struct func_8038D9A8_StructA3 {
    u8 pad0[0x30];
    u32 unk30_0 : 3;
    u32 unk30_3 : 4;
    u32 unk30_7 : 4;
    u32 unk30_11 : 2;
    u32 unk30_rest : 19;
} func_8038D9A8_StructA3;

typedef struct func_8038D9A8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D9A8_StructG;

extern func_8038D9A8_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *);
extern void func_8022B3E0();
extern u8 D_8038D9A8[];

void func_8038D9A8(func_8038D9A8_StructArg *arg0, s32 arg1) {
    func_8038D9A8_StructA1 *var_a1;
    func_8038D9A8_StructA3 *var_a3;

    var_a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D9A8_StructA1 *)&D_801BC03C : (func_8038D9A8_StructA1 *)&D_801BC3D8;
    var_a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D9A8_StructA3 *)&D_801BC3D8 : (func_8038D9A8_StructA3 *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D9A8;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1) != 0) {
        arg0->unk91 = 0;
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a3->unk30_11 != 0 || var_a3->unk30_3 == 2) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a3->unk30_11 == 0 && var_a3->unk30_3 != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
            return;
        }
    }
    if (var_a1->unk38_31 && !var_a1->unk38_28 && !(arg0->unk9A & 2)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a1->unk38_31 && var_a1->unk38_28 && !(arg0->unk9A & 4)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (!var_a1->unk38_31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a1->unk2 < var_a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
    }
}
