#include "context.h"
extern f64 D_801EC6E8;
extern f64 D_801EC6F0;
extern f64 D_801EC6F8;

s32 func_801E4A6C(s32 arg0, s32 arg1) {
    u64 r;
    f32 t;
    f64 d;
    f64 four = 4.0;

    if (func_801C0B8C(0x0138CE20) != 0) {
        func_801C0EB0(3, 1);
        ((func_801E48C4_StructB *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk4B = 0x7F;
        return 0xD;
    }
    r = func_801C0F18(3, 1);
    t = (func_80034C24(r) / D_801EC6E8 / four) * 24.0;
    d = func_80034C24(r);
    ((func_801E48C4_StructA *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk12 = ((func_801E48C4_StructA *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk12 - (s16)(2048.0f * t / 90.0f);
    ((func_801E48C4_StructB *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk4B = (u32)(f32)(d / D_801EC6F0 / four * D_801EC6F8);
    return 0xC;
}
