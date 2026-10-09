#include "context.h"

struct func_801E382C_Struct_B {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E382C_Struct_A {
    u8 pad[0x30];
    struct func_801E382C_Struct_B *unk30;
};

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 time);
extern f64 D_801E87E8;

s32 func_801E382C(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 div;

    if (func_801C0DE4(3, 0, 0x40800000) != 0) {
        func_801C0EB0(3, 0);
        func_801C0D04(3, 0);
        return 7;
    }
    temp_ret = func_801C0F18(3, 0);
    div = 4.0f;
    ((struct func_801E382C_Struct_A *) *D_8038D8D0)->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E87E8)) / div) * 122.0f + 25.0f);
    return 6;
}
