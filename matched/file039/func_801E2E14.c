#include "context.h"

extern void func_8038D28C(s32);
extern void D_8038C158(void);

s32 func_801E2E14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_8038D28C(0x6A);
        D_8038C158();
        return 0x2C;
    }
    return 0x2B;
}
