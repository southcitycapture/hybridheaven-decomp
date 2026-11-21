#include "common.h"
struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};
extern struct func_800243F0_Struct *D_800CBDA4;


struct func_80025834_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x28 - 7];
    s32 unk28;
    u8 pad2C[0x7D - 0x2C];
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
};

#define S ((struct func_80025834_Struct *)D_800CBDA4)

/* GGA: sndCmdGlideTick */
void func_80025834() {
    s32 diff;
    u32 step;

    S->unk6 |= 2;
    diff = S->unk80 - S->unk28;
    step = diff;
    if (diff < 0) {
        step = -diff;
    }
    step = (s32)(S->unk8A * step) >> 8;
    if (step == 0) {
        step = 1;
    }
    if (diff < 0) {
        S->unk28 -= step;
        if (S->unk28 < S->unk80) {
            S->unk28 = S->unk80;
        }
    } else {
        S->unk28 += step;
        if (S->unk80 < S->unk28) {
            S->unk28 = S->unk80;
        }
    }
    if (S->unk28 == S->unk80) {
        S->unk7D = 0;
    }
}
