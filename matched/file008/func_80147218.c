#include "context.h"

extern void func_801471DC(s32 arg0);

s32 func_80147218(void *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a1 != 0) {
        func_801471DC(temp_a1);
        return 1;
    }
    return 0;
}
