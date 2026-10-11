#include "common.h"

extern void D_8038C158();
extern void func_8038D28C();

s32 func_801E222C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x85);
        D_8038C158();
        return 0x13;
    }
    return 0x12;
}
