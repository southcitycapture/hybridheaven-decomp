#include "context.h"

extern void func_8038BEC8(f32 arg0);
extern f32 D_801EB2A0;
extern f32 D_801EB2A4;
extern f32 D_801EB2A8;
extern f32 D_801EB2AC;
extern f32 D_801EB2B0;
extern f32 D_801EB2B4;
extern f32 D_801EB2B8;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0xADF33F) != 0) {
        func_8038D28C(0x8B);
        func_8038BE98(D_801EB2A0);
        func_8038BD50(0.0f, D_801EB2A4, 0x4214CCCD);
        D_8038BD88(0.0f, D_801EB2A8, 0x42C86666);
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801EB2AC);
    func_8038BD50(D_801EB2B0, D_801EB2B4, 0xC391199A);
    D_8038BD88(1.0f, D_801EB2B8, 0xC3957333);
    return 0;
}
