#include "context.h"

typedef struct func_8012CB4C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[5];
    f32 unk44;
} func_8012CB4C_Struct;

extern s32 func_801F1114();
extern u8 D_801BBBF5;
extern u16 D_801BCAE0;

void func_8012CB4C(func_8012CB4C_Struct *arg0) {
    if (arg0->unk2C & 0x40) {
        arg0->unk44 = arg0->unk44 - (f32)arg0->unk3E / 25.0;
        if (arg0->unk44 < -10.0) {
            arg0->unk44 = -10.0f;
        } else if (arg0->unk30 & 4) {
            if (func_8012CAB8(D_801BBBF5) != 0) {
                if ((D_801BCAE0 & 0x80) || (func_801F1114() != 0x11)) {
                    if ((arg0->unk44 < 0.0) && (arg0->unk44 > -0.5)) {
                        arg0->unk44 = -0.5f;
                    }
                } else {
                    if ((arg0->unk44 < 0.0) && (arg0->unk44 > -1.0)) {
                        arg0->unk44 = -1.0f;
                    }
                }
            } else {
                if ((arg0->unk44 < 0.0) && (arg0->unk44 > -0.5)) {
                    arg0->unk44 = -0.5f;
                }
            }
        }
    }
}
