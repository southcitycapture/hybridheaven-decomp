#include "context.h"

void func_801EFE0C(f32 arg0) {
    f64 t = (f64) arg0;
    if (t > 1.0) {
        if (t > 3.0) {
            D_801BBCD0->unk2C->unk12 -= 0x50;
        } else if (t > 2.0) {
            D_801BBCD0->unk2C->unk12 -= 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 -= 0x28;
        }
    } else if (t < -1.0) {
        if (t < -3.0) {
            D_801BBCD0->unk2C->unk12 += 0x50;
        } else if (t < -2.0) {
            D_801BBCD0->unk2C->unk12 += 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 += 0x28;
        }
    }
    D_801BBCD0->unk2C->unk12 &= 0x1FFF;
}
