#define D_8038C17C D_8038C17C_ctx
#include "context.h"
#undef D_8038C17C

extern f32 D_801EB168;
extern f32 D_801EB16C;
extern f32 D_801EB170;
extern f32 D_801EB174;
extern f32 D_801EB178;
extern f32 D_801EB17C;
extern f32 D_801EB180;
extern f32 D_801EB184;
extern f32 D_801EB188;

extern s32 D_8038C17C(f32, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2908(s32 arg0, s32 arg1) {
    f32 v168;
    f32 v16c;
    f32 v170;
    f32 v174;

    v168 = D_801EB168;
    v16c = D_801EB16C;
    v170 = D_801EB170;
    v174 = D_801EB174;
    if (D_8038C17C(0.0f, 2.0f, v168, 0x41880000, v16c, v168, D_801EB178, v16c, v170, D_801EB17C, v174, v170, D_801EB180, v174, D_801EB184, D_801EB188) != 0) {
        D_8038C158();
        return 0x24;
    }
    return 0x23;
}
