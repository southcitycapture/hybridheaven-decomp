#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BED4(void);
extern f32 D_801E88E0;

s32 func_801E1C74(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_8038BE98(D_801E88E0);
        func_8038BED4();
        return 2;
    }
    return 1;
}
