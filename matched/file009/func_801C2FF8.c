#include "context.h"

extern s32 func_801C3B20();
extern s32 func_801C3B3C();

s32 func_801C2FF8(void) {
    if ((func_801C3B20() >= 2) && (func_801C3B3C() == 2)) {
        return 1;
    }
    return 0;
}
