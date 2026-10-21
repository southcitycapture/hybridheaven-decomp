#include "context.h"

struct func_8037C554_Struct1 {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x9E - 0x34];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[4];
    u8 unkA6;
    u8 padA7[0x2B8 - 0xA7];
    s16 unk2B8[6];
};
struct func_8037C554_StructA {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x84];
    struct func_8037C554_Struct1 *unk94;
    u8 pad98;
    u8 unk99;
    u8 pad9A[0xAB - 0x9A];
    u8 unkAB;
};
extern void func_8037BFB8(void *, s16, s16, u8, s32, u8 *);
extern u8 func_8037C778[];

void func_8037C554(struct func_8037C554_StructA *arg0, s32 arg1) {
    struct func_8037C554_Struct1 *s2;
    u8 sp5B;
    u8 var_a0;
    u8 *temp_v1;

    s2 = arg0->unk94;
    sp5B = 0;
    temp_v1 = (u8 *)s2 - 0x44C;
    if ((s2->unk2B8[0] < 0) || (s2->unk2B8[1] < 0) || (s2->unk2B8[2] < 0) || (s2->unk2B8[3] < 0) || (s2->unk2B8[4] < 0) || (s2->unk2B8[5] < 0) || (s2->unk9E != 0) || (s2->unkA0 != 0) || (s2->unkA6 & 0x20) || (((s2->unk30 << 0xB) >> 0x1E) != 0)) {
        u16 var_v0;
        u16 var_v1;
#define var_s0 arg1

        var_s0 = 0;
        if (temp_v1 == D_801BBBF0) {
            var_a0 = 1;
        } else {
            var_a0 = 2;
        }
        arg0->unkC[0x9B] |= var_a0;
        if (temp_v1 == D_801BBBF0) {
            var_v0 = 0xDC;
            var_v1 = 0x16;
        } else {
            var_v1 = 0xB4;
            if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) || (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
                var_v0 = 0x50;
            } else {
                var_v0 = 0x10E;
                var_v1 = 0xBE;
            }
        }
        do {
            if (s2->unk9E != 0) {
                arg0->unk99 = 2;
            } else if ((s2->unkA0 != 0) || (s2->unkA6 & 0x20)) {
                arg0->unk99 = 3;
            } else if (s2->unk2B8[var_s0] < 0) {
                arg0->unk99 = 1;
            } else {
                arg0->unk99 = 0;
            }
            func_8037BFB8(arg0, var_v0, var_v1, var_s0, arg0->unk99, &sp5B);
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < 6);
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037C778);
    }
}
