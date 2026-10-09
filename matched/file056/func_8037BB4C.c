#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 D_8038A938;

s32 func_8037BB4C(s16 arg0, f32 arg1, f32 arg2, s16 arg3) {
    f32 temp_ft1;

    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = (u16) (D_801BBBF0.unkEF0 | 0x1000);
    temp_ft1 = func_8001EAD0(arg0) * arg2;
    D_8038A930.unk0 = temp_ft1;
    D_8038A930.unk4 = arg1;
    D_8038A938 = func_8001EB64(arg0) * arg2;
    D_80388A68 = arg3;
    return 1;
}
