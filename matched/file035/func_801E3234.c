#include "context.h"

extern f32 D_801E8BF8;
extern f32 D_801E8BFC;
extern f32 D_801E8C00;
extern f32 D_801E8C04;
extern f32 D_801E8C08;
extern f32 D_801E8C0C;
extern f32 D_801E8C10;

extern s32 func_8038C17C(f32, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E3234(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 zero;
    func_801C7B30(1);
    a = D_801E8BF8;
    b = D_801E8BFC;
    zero = 0.0f;
    if (func_8038C17C(zero, D_801E8C00, zero, 0x411E6666,
         a, D_801E8C04, D_801E8C08, a,
         D_801E8C0C, 13.5f, b, D_801E8C10,
         14.0f, b, 41.0f, 20.0f) != 0) {
        D_8038C158();
        return 0x1B;
    }
    return 0x1A;
}
