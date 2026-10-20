#include "context.h"
extern f32 D_801E8938;
extern f32 D_801E893C;
extern f32 D_801E8940;
extern f32 D_801E8944;
extern f32 D_801E8948;
extern f32 D_801E894C;
extern f32 D_801E8950;
extern f32 D_801E8954;
extern f32 D_801E8958;
extern f32 D_801E895C;
extern f32 D_801E8960;

s32 func_801E1F74(s32 arg0, s32 arg1) {
    f32 a = D_801E8938;
    if (func_8038BEF8(0.0f, D_801E893C, -6.3f, a, D_801E8940, -9.0f, a, D_801E8944, D_801E8948, D_801E894C, 0.0f, D_801E8950, 12.0f, D_801E8954) != 0) {
        func_8038BE98(D_801E8958);
        func_8038BD50(-27.0f, D_801E895C, 17.9f);
        D_8038BD88(3.5f, D_801E8960, 3.5f);
        func_801CC470(1, 0x03480083, 0, 1, 1.0f);
        return 6;
    }
    return 5;
}
