#include "common.h"

extern void func_8038D28C(s32 arg0);
extern void func_801C1000(s32 arg0, s32 arg1);

s32 func_801E4A78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x679B6F) != 0) {
        func_8038D28C(0x25E);
        func_801C1000(3, 4);
        return 6;
    }
    return 5;
}
