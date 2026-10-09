#include "context.h"

extern void D_8038C158(void);

s32 func_801E20C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA1220) != 0) {
        D_8038C158();
        return 0x10;
    }
    return 0xF;
}
