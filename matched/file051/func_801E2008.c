#include "common.h"

extern void D_8038C158();
extern void func_801E1C28();

s32 func_801E2008(s32 arg0, s32 arg1) {
    func_801E1C28();
    if (func_801C0B8C(0x33E140) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}
