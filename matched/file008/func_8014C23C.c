#include "context.h"

struct func_8014C23C_Inner {
    u8 pad0[0xA8];
    u16 unkA8;
};

struct func_8014C23C_Struct {
    u8 unk0;
    u8 pad1[3];
    struct func_8014C23C_Inner *unk4;
};

s32 func_8014C23C(s32 arg0) {
    struct func_8014C23C_Struct *temp_v0;
    struct func_8014C23C_Inner *temp_v1;
    s32 *temp_ptr;

    temp_ptr = &arg0;
    temp_v0 = (struct func_8014C23C_Struct *) func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (temp_v0->unk0 & 2)) {
        temp_v1 = temp_v0->unk4;
        if (temp_v1 != NULL) {
            temp_v1->unkA8 = temp_v1->unkA8 | 8;
        }
    }
    return 0;
}
