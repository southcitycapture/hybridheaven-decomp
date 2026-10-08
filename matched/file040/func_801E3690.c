#include "context.h"

extern void **D_8038D8D0;

s32 func_801E3690(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x013A54C0) != 0) {
        ((u8 *)*D_8038D8D0)[0x22] = 1;
        return 3;
    }
    return 2;
}
