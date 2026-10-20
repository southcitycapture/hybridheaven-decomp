#include "context.h"

struct func_8038DA10_A {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad1[4];
    s16 unk98;
    s16 unk9A;
    u8 pad2[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
};
struct func_8038DA10_B {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x62];
    u16 unk9E;
    u16 unkA0;
    u8 pad1[0x236];
    u8 unk2D8;
    u8 unk2D9;
};
extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();

s32 func_8038DA10(struct func_8038DA10_A *arg0, struct func_8038DA10_B *arg1, u32 *arg2) {
    s32 t;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 & 7)) {
        arg1->unk2D8 = 0xB;
        if (arg0->unkA0 == 7) {
            arg1->unk2D9 = 4;
        } else {
            arg1->unk2D9 = 1;
        }
        arg0->unk9A |= 0x20;
    } else {
        if (arg1->unk9E != 0 && arg1->unkA0 != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xF;
        } else if (arg1->unk9E != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xE;
        } else if (arg1->unkA0 != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xD;
        } else if (25.0f < *(f32 *)(D_801BC3D8 + 0x3A8)) {
            arg1->unk2D8 = 0xB;
            t = arg0->unk98;
            if (!(t & 1)) {
                arg1->unk2D9 = 0x1E;
                arg0->unk98 |= 1;
            } else if (!(t & 2)) {
                arg1->unk2D9 = 0x1F;
                arg0->unk98 |= 2;
            } else if (!(t & 4)) {
                arg1->unk2D9 = 0x20;
                arg0->unk98 |= 4;
            } else {
                arg1->unk2D8 = 0xC;
                arg1->unk2D9 = func_8022B640(2) * 2 + 0x15;
                arg0->unk93 = arg0->unk92 = 3;
            }
            arg0->unk9A |= 0x100;
        } else if (((arg2[0x30 / 4] << 11) >> 30) != 0) {
            func_80229404(arg1);
            arg0->unk9A |= 8;
        } else if ((arg1->unk38 >> 31) != 0) {
            arg1->unk2D8 = 2;
            arg0->unk9A |= 2;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        } else if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
