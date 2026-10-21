#include "context.h"
/* starting point: func_801E6988 (file048), whose assembly is 96% the same as this function's */

struct func_801E6EA4_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E6EA4_Inner {
    u8 pad0[0x30];
    struct func_801E6EA4_Mid *unk30;
};
struct func_801E6EA4_Top {
    u8 pad0[0x2C];
    struct func_801E6EA4_Inner *unk2C;
};

s32 func_801E6EA4(s32 arg0, s32 arg1) {
    extern void func_801E685C();
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 8, 0x3C) != 0) {
        func_801C10D8(3, 8);
        return 9;
    }
    ratio = (f32) func_801C1134(3, 8) / 60.0f;
    temp_v1 = (u32) ((-127.0f * ratio) + 127.0f);
    ((struct func_801E6EA4_Top *) D_8038D8D0)->unk2C->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E6EA4_Top *) D_8038D8D0)->unk2C->unk30->unk4F = (s8) temp_v1;
    func_801E685C(&D_8038D8D0);
    return 8;
}
