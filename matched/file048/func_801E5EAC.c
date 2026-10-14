#include "context.h"

struct func_801E5EAC_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E5EAC_Inner {
    u8 pad0[0x30];
    struct func_801E5EAC_Mid *unk30;
};
struct func_801E5EAC_Top {
    u8 pad0[0x24];
    struct func_801E5EAC_Inner *unk24;
};

s32 func_801E5EAC(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 6, 0x1E) != 0) {
        func_801C10D8(3, 6);
        return 3;
    }
    ratio = (f32) func_801C1134(3, 6) / 30.0f;
    temp_v1 = (u32) (127.0f * ratio);
    ((struct func_801E5EAC_Top *) D_8038D8D0)->unk24->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E5EAC_Top *) D_8038D8D0)->unk24->unk30->unk4F = (s8) temp_v1;
    func_801E5C00();
    return 2;
}
