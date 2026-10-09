#include "context.h"
extern struct func_801C3D90_StructA D_801BBBF0;

extern void func_801C4A5C(void *, s32);

void func_801C3BF0(void) {
    s32 val;

    val = *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4);
    if (val != 0) {
        *(s32 *) (*(u8 **) ((u8 *) &D_801BBBF0 + 0xDC) + 0x54) = val;
        func_801C4A5C(*(void **) ((u8 *) &D_801BBBF0 + 0xDC), 0);
        *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4) = 0;
    }
}
