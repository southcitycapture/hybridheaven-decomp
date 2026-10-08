#include "common.h"

extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E3B48(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1F7080BULL) != 0) {
        func_8038D28C(0x245);
        func_801C0D04(3, 1);
        return 5;
    }
    return 4;
}
