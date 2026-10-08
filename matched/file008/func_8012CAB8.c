#include "context.h"

s32 func_8012CAB8(s32 arg0) {
    s32 *ptr;

    ptr = &arg0;
    arg0 &= 0xFF;
    if ((arg0 == 0xC) || (arg0 == 0x11) || (arg0 == 0x14) || (arg0 == 0x17) || (arg0 == 0x19) || (arg0 == 0x1A) || (arg0 == 0x25) || (arg0 == 0x28) || (arg0 == 0x46) || (arg0 == 0x4B) || (arg0 == 0x4C) || (arg0 == 0x50) || (arg0 == 0x51) || (arg0 == 0x5B) || (arg0 == 0x5D)) {
        return 1;
    }
    return 0;
}
