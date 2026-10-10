#include "context.h"

void func_801C3C3C(s32 arg0) {
    if (*(s32 *)((u8 *)&D_801BBBF0 + 0x1E4) != 0) {
        *(s32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x54) = arg0;
    }
}
