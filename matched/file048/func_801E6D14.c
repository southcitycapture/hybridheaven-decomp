#include "context.h"

struct func_801E6D14_Struct_B {
    u8 pad0[0x30];
    u8 *unk30;
};
struct func_801E6D14_Struct_A {
    u8 pad0[0x2C];
    struct func_801E6D14_Struct_B *unk2C;
};
struct func_801E6D14_Struct_C {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x4F - 0x4C];
    s8 unk4F;
};

s32 func_801E6D14(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 scale;
    f32 q;

    scale = 127.0f;
    if (func_801C1088(3, 8, 0x1E) != 0) {
        func_801C10D8(3, 8);
        return 7;
    }
    q = (f32) func_801C1134(3, 8) / 30.0f;
    temp_v1 = (u32) (scale * q);
    ((struct func_801E6D14_Struct_C *) ((struct func_801E6D14_Struct_A *) D_8038D8D0)->unk2C->unk30)->unk4B = (s8) temp_v1;
    ((struct func_801E6D14_Struct_C *) ((struct func_801E6D14_Struct_A *) D_8038D8D0)->unk2C->unk30)->unk4F = (s8) temp_v1;
    func_801E685C();
    return 6;
}
