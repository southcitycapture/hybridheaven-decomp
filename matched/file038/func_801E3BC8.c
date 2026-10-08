#include "context.h"

extern f64 D_801E7250;
extern f32 D_801E7258;

s32 func_801E3BC8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 2, 0x3EAAAAB0) != 0) {
        func_801C0EB0(3, 2);
        return 0xB;
    }
    temp_ret = func_801C0F18(3, 2);
    D_8038D8D0->unk8->unk30->unk8 = (((f32) (func_80034C24(temp_ret) / D_801E7250) / D_801E7258) * -105.0f) + -69.0f;
    return 0xA;
}
