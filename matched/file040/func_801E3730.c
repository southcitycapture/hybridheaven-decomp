#include "context.h"

struct func_801E3730_Struct2 {
    u8 pad0[8];
    f32 unk8;
};

struct func_801E3730_Struct1 {
    u8 pad0[0x30];
    struct func_801E3730_Struct2 *unk30;
};

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f64 D_801E87D8;
extern f32 D_801E87E0;

s32 func_801E3730(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x41108888) != 0) {
        func_801C0EB0(3, 0);
        return 5;
    }
    temp_ret = func_801C0F18(3, 0);
    ((struct func_801E3730_Struct1 *) *D_8038D8D0)->unk30->unk8 = ((((f32) (func_80034C24(temp_ret) / D_801E87D8)) / D_801E87E0) * -120.0f) + 145.0f;
    return 4;
}
