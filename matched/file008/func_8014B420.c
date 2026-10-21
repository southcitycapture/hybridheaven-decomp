#include "context.h"

struct func_8014B420_StructInner {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};

struct func_8014B420_Struct {
    u8 pad[4];
    struct func_8014B420_StructInner *unk4;
};

extern struct func_8014B420_Struct *D_8014B7CC(u16);

s32 func_8014B420(u16 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    struct func_8014B420_Struct *temp_v0;

    temp_v0 = D_8014B7CC(arg0);
    if ((temp_v0 != NULL) && (temp_v0->unk4 != NULL)) {
        temp_v0->unk4->unk90 = arg1;
        temp_v0->unk4->unk94 = arg2;
        temp_v0->unk4->unk98 = arg3;
        temp_v0->unk4->unk9C = arg4;
        return 1;
    }
    return 0;
}
