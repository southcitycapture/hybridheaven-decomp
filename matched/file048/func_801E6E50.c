#include "context.h"

extern s32 func_801C1000(s32 a, s32 b);
extern void func_801E685C(void);

s32 func_801E6E50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01EB553C) != 0) {
        func_801C1000(3, 8);
        return 8;
    }
    func_801E685C();
    return 7;
}
