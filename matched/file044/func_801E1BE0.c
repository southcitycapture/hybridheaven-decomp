#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void D_8038C158(void);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern void func_8038BEC8(f32);
extern f32 D_801EDB2C;
extern f32 D_801EDB30;
extern f32 D_801EDB34;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x1E8480) != 0) {
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801EDB2C);
    func_8038BD50(57.5f, D_801EDB30, 0xC202CCCD);
    D_8038BD88(48.0f, D_801EDB34, 0xC2400000);
    return 0;
}
