#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BED4(void);
s32 func_801E23C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35001) != 0) {
        func_8038BED4();
        func_8038BE98(68.4000015f);
        return 0x10;
    }
    return 0xF;
}
