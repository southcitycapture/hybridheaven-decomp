#include "context.h"

extern u8 func_8038D8B8[];
extern u8 D_801DA61C[];
extern u8 D_801DA630[];
extern s32 D_801DA614;
extern s32 D_801DA618;

s32 func_801C7AB8(void) {
    if (func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA61C) == 0) {
        return 0;
    }
    if (func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA630) == 0) {
        return 0;
    }
    D_801DA614 = 1;
    D_801DA618 = 1;
    return 1;
}
