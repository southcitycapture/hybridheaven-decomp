#include "context.h"

s32 func_801E3584(void) {
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, 0, ((s8 *)&D_801E9678)[3], 0);
    D_801E9678 = D_801E9678 + 4;
    if (D_801E9678 >= 0x70) {
        D_801E9678 = 0x10;
    }
}
