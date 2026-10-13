#include "context.h"

extern s32 func_801C1000(s32 a, s32 b);
extern s32 func_8038D28C(s32 a);

s32 func_801E4D6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801C1000(3, 2);
        func_8038D28C(0x20C);
        return 0x11;
    }
    return 0x10;
}
