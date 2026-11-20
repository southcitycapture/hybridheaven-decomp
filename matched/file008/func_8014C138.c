#include "common.h"
extern void *func_8014B7CC(s32);


struct func_8014C138_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};
extern s32 func_801FF348(s32);

s32 func_8014C138(u16 arg0)
{
    struct func_8014C138_Struct *temp_v0;

    temp_v0 = (struct func_8014C138_Struct *) func_8014B7CC(arg0);
    if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0)) {
        return func_801FF348(temp_v0->unk4);
    }
    return 0;
}
