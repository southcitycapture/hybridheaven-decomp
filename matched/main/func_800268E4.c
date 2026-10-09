#include "context.h"

extern void func_80034F60(void);
extern s32 D_800498F0;

void func_800268E4(void) {
    if (D_800498F0 != 0) {
        func_80034F60();
        D_800498F0 = 0;
    }
}
