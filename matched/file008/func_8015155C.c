#include "common.h"

extern s32 func_801517CC();

struct func_8015155C_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
};

struct func_8015155C_Dst {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

s32 func_8015155C(struct func_8015155C_Struct *arg0, struct func_8015155C_Dst *arg1) {
    if (func_801517CC() != 0) {
        arg1->unk0 = arg0->unk40;
        arg1->unk4 = arg0->unk44;
        arg1->unk8 = arg0->unk48;
        return 1;
    }
    return 0;
}
