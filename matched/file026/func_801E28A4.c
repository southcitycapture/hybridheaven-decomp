#include "context.h"

extern f32 D_801FBD80;
extern f32 D_801FBD84;
extern f32 D_801FBD88;
extern f32 D_801FBD8C;

s32 func_801E28A4(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    f32 delta;

    if (func_801C0B8C(0x36A5420) != 0) {
        if (func_801C0B8C(0x3F3A860) != 0) {
            return 7;
        }
        delta = D_801FBD80;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 = p->unk34 + delta;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 = p->unk40 + delta;
        return 6;
    }
    if (func_801C0B8C(0x30A32C0) != 0) {
        func_8038BD50(D_801FBD84, D_801FBD88, 90.0f);
        D_8038BD88(71.5f, D_801FBD8C, 75.4f);
    }
    return 6;
}
