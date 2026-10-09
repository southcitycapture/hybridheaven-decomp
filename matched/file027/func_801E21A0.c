#include "context.h"

extern f32 D_801F56B4;
extern f32 D_801F56B8;
extern f32 D_801F56BC;

s32 func_801E21A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    func_8038BD50(D_801F56B4, D_801F56B8, 0x41766666);
    D_8038BD88(1.5f, D_801F56BC, 0xC079999A);
    return 0xE;
}
