#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801FBF78;
extern f32 D_801FBF7C;
extern f32 D_801FBF80;
extern f32 D_801FBF84;
extern f32 D_801FBF88;
extern f32 D_801FBF8C;
extern f32 D_801FBF90;
extern f32 D_801FBF94;
extern f32 D_801FBF98;
extern f32 D_801FBF9C;

s32 func_801E33C4(s32 arg0, s32 arg1) {
    f32 a = D_801FBF78;
    f32 b = D_801FBF7C;
    if (D_8038C17C(0.0f, 4.0f, a, 17.8f, D_801FBF80, D_801FBF84, D_801FBF88, D_801FBF8C, D_801FBF90, D_801FBF94, b, D_801FBF98, a, b, 40.0f, D_801FBF9C) != 0) {
        return 0xE;
    }
    return 0xD;
}
