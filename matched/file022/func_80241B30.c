#include "context.h"

extern void func_80020744(s32);
extern s32 D_801BCCF0;

void func_80241B30(void) {
    *(s16 *)((u8 *)&D_801BBBF0 + 2) = 2;
    func_80020744(7);
    func_8001E978(D_801BCCF0, 0, 0, 0, 0xF, 0, 1, 0);
}
