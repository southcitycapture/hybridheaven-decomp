#include "context.h"

extern s32 func_8038D28C(s32 arg0);
extern void func_801D0498(s32 arg0);

s32 func_801EFA0C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020545E0) != 0) {
        func_8038D28C(0x628);
        func_801D0498(1);
        return 4;
    }
    return 3;
}
