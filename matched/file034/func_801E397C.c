#include "context.h"




extern func_801E397C_Struct_A *D_8038D8D0;
extern f64 D_801E9548;
extern f32 D_801E9550;
extern f32 D_801E9554;
extern f32 D_801E9558;
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern void func_801C0EB0(s32, s32);

s32 func_801E397C(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 2);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E9548) / 0.5);
    D_8038D8D0->unk8->unk30->unk4 = (f32) ((10.5f * temp_fv1) + D_801E9550);
    D_8038D8D0->unk8->unk30->unkC = (f32) ((10.0f * temp_fv1) + 280.0f);
    if (func_801C0B8C(0xBEBC20) != 0) {
        D_8038D8D0->unk8->unk30->unk4 = D_801E9554;
        D_8038D8D0->unk8->unk30->unkC = D_801E9558;
        func_801C0EB0(3, 2);
        return 0xA;
    }
    return 9;
}
