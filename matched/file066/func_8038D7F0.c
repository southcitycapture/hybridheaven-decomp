#include "context.h"

typedef struct func_8038D7F0_Struct0 {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_Struct0;

typedef struct func_8038D7F0_Struct1 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D7F0_Struct1;

typedef struct func_8038D7F0_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 b38_0 : 1;
    u32 b38_1 : 2;
    u32 b38_3 : 1;
    u32 b38_4 : 28;
}func_8038D7F0_Struct2;

extern func_8038D7F0_Struct0 D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

void func_8038D7F0(func_8038D7F0_Struct1 *arg0, s32 arg1) {
    func_8038D7F0_Struct2 *a3;
    func_8038D7F0_Struct2 *a2;
    s32 v0;
    u32 v1;
    u32 a1;
    s32 t;

    a3 = (func_8038D7F0_Struct2 *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D7F0_Struct2 *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D664(arg0, a3, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((((u16 *)a3)[0x18] & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D7F0;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3) != 0) {
        arg0->unk91 = 0;
        func_8038D664(arg0, a3, a2);
        return;
    }
    v0 = a2->unk30;
    v1 = (u32)(v0 << 11) >> 30;
    if (v1 != 0 || ((u32)(v0 << 3) >> 28) == 2) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 == 0 && ((u32)(v0 << 3) >> 28) != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        if (arg0->unk9A == 0) {
            arg0->unk9A |= 0x100;
            func_8038D664(arg0, a3, a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 < 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            func_8038D664(arg0, a3, a2);
            return;
        }
    }
    v1 = a3->b38_0;
    if (v1 != 0 && !a3->b38_3 && !(arg0->unk9A & 2)) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 != 0 && a3->b38_3 && !(arg0->unk9A & 4)) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D664(arg0, a3, a2);
    }
}
