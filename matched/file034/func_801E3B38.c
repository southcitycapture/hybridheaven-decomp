#include "context.h"

typedef struct func_801E3B38_Struct {
    u8 pad[0xC];
    func_801E397C_Struct_B *unkC;
} func_801E3B38_Struct;
s32 func_801E3B38(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 3);
        return 3;
    }
    temp_ret = func_801C0F18(3, 3);
    temp_fv1 = (f32)((func_80034C24(temp_ret) / (1e+06)) / 1.0f);
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unk4 = (10.399998f) * temp_fv1 + (-63.6f);
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unkC = (f64)temp_fv1 * (10.199987792968727) + (293.6000061035156);
    return 2;
}
