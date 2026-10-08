#include "context.h"

extern void func_8038BED4(void);

s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7270E0) != 0) {
        func_8038BED4();
        return 0x1A;
    }
    return 0x19;
}
