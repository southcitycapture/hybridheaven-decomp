#include "common.h"

struct func_801FB2FC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801FB2FC_Obj {
    u8 pad0[0x30];
    struct func_801FB2FC_Sub *unk30;
};

extern void func_80005700(s32);
extern s32 func_801FA248(void *, s32);
extern f64 D_80218E50;

void func_801FB2FC(s32 arg0, struct func_801FB2FC_Obj **arg1) {
    f64 scale;
    struct func_801FB2FC_Sub *temp_v0;

    scale = D_80218E50;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * scale);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C * scale);
    if (func_801FA248(*arg1, 2) == 0) {
        func_80005700(arg0);
    }
}
