#include "context.h"

struct func_8038D8D8_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D8D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D8D8_StructB {
    u8 pad0[0x30];
    u32 unk30;
    u32 pad34;
    u32 f0:1;
    u32 f1:1;
    u32 f2:1;
    u32 f3:1;
    u32 rest:28;
    u8 pad3c[0xA6 - 0x3C];
    u8 unkA6;
};
struct func_8038D8D8_StructC {
    u32 pad0:3;
    u32 f3:4;
    u32 pad1:4;
    u32 f11:2;
    u32 rest:19;
};
extern struct func_8038D8D8_StructG D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D8D8[];

#define B struct func_8038D8D8_StructB
#define CALL() func_8038D734((void *)arg0, (void *)((s32)a3 * 1), (void *)a2)

void func_8038D8D8(struct func_8038D8D8_StructA *arg0, s32 arg1) {
    B *a3;
    B *a2;
    u32 v;
    u32 hi;
    u32 lo;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (B *)&D_801BC03C : (B *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (B *)D_801BC3D8 : (B *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a3 + 0x30) & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D8D8;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f && !(arg0->unk9A & 0x100) && !(a3->unkA6 & 1)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        CALL();
        return;
    }
    v = a2->unk30;
    hi = (v << 11) >> 30;
    if (hi != 0 || (v << 3) >> 28 == 2) {
        CALL();
        return;
    }
    if (hi == 0 && (v << 3) >> 28 != 2 && (arg0->unk9A & 8)) {
        {
            arg0->unk92 = arg0->unk93;
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->f0 && !a3->f3 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->f0 && a3->f3 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a3->f0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
