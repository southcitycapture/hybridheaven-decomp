#include "common.h"


extern func_801E2500_Struct *func_801BF6B0();
extern void func_801CCE88();

s32 func_801E2500(s32 arg0, s32 arg1) {
    if (func_801BF6B0(3)->unk3C >= 0xB) {
        func_801CCE88(0, 0, 0, 0);
        return 3;
    }
    return 2;
}
