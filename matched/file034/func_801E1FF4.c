#include "context.h"

extern f32 D_801E940C;
extern f32 D_801E9410;
extern f32 D_801E9414;
extern f32 D_801E9418;
extern f32 D_801E941C;
extern f32 D_801E9420;
extern f32 D_801E9424;
extern f32 D_801E9428;

s32 func_801E1FF4(s32 arg0, s32 arg1) {
    f32 pad;
    f32 sp20;
    f32 sp1C;
    f32 x;
    f32 z;
    f32 scale;
    f32 first;
    f32 middle;

    scale = 0.6f;
    x = D_801E9410 * scale;
    first = D_801E9414 + x;
    middle = D_801E9418;
    z = D_801E941C * scale;
    func_8038BD50(first, middle, D_801E9420 + z);
    D_8038BD88(D_801E9424 + x, D_801E9428, 310.0f + z);
    return 14;
}
