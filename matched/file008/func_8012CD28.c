#include "context.h"

typedef struct func_8012CD28_Struct {
    u8 pad00[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[0x5];
    f32 unk44;
} func_8012CD28_Struct;

void func_8012CD28(void *p) {
    func_8012CD28_Struct *arg0 = p;

    if (arg0->unk2C & 0x40) {
        arg0->unk44 = (f32) ((f64) arg0->unk44 - (f64) (f32) (u32) arg0->unk3E / 25.0);
        if ((f64) arg0->unk44 < -10.0) {
            arg0->unk44 = -10.0f;
            return;
        }
        if ((arg0->unk30 & 4) && ((f64) arg0->unk44 < 0.0) && ((f64) arg0->unk44 > -0.5)) {
            arg0->unk44 = -0.5f;
        }
    }
}
