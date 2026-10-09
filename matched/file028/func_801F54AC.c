#include "context.h"

extern f32 D_80208B8C;
extern f32 D_80208B90;
extern f32 D_80208B94;
extern f32 D_80208B98;

s32 func_801F54AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_8038BD50(D_80208B8C, D_80208B90, 0x40933333);
        D_8038BD88(D_80208B94, D_80208B98, 0x41F00000);
        func_8038D28C(0x89);
        return 9;
    }
    return 8;
}
