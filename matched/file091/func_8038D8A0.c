#include "context.h"

typedef struct func_8038D8A0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x4];
    u8 unk14[0x7D];
    u8 unk91;
    u8 pad92[0x6];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[0x7];
    void *unkB0;
} func_8038D8A0_Struct;
typedef struct func_8038D8A0_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D8A0_Glob;
extern func_8038D8A0_Glob D_801BBBF0;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();
extern void D_8038D744(void *, void *, void *, void *);

void func_8038D8A0(func_8038D8A0_Struct *arg0, s32 arg1) {
    u8 *a1;
    u8 *a2;
    u32 v;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C;
    if (arg0->unkA8 == 2) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)(a1 + 0x30) & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)func_8038D8A0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2, &D_801BBBF0) != 0) {
        arg0->unk91 = 0;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    v = (*(u32 *)(a2 + 0x30) << 11) >> 30;
    if (v != 0 && !(arg0->unk9A & 8)) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (v == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
            return;
        }
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
        }
    }
}
