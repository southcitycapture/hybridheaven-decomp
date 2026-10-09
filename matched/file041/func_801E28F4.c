#include "common.h"

extern void D_8038C158(void);

s32 func_801E28F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0112A880) != 0) {
        D_8038C158();
        return 0x1F;
    }
    return 0x1E;
}
