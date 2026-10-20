#include "context.h"

struct func_8014B034_Struct {
    s8 unk0;
    u8 pad1[3];
    s32 unk4;
};

extern void *func_8014B7CC(s32);
extern s32 func_8014B6F8(u16);
extern void func_801FF438(s32, u16);

s32 func_8014B034(volatile u16 arg0, u16 arg1) {
    s8 *temp_v0_2;
    struct func_8014B034_Struct *temp_v0;
    u16 id;

    temp_v0 = func_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        temp_v0->unk0 = 0;
        if (temp_v0->unk4 != 0) {
            func_801FF438(temp_v0->unk4, arg1);
        }
    } else {
        return 0;
    }
    id = arg0;
    if ((s32) id >= 0x8000) {
        temp_v0_2 = (s8 *)func_8014B6F8(id);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = 0;
        }
    }
    return 1;
}
