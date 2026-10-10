#include "context.h"

void func_80024EB8(void) {
    *(s16 *)((u8 *)D_800CBDA4 + 0x2E) = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
}
