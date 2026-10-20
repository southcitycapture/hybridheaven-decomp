#include "context.h"
extern void func_801C7A74(void *arg0);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void D_8038C158(void);
extern f32 D_801E5070;
extern f32 D_801E5074;
extern f32 D_801E5078;
extern f32 D_801E507C;
extern f32 D_801E5080;
extern f32 D_801E5084;
extern f32 D_801E5088;
extern f32 D_801E508C;
extern f32 D_801E5090;

s32 func_801E2498(s32 arg0, s32 arg1) {
    f32 a = D_801E5070;
    f32 b = D_801E5074;
    f32 c = D_801E5078;
    if (D_8038C17C(0.0f, 3.0f, 60.0f, -1.9f, D_801E507C, D_801E5080, D_801E5084, 20.0f, a, b, 48.0f, a, b, D_801E5088, c, c) != 0) {
        f32 *p = (f32 *)&D_801E5200;
        p[1] = 50.0f;
        p[2] = 50.0f;
        p[0] = 40.0f;
        p[3] = 0.5f;
        p[5] = D_801E508C;
        p[6] = D_801E5090;
        func_801C7A74(p);
        D_8038C158();
        return 0xA;
    }
    return 9;
}
