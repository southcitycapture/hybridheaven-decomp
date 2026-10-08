#include "common.h"

struct func_8014C1F0_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

void *func_8014B7CC(s32);

s32 func_8014C1F0(s32 arg0) {
    struct func_8014C1F0_Struct *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL && (temp_v0->unk0 & 2) && temp_v0->unk4 != 0) {
        return temp_v0->unk9;
    }
    return 0xFF00;
}
