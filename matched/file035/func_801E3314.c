#define D_8038C17C D_8038C17C_ctx
#include "context.h"
#undef D_8038C17C

extern f32 D_801E8C14;
extern f32 D_801E8C18;
extern f32 D_801E8C1C;
extern f32 D_801E8C20;
extern f32 D_801E8C24;
extern f32 D_801E8C28;
extern f32 D_801E8C2C;

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32,
                      f32, f32, f32, f32, f32);

s32 func_801E3314(s32 arg0, s32 arg1) {
    f32 a = D_801E8C14;
    f32 b = D_801E8C18;
    f32 c = D_801E8C1C;
    f32 d = D_801E8C20;
    if (D_8038C17C(0.0f, D_801E8C24, a, b, c, a, b, c, d, 14.0f, D_801E8C28, d, 14.0f, D_801E8C2C, 20.0f, 35.0f) != 0) {
        D_8038C158();
        return 0x1C;
    }
    return 0x1B;
}
