#include "context.h"

extern s32 D_801E7144;

s32 func_801E4748(s32 arg0, s32 arg1) {
    if (D_801E7144 >= 0x1F) {
        return 0x15;
    }
    D_801E7144 += 1;
    return 0x14;
}
