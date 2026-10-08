#include "context.h"

extern u8 D_8017DC89;
extern u8 D_8017DD27;

u8 func_80152C68(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (!arg0) {
        return D_8017DC89;
    }
    return D_8017DD27;
}
