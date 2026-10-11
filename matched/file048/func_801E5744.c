#include "context.h"
extern void func_801E560C();
s32 func_801C0B8C(u64 time);

s32 func_801E5744(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7DF) != 0) {
        func_801C1000(3, 5);
        return 3;
    }
    func_801E560C();
    return 2;
}
