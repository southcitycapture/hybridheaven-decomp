#include "common.h"

s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);

struct func_801E2F88_Struct2 {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E2F88_Struct1 {
    u8 pad0[0x30];
    struct func_801E2F88_Struct2 *unk30;
};

struct func_801E2F88_Struct0 {
    u8 pad0[0x24];
    struct func_801E2F88_Struct1 *unk24;
};

extern struct func_801E2F88_Struct0 *D_8038D8D0;

s32 func_801E2F88(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 var_ft0;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 0);
    var_ft1 = (f32) temp_v0;
    var_ft0 = var_ft1 / 10.0f;
    D_8038D8D0->unk24->unk30->unk4 = 20.0f * var_ft0;
    if (func_801C1088(3, 0, 0xA) != 0) {
        func_801C10D8(3, 0);
        return 0xA;
    }
    return 9;
}
