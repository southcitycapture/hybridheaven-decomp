#include "context.h"

typedef struct func_801E3CB8_Struct {
    u8 pad0[0xC];
    func_801E397C_Struct_B *unkC;
} func_801E3CB8_Struct;
s32 func_801E3CB8(s32 arg0, s32 arg1) {
    f64 one;
    f32 temp_fv1;
    u64 temp_ret;

    one = 1.0;
    temp_ret = func_801C0F18(3, 3);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / (1e+06)) / one);
    ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unk4 = (f32) (((-10.399998f) * temp_fv1) + (-53.2f));
    ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unkC = (f32) (((f64) temp_fv1 * (-10.199993896484386)) + (303.79998779296875));
    if (func_801C0B8C(0xCDFE60) != 0) {
        extern void func_801C0EB0();
        ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unk4 = (-63.6f);
        ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unkC = (293.6f);
        func_801C0EB0(3, 3, &D_8038D8D0);
        return 0xA;
    }
    return 9;
}
