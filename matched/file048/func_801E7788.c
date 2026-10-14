#include "context.h"

struct func_801E7788_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E7788_Struct_B {
    u8 pad0[0x30];
    struct func_801E7788_Struct_C *unk30;
};

struct func_801E7788_Struct_A {
    u8 pad0[0x40];
    struct func_801E7788_Struct_B *unk40;
};

s32 func_801E7788(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        func_801C1000(3, 0xD);
        return 6;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk4A = (s8) temp_v1;
    return 5;
}
