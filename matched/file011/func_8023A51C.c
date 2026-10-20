#include "context.h"

extern s8 func_80243E50(u8, s32, u8, u8);

s32 func_8023A51C(s32 arg0, u8 arg1) {
    s32 p;
    s32 i;
    s32 o;
    o = arg0;
    p = *(s32 *)(arg0 + 0x98);
    i = func_80243E50(((u8 *)&D_80240880)[0x1B], (((u8 *)&D_80240880)[0x1C] - 1) / 2 & 0xFF, ((u8 *)&D_80240880)[0x1D], arg1);
    if (*(u8 *)(p + 0xA8 + i * 6) == 1) {
        return 1;
    }
    return 0;
}
