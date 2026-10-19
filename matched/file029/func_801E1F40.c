#include "context.h"

extern f32 D_801E6918;
extern f32 D_801E691C;
extern f32 D_801E6920;
extern f32 D_801E6924;
extern f32 D_801E6928;
extern f32 D_801E692C;
extern f32 D_801E6930;
extern f32 D_801E6934;
extern f32 D_801E6938;
extern f32 D_801E693C;

s32 func_801E1F40(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 8.7f, 3.4f,
            D_801E6918, D_801E691C, D_801E6920, D_801E6924,
            D_801E6928, D_801E692C, D_801E6930, D_801E6934,
            D_801E6938, D_801E693C) != 0) {
        return 6;
    }
    return 5;
}
