#include "context.h"

extern f64 D_801F5830;

struct func_801E44C0_StructA {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801E44C0_StructB {
    u8 pad0[0x30];
    struct func_801E44C0_StructA *unk30;
};
struct func_801E44C0_StructC {
    u8 pad0[0x18];
    struct func_801E44C0_StructB *unk18;
};

s32 func_801E44C0(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0x014FB180) != 0) {
        return 10;
    }
    if (func_801C0B8C(0xC65D40) != 0) {
        temp_ret = func_801C0B2C();
        ((struct func_801E44C0_StructC *)D_8038D8D0)->unk18->unk30->unk12 =
            (s16)(s32)(((f32)(func_80034C24(temp_ret) / D_801F5830 - 13.0) / 9.0f) * -180.0f * 2048.0f / 90.0f);
    }
    return 9;
}
