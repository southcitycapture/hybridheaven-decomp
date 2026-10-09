#include "context.h"

extern s32 D_800892B0;

void func_8001F6D0(void) {
    s32 *p = (s32 *) ((u8 *) &D_800892B0 + 0x429C);
    *p = *p;
}
