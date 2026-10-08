#include "common.h"

extern void D_8038C158(void);
extern s32 func_801C0B8C(u64);

s32 func_801E1CF8(s32 arg0, s32 arg1) {
    s32 temp;

    temp = func_801C0B8C(0x1E8480);
    if (temp != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}
