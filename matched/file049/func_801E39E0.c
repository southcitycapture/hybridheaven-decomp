#include "context.h"
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);

s32 func_801E39E0(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 1, 5) != 0) {
        func_801C10D8(3, 1);
        func_801C1000(3, 1);
        return 4;
    }
    return 3;
}
