#include "context.h"
extern struct func_801C3D90_StructA D_801BBBF0;

u16 func_801C3B5C(void) {
    u16 *p;
    u16 temp_v0;

    p = (u16 *)((u8 *)&D_801BBBF0 + 0x1A4);
    temp_v0 = *p;
    *p = 0;
    return temp_v0;
}
