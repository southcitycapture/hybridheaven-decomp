#include "context.h"

extern u8 D_801BBF0A[];

s32 func_801C0320(void) {
    return D_801BBF0A[0x33] == 1;
}
