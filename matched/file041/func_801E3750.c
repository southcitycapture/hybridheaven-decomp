#include "common.h"

struct func_801E3750_Struct8 {
    u8 pad[8];
    f32 unk8;
};

struct func_801E3750_Struct4 {
    u8 pad[0x30];
    struct func_801E3750_Struct8 *unk30;
};

struct func_801E3750_Struct0 {
    u8 pad[4];
    struct func_801E3750_Struct4 *unk4;
};

extern struct func_801E3750_Struct0 *D_8038D8D0;
extern f64 D_801E8860;
extern f32 D_801E8868;

f64 func_80034C24(u64 arg);
s32 func_801C0DE4(s32 arg0, s32 arg1, f32 arg2);
void func_801C0EB0(s32 arg0, s32 arg1);
u64 func_801C0F18(s32 arg0, s32 arg1);

s32 func_801E3750(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 5.0f) != 0) {
        func_801C0EB0(3, 1);
        return 8;
    }
    temp_ret = func_801C0F18(3, 1);
    D_8038D8D0->unk4->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E8860)) / 5.0f) * 178.0f + D_801E8868);
    return 7;
}
