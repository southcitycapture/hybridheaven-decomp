#include "context.h"

typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;

typedef struct func_80225664_Local {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_80225664_Local;

extern s32 D_801BBCCC;
extern func_80225664_Struct D_801BC03C;
extern func_80225664_Struct D_801BC3D8;

void *func_80225664(void *arg0, s32 arg1, s32 arg2) {
    func_80225664_Struct *var_v0;
    func_80225664_Local sp;

    if (arg1 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    sp.unk0 = arg2;
    sp.unk4 = 0;
    sp.unk8 = var_v0->unk10;
    sp.unk6 = 0;
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        sp.unk6 = 0x10;
    }
    *(func_80225664_Local *) arg0 = sp;
    return arg0;
}
