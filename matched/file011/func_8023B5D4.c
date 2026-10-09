#include "context.h"

extern void func_80145310(s32, u8, s32);

void func_8023B5D4(void) {
    if (*(s32 *)&D_80240880 != 0) {
        func_80145310(*(s32 *)&D_80240880, D_80240880.unk18, 1);
    }
}
