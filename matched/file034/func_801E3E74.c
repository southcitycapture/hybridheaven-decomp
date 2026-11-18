#include "context.h"

typedef struct func_801E3E74_Struct {
    u8 pad[0x10];
    func_801E397C_Struct_B *unk10;
} func_801E3E74_Struct;
s32 func_801E3E74(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    f64 one;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 4);
        return 3;
    }
    temp_ret = func_801C0F18(3, 4);
    one = 2.0 - 1.0;
    temp_fv1 = (f32)((func_80034C24(temp_ret) / (1e+06)) / one);
    ((func_801E3E74_Struct *)D_8038D8D0)->unk10->unk30->unk4 = (-10.300003f) * temp_fv1 + (-63.6f);
    ((func_801E3E74_Struct *)D_8038D8D0)->unk10->unk30->unkC = (f64)temp_fv1 * (-10.399987792968773) + (293.6000061035156);
    return 2;
}
