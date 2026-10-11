#include "context.h"
extern void func_8038BED4(void);
extern s32 func_801C0B8C(u64);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}
