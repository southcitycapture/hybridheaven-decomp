#include "context.h"
extern struct func_801C3D90_StructA D_801BBBF0;

void func_801C3BC8(void) {
    u32 base;

    base = (u32) &D_801BBBF0;
    if (*(s32 *) (base + 0x1E4) == 0) {
        *(s32 *) (base + 0x1E4) = *(s32 *) (*(u32 *) (base + 0xDC) + 0x54);
    }
}
