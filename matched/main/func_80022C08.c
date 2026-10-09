#include "context.h"

extern u16 D_800CBACA;
extern s8 D_800CBACC;

void func_80022C08(void) {
    if ((s32) D_800CBACA < 0x100) {
        D_800CBACC = 0x10;
    }
}
