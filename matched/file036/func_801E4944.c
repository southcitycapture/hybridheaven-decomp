#include "common.h"

extern void func_801D7044(s32 arg0);
extern void func_8038D28C(s32 arg0);
extern s32 D_801E4DB8;

s32 func_801E4944(s32 arg0, s32 arg1) {
    if (D_801E4DB8++ >= 0x55) {
        func_801D7044(1);
        func_8038D28C(0x633);
        return 0x28;
    }
    return 0x27;
}
