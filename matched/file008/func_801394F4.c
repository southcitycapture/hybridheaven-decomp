#include "context.h"

void func_801394F4(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 8; i++) {
        j = 0;
        do {
            D_801BD960[i * 4 + j] = 1;
            j++;
        } while (j < 4);
    }
}
