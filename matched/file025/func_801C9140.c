#include "context.h"

extern s32 D_801DA614;
extern s32 D_801DA618;

void func_801C9140(s32 arg0, void **arg1) {
    if (D_801DA618 != 0) {
        ((u8 *)*arg1)[0x22] = 1;
    } else {
        ((u8 *)*arg1)[0x22] = 0;
    }
    if (D_801DA614 == 0) {
        func_80005700(arg0);
    }
}
