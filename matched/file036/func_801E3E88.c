#include "context.h"

extern void func_801D6AB8(s32);
extern void func_8038D28C(s32);
extern s32 D_801E4D70;
extern s32 D_801E4D74;

s32 func_801E3E88(s32 arg0, s32 arg1) {
    if (D_801E4D70++ >= 0x35) {
        D_801E4D74 = 0;
        func_801D6AB8(1);
        func_8038D28C(0x632);
        return 0xC;
    }
    return 0xB;
}
