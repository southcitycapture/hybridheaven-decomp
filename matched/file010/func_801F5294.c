#include "context.h"

typedef struct func_801F5294_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[0x5];
    f32 unk44;
} func_801F5294_Struct;

void func_801F5294(func_801F5294_Struct *arg0) {
    arg0->unk44 = (f32) ((f64) arg0->unk44 - (f64) (f32) (u32) arg0->unk3E / 25.0);
    if ((f64) arg0->unk44 < -10.0) {
        arg0->unk44 = -10.0f;
        return;
    }
    if ((arg0->unk30 & 4) && ((f64) arg0->unk44 < 0.0) && ((f64) arg0->unk44 > -0.5)) {
        arg0->unk44 = -0.5f;
    }
}
