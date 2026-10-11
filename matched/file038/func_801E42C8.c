#include "context.h"

extern f64 D_801E7288;
extern f32 D_801E7290;

struct func_801E42C8_Struct0 {
    u8 pad[0xC];
    struct func_801E3A34_Struct1 *unkC;
};

s32 func_801E42C8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x3F444440) != 0) {
        func_801C0EB0(3, 3);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E42C8_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E7288)) / D_801E7290) * -102.0f + -116.0f);
    return 0xD;
}
