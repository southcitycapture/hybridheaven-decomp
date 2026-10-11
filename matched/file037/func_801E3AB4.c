#include "context.h"

struct func_801E3AB4_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801E3AB4_Struct2 {
    u8 pad0[0x30];
    struct func_801E3AB4_Struct1 *unk30;
};
struct func_801E3AB4_Struct3 {
    u8 pad0[0xC];
    struct func_801E3AB4_Struct2 *unkC;
};

extern f64 D_801E6D88;

s32 func_801E3AB4(s32 arg0, s32 arg1) {
    f64 temp_f0;

    if (func_801C0DE4(3, 3, 0x41200000) != 0) {
        func_801C0EB0(3, 3);
        return 3;
    }
    temp_f0 = func_80034C24(func_801C0F18(3, 3));
    ((struct func_801E3AB4_Struct3 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((D_801E69C4 + 121.0f) - D_801E69C4) * ((f32) (temp_f0 / D_801E6D88) / 10.0f)) + D_801E69C4);
    return 2;
}
