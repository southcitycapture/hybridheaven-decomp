#define func_801BFFCC func_801BFFCC_ctx
#include "context.h"
#undef func_801BFFCC

extern void (*D_801D8D28[])(void);

s32 func_801BFFCC(void) {
    s32 flags;
    s32 i;
    s32 bit;

    bit = 1;
    i = 0;
    flags = D_801D8CF4;
loop:
    if (flags & bit) {
        if (D_801D8D28[i] != NULL) {
            D_801D8D28[i]();
        }
    }
    i++;
    bit <<= 1;
    if (i != 9) goto loop;
    return 1;
}
