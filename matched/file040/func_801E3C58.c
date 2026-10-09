#include "context.h"

struct func_801E3C58_Struct1 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E3C58_Struct2 {
    u8 pad[0x30];
    struct func_801E3C58_Struct1 *unk30;
};

struct func_801E3C58_Struct0 {
    u8 pad[0x4];
    struct func_801E3C58_Struct2 *unk4;
};

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f64 D_801E8810;

s32 func_801E3C58(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 divisor;

    divisor = 4.0f;
    if (func_801C0DE4(3, 1, 0x40800000) != 0) {
        func_801C0EB0(3, 1);
        return 7;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801E3C58_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E8810) / divisor) * 121.0f) + 147.0f);
    return 6;
}
