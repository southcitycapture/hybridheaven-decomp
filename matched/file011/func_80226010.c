#include "context.h"

s32 func_80226010(struct func_80225F58_A *arg0, f32 arg1) {
    s32 sp2C;
    u8 sp2B;

    sp2C = arg0->unk24->unk2C;
    sp2B = arg0->unk4C;
    arg0->unk4C = func_80225CB4(arg0, arg1);
    arg0->unk4E = func_80225BF0((func_80225BF0_Struct *)arg0);
    if (func_802257F4(sp2C, (s16)sp2B, arg0->unk4C) != 0) {
        return 1;
    }
    if (func_802257F4(sp2C, (s16)-sp2B, (s16)-arg0->unk4C) != 0) {
        return 2;
    }
    return 0;
}
