#include "context.h"

extern u8 D_801BBC06[];

s32 func_80236C9C(void) {
    if (D_801BBC06[4] != 0) {
        return 1;
    }
    return 0;
}
