#include "context.h"

extern f32 D_801E6CC4;
extern f32 D_801E6CC8;
extern f32 D_801E6CCC;
extern f32 D_801E6CD0;
extern f32 D_801E6CD4;
extern f32 D_801E6CD8;
extern f32 D_801E6CDC;
extern f32 D_801E6CE0;
extern f32 D_801E6CE4;

s32 func_801E2698(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;
    f32 v3;

    v0 = D_801E6CC4;
    v1 = D_801E6CC8;
    v2 = D_801E6CCC;
    v3 = D_801E6CD0;
    if (D_8038C17C(0.0f, 1.0f, v0, v1, v2, v0, v1, v2, D_801E6CD4, D_801E6CD8,
                   D_801E6CDC, -53.5f, D_801E6CE0, D_801E6CE4, v3, v3) != 0) {
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}
