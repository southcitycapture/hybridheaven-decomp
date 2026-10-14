#include "context.h"

struct func_801E6988_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E6988_Inner {
    u8 pad0[0x30];
    struct func_801E6988_Mid *unk30;
};
struct func_801E6988_Top {
    u8 pad0[0x2C];
    struct func_801E6988_Inner *unk2C;
};

s32 func_801E6988(s32 arg0, s32 arg1) {
    extern void func_801E67C8();
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 8, 0x1E) != 0) {
        func_801C10D8(3, 8);
        return 3;
    }
    ratio = (f32) func_801C1134(3, 8) / 30.0f;
    temp_v1 = (u32) (127.0f * ratio);
    ((struct func_801E6988_Top *) D_8038D8D0)->unk2C->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E6988_Top *) D_8038D8D0)->unk2C->unk30->unk4F = (s8) temp_v1;
    func_801E67C8(&D_8038D8D0);
    return 2;
}
