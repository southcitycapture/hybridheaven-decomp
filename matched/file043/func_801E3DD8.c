#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
extern f64 D_801EA1E0;
extern f32 D_801EA1E8;

s32 func_801E3DD8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x3FA00004) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    D_8038D8D0->unk4->unk30->unk4 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801EA1E0) / D_801EA1E8) * -93.0f) + 198.0f);
    return 3;
}
