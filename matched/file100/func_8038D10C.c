#define func_8038D10C func_8038D10C_hdr_stub
#include "context.h"
#undef func_8038D10C

s32 func_8001791C();                                /* extern */
extern s32 D_8038DBE0;
extern s32 D_8038DBE4;
extern s32 D_8038DBE8;

s32 func_8038D10C(void) {
    if (func_8001791C() != 0) {
        if (D_8038DBE8 < ++D_8038DBE4) {
            D_8038DBE0 = 2;
            return 0;
        }
        D_8038DBE0 = 0;
    }
    return 0;
}
