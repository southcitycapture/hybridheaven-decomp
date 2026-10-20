#include "context.h"
extern f32 D_801E7710;
extern f32 D_801E7714;

s32 func_801E4484(s32 arg0, s32 arg1) {
    func_801E42EC_StructC *c;
    f32 t;
    if (func_801C1088(4, 0, 0x69) != 0) {
        func_801C10D8(4, 0);
        return 0x11;
    }
    t = (f32)(u32)func_801C1134(4, 0) / 105.0f;
    ROOT->unk8->unk24->unk2C->unkC = D_801E7710 * t + 97.0f;
    if (func_801CE2D0(0x01B8001B, 0x18) || func_801CE2D0(0x01B8001B, 0x3C)) {
        c = ROOT->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x67D, D_801E7714, 1.0f);
    }
    return 0x10;
}
