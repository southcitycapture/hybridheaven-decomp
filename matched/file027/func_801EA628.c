#include "common.h"

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);
extern void func_8038D28C(s32);

s32 func_801EA628(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x5B || func_801C1B1C() == 0) {
        return 3;
    }
    func_8038D28C(0x6AD);
    return 4;
}
