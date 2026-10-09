#include "context.h"

extern u8 D_8008DFC0[];

u16 func_80017014(s32 arg0) {
    if (arg0 >= 0x100) {
        return 0xFFFF;
    }
    return *(u16 *)(D_8008DFC0 + arg0 * 8);
}
