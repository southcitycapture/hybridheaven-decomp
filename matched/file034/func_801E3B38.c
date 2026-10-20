#include "context.h"

typedef struct func_801E3B38_Struct {
    u8 pad[0xC];
    func_801E397C_Struct_B *unkC;
} func_801E3B38_Struct;

extern f64 D_801E9560;
extern f32 D_801E9568;
extern f32 D_801E956C;
extern f64 D_801E9570;
extern f64 D_801E9578;

s32 func_801E3B38(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 3);
        return 3;
    }
    temp_ret = func_801C0F18(3, 3);
    temp_fv1 = (f32)((func_80034C24(temp_ret) / D_801E9560) / 1.0f);
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unk4 = D_801E9568 * temp_fv1 + D_801E956C;
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unkC = (f64)temp_fv1 * D_801E9570 + D_801E9578;
    return 2;
}
