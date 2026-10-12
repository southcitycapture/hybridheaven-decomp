#include "context.h"

extern void func_8038BEC8(f32 arg0);
extern void func_8038BE98(f32 arg0);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038C158(void);
extern f32 D_801E3E00;
extern f32 D_801E3E04;
extern f32 D_801E3E08;
extern f32 D_801E3E0C;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x419CE0) != 0) {
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801E3E00);
    func_8038BD50(D_801E3E04, D_801E3E08, 0xC2C1CCCD);
    D_8038BD88(-212.0f, D_801E3E0C, 0x42893333);
    return 0;
}
