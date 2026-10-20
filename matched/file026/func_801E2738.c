#include "context.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801FBD48;
extern f32 D_801FBD4C;
extern f32 D_801FBD50;
extern f32 D_801FBD54;
extern f32 D_801FBD58;
extern f32 D_801FBD5C;
extern f32 D_801FBD60;
extern f32 D_801FBD64;
extern f32 D_801FBD68;

s32 func_801E2738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C27B60) != 0) {
        if (func_801C0B8C(0x02CA1C80) != 0) {
            return 5;
        }
    } else {
        D_8038C17C(0.0f, 3.0f, -18.1f, 20.5f, D_801FBD48, -19.0f, D_801FBD4C, D_801FBD50, D_801FBD54, D_801FBD58, D_801FBD5C, D_801FBD60, D_801FBD64, D_801FBD68, 25.5f, 21.0f);
    }
    return 4;
}
