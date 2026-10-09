#include "context.h"

extern u8 D_800CBAB4;
extern s8 D_800CBBD8;

void func_80025CBC(void) {
    if (D_800CBAB4 == 0xF) {
        D_800CBBD8 = 0;
    }
}
