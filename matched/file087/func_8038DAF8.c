#include "context.h"

typedef struct func_8038DAF8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038DAF8_Struct;

typedef struct func_8038DAF8_S1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 b38_31:1;
    u32 pad38:2;
    u32 b38_28:1;
    u32 pad38b:28;
    u8 pad3C[0x6A];
    u8 unkA6;
} func_8038DAF8_S1;

typedef struct func_8038DAF8_S2 {
    u8 pad0[0x30];
    u32 pad30a:3;
    u32 f30_4:4;
    u32 pad30b:4;
    u32 f30_2:2;
    u32 pad30c:19;
} func_8038DAF8_S2;

extern s32 func_8022AB58();
extern u8 D_801BBBF0[];
typedef struct func_8038DAF8_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038DAF8_G;
#define G (*(func_8038DAF8_G *)D_801BBBF0)
extern u8 func_8022B3E0[];
extern u8 D_8038DAF8[];

#define CALL() func_8038D8A0((struct func_8038D8A0_S0 *)arg0, (struct func_8038D8A0_S1 *)a1, (struct func_8038D8A0_S2 *)a2)

void func_8038DAF8(func_8038DAF8_Struct *arg0, s32 arg1) {
    func_8038DAF8_S1 *a1;
    func_8038DAF8_S2 *a2;
    s16 v;
    s32 d;

    if (arg0->unkC == (d = G.unkDC)) {
        a1 = (func_8038DAF8_S1 *)D_801BC03C;
    } else {
        a1 = (func_8038DAF8_S1 *)D_801BC3D8;
    }
    if (d == arg0->unkC) {
        a2 = (func_8038DAF8_S2 *)D_801BC3D8;
    } else {
        a2 = (func_8038DAF8_S2 *)D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0[0x1031] == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkB0 = (void *)D_8038DAF8;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 25.0f && arg0->unk98 == 0 && arg0->unk9A == 0 && !(a1->unkA6 & 0x10)) {
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) <= 20.0f) {
        v = arg0->unk9A;
        if (v & 0x100) {
            arg0->unk9A = v ^ 0x100;
            CALL();
            return;
        }
    }
    if (a2->f30_2 != 0 || a2->f30_4 == 2) {
        CALL();
        return;
    }
    if (a2->f30_2 == 0) {
        v = arg0->unk9A;
        if (v & 8) {
            arg0->unk9A = v ^ 8;
            arg0->unk92 = arg0->unk93;
            CALL();
            return;
        }
    }
    if (a1->b38_31 != 0 && !a1->b38_28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a1->b38_31 != 0 && a1->b38_28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a1->b38_31 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
