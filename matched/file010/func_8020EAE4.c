#include "common.h"

extern f64 D_8021ABA8;

struct func_8020EAE4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_8020EAE4_Outer {
    u8 pad0[0x30];
    struct func_8020EAE4_Inner *unk30;
};

struct func_8020EAE4_Arg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

s32 func_8020EAE4(struct func_8020EAE4_Arg0 *arg0, struct func_8020EAE4_Outer **arg1) {
    f64 k;
    struct func_8020EAE4_Inner *temp_v0;

    k = D_8021ABA8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + k);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + k);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B -= 0x18;
    if ((*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}
