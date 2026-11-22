#include "common.h"

extern void D_8038BD88(f32, f32, f32);
extern void D_8038C158(void);
s32 func_801C0B8C(u64 time);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
s32 func_801E2684(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x021DAFE0) != 0) {
        D_8038C158();
        return 0xC;
    }
    func_8038BE98(7.9000001f);
    func_8038BD50(57.4000015f, 14.1000004f, 9.5f);
    D_8038BD88(45.5f, 16.3999996f, 46.0f);
    return 0xB;
}
