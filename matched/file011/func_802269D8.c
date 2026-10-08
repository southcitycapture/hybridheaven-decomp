#include "context.h"

s32 func_80126944();                                /* extern */
extern u16 D_801BBC1C;
extern u8 D_802407DA;

void func_802269D8(void) {
    if (func_80126944() == 1) {
        D_802407DA = 0;
    }
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        D_802407DA = 1;
    }
}
