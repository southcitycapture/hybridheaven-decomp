#include "context.h"

extern s8 D_800CBAB6;
extern u8 D_800CBAB7;

void func_80022930(void) {
    if (D_800CBAB7 != 0x7F) {
        D_800CBAB6 = -4;
    }
}
