#include "context.h"

s32 func_801E4FB8(s32 arg0, s32 arg1) {
    f32 fraction;
    if (func_801C1088(3, 7, 5) != 0) {
        func_801C10D8(3, 7);
        D_8038D8D0->unk1C->unk22 = 0;
        return 7;
    }
    fraction = (f32) (u32) func_801C1134(3, 7) / 5.0f;
    D_8038D8D0->unk1C->unk30->unk4B = (u32) ((-255.0f * fraction) + 255.0f);
    return 6;
}
