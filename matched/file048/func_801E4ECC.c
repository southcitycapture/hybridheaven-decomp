#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

struct func_801E4ECC_Inner {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E4ECC_Mid {
    u8 pad0[0x30];
    struct func_801E4ECC_Inner *unk30;
};

struct func_801E4ECC_Top {
    u8 pad0[0xC];
    struct func_801E4ECC_Mid *unkC;
};

s32 func_801E4ECC(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 scaled;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    scaled = var_ft1 / 17.0f;
    ((struct func_801E4ECC_Top *) D_8038D8D0)->unkC->unk30->unk4 = -19.0f * scaled;
    if (func_801C1088(3, 2, 0x11) != 0) {
        func_801C10D8(3, 2);
        return 0x14;
    }
    return 0x13;
}
