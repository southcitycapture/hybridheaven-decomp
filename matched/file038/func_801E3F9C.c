#include "context.h"

extern f64 D_801E7270;

struct func_801E3F9C_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};
struct func_801E3F9C_Struct1 {
    u8 pad[0x30];
    struct func_801E3F9C_Struct2 *unk30;
};
struct func_801E3F9C_Struct0 {
    u8 pad[0xC];
    struct func_801E3F9C_Struct1 *unkC;
};

s32 func_801E3F9C(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x40200000) != 0) {
        func_801C0EB0(3, 3);
        return 8;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E3F9C_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 =(f32) (((f32) (func_80034C24(temp_ret) / D_801E7270) / 2.5f) * -212.0f + 158.0f);
    return 7;
}
