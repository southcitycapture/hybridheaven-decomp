#include "context.h"

extern f64 D_801E9518;
extern f32 D_801E9520;
extern f32 D_801E9524;
extern f32 D_801E9528;
extern f32 D_801E952C;

s32 func_801E3648(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 1);
    temp_fv1 = -10.5f;
    temp_fv1 *= (f32) ((func_80034C24(temp_ret) / D_801E9518) / 0.5);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = temp_fv1 + D_801E9520;
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = temp_fv1 + D_801E9524;
    if (func_801C0B8C(0xBEBC20) != 0) {
        ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = D_801E9528;
        ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = D_801E952C;
        func_801C0EB0(3, 1);
        return 0xA;
    }
    return 9;
}
