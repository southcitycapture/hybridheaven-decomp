#include "context.h"

struct func_801E40B0_StructC {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E40B0_StructB {
    u8 pad0[0x30];
    struct func_801E40B0_StructC *unk30;
};

struct func_801E40B0_StructA {
    u8 pad0[0x10];
    struct func_801E40B0_StructB *unk10;
};

extern f64 func_80034C24(u64 arg0);
extern u64 func_801C0B2C(void);
extern f64 D_801F5820;

s32 func_801E40B0(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0x014FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        temp_ret = func_801C0B2C();
        ((struct func_801E40B0_StructA *) D_8038D8D0)->unk10->unk30->unk4 =
            (f32) (((f32) ((func_80034C24(temp_ret) / D_801F5820) - 4.0) / 18.0f) * -8.0f);
    }
    return 9;
}
