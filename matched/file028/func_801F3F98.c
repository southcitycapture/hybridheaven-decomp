#include "common.h"

extern s32 func_801C0B8C(u64);
extern void func_8038BED4(void);

s32 func_801F3F98(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_8038BED4();
        return 6;
    }
    return 5;
}
