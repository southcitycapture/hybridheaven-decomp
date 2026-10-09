#include "context.h"
extern s16 D_80089354;
s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
s32 func_801C0EB0(s32 arg0, s32 arg1);
extern void func_8038BED4(void);

s32 func_801E794C(s32 arg0, s32 arg1) {
    if (func_801C0DE4(0, 0, 0x3F800000) != 0) {
        func_801C0EB0(0, 0);
        D_80089354 = 0;
        func_8038BED4();
        return 2;
    }
    return 1;
}
