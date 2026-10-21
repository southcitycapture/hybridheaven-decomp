#include "context.h"

struct func_8038DD10_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad3[0x9A - 0x92];
    s16 unk9A;
    u8 pad4[0xA0 - 0x9C];
    u8 unkA0;
    u8 pad5[7];
    u8 unkA8;
    u8 pad6[7];
    void *unkB0;
};
struct func_8038DD10_Struct2 {
    s16 unk0;
    s16 unk2;
    u8 pad[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 b31 : 1;
    u32 b30 : 2;
    u32 b28 : 1;
    u32 b0 : 28;
};
struct func_8038DD10_Struct3 {
    u8 pad[0x30];
    u32 p29 : 3;
    u32 g : 4;
    u32 p21 : 4;
    u32 f : 2;
    u32 p0 : 19;
};
struct func_8038DD10_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 pad2[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038DD10_Glob D_801BBBF0;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();

#define CALL() func_8038DA10((void *)arg0, (void *)a3, (void *)a2)

void func_8038DD10(struct func_8038DD10_Struct *arg0, s32 arg1) {
    struct func_8038DD10_Struct2 *a3;
    struct func_8038DD10_Struct3 *a2;
    s32 v1;
    u32 w;
    u32 f;
    u32 g;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (void *)D_801BC3D8 : (void *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038DD10;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a3->unk2 < (a3->unk0 / 5)) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58(arg0, a3) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->f || (a2->g == 2)) {
        CALL();
        return;
    }
    if (!a2->f && (a2->g != 2)) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if ((D_801BBBF0.unkB90 > 25.0f) && !(arg0->unk9A & 0x100)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            CALL();
            return;
        }
    }
    if (a3->b31 && !a3->b28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->b31 && a3->b28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a3->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL();
    }
}
