#include "context.h"

void func_801C480C(func_801C4644_Struct *arg0, func_801C2A1C_Struct2 **arg1) {
    f32 value;
    f32 numerator;
    f32 denominator;

    numerator = (f32)(u32)arg0->uA8;
    denominator = (f32)(u32)arg0->uAC;
    value = arg0->f94;
    (*arg1)->unk30->unk8 = value - ((value * numerator) / denominator);
    arg0->uA8++;
    if (arg0->uAC < arg0->uA8) {
        func_80005700();
    }
}
