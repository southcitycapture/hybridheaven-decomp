#include "context.h"

struct func_801E7B50_StructC {
    u8 pad0[0x18];
    f32 unk18;
};
struct func_801E7B50_StructB {
    u8 pad0[0x30];
    struct func_801E7B50_StructC *unk30;
};
struct func_801E7B50_StructA {
    u8 pad0[0x48];
    struct func_801E7B50_StructB *unk48;
};

s32 func_801E7B50(s32 arg0, s32 arg1) {
    f32 var_ft1;
    u32 temp_v0;
    f32 scale;
    f32 var_ft2;

    scale = 1.0f;
    if (func_801C1088(3, 0xB, 0x46) != 0) {
        func_801C10D8(3, 0xB);
        return 3;
    }
    temp_v0 = func_801C1134(3, 0xB);
    var_ft1 = (f32) temp_v0;
    var_ft2 = var_ft1 / 70.0f;
    ((struct func_801E7B50_StructA *) D_8038D8D0)->unk48->unk30->unk18 = scale * var_ft2;
    return 2;
}
