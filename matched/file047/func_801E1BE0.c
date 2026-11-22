#include "common.h"

extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038C158(void);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BE98(f32 arg0);
extern void func_8038BEC8(f32 arg0);
s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x419CE0) != 0) {
        D_8038C158();
        return 1;
    }
    func_8038BE98(33.2999992f);
    func_8038BD50(78.0999985f, 11.3000002f, 0xC2C1CCCD);
    D_8038BD88(-212.0f, 152.899994f, 0x42893333);
    return 0;
}
