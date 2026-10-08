#include "common.h"

extern void func_801C1000(s32 arg0, s32 arg1);
extern void func_801E4284(void);

s32 func_801E4358(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAC6CA0) != 0) {
        func_801C1000(4, 1);
        return 5;
    }
    func_801E4284();
    return 4;
}
