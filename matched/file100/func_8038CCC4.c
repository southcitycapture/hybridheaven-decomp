#include "context.h"

s32 func_800178E8();
extern s32 D_8038E138;

s32 func_8038CCC4(void) {
    if (func_800178E8() != 0) {
        D_8038E138 = 2;
        return 0;
    }
    D_8038E138 = 1;
    return 0;
}
