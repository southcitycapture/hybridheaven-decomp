#include "context.h"
extern f64 D_8023F958;
extern f64 D_8023F960;
extern f64 D_8023F968;
struct func_8022BECC_Struct {
    u8 pad0[0x50];
    s16 unk50;
    u8 pad52[0x5A - 0x52];
    u16 unk5A;
    u8 pad5C[0x9E - 0x5C];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
};

void func_8022BECC(struct func_8022BECC_Struct *arg0) {
    f64 a;
    f64 b;
    f64 c;
    if (arg0->unkA6 & 8) {
        a = D_8023F958;
    } else {
        a = 0.0;
    }
    if (arg0->unkA6 & 4) {
        b = D_8023F960;
    } else {
        b = 0.0;
    }
    if (arg0->unk9E != 0) {
        c = D_8023F968;
    } else {
        c = 0.0;
    }
    arg0->unk50 = (u32)(((((1.0 + b) - a) - c) * (f64)(f32)(u32)arg0->unk5A) + 0.5);
}
