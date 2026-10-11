#include "common.h"

extern void func_8038BED4();
extern void func_8038D28C();

s32 func_801E905C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x280);
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}
