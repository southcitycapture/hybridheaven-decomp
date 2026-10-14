#include "context.h"




extern func_801E3A38_StructA *D_8038D8D0;
extern s32 func_801C1134(s32 a0, s32 a1);

s32 func_801E3A38(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 var_ft2;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 1);
    var_ft1 = (f32) temp_v0;
    var_ft2 = var_ft1 / 10.0f;
    D_8038D8D0->unkC->unk30->unkC = (f32) ((3.0f * var_ft2) + 65.0f);
    if (func_801C1088(3, 1, 0xA) != 0) {
        func_801C10D8(3, 1);
        return 5;
    }
    return 4;
}
