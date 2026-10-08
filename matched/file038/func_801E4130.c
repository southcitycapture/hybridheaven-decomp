#include "context.h"

extern f64 D_801E7278;
extern f32 D_801E7280;

struct func_801E4130_Struct0 {
    u8 pad[0xC];
    struct func_801E3A34_Struct1 *unkC;
};

s32 func_801E4130(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x3EAAAAB0) != 0) {
        func_801C0EB0(3, 3);
        return 0xB;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E4130_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E7278)) / D_801E7280) * -105.0f + -69.0f);
    return 0xA;
}
