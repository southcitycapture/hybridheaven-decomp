#include "common.h"

extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BED4(void);
extern f32 D_801F4848;

s32 func_801E8C00(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801F4848);
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}
