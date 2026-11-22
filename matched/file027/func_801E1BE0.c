#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BED4(void);
s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BD50(5120.0f, 7.0f, 0x40933333);
    D_8038BD88(5120.0f, 15.3999996f, 0x41840000);
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}
