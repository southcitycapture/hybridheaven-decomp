#include "context.h"

extern s32 D_801DED70[];

void func_801C1860(void) {
    s32 i;

    D_801D8DC0 = 0;
    for (i = 0; i < 32; i++) {
        D_801DED70[i * 4 + 0] = -1;
        D_801DED70[i * 4 + 1] = -1;
        D_801DED70[i * 4 + 2] = -1;
        D_801DED70[i * 4 + 3] = 0;
    }
}
