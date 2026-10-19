#include "context.h"

extern f32 D_801E6964;
extern f32 D_801E6968;
extern f32 D_801E696C;
extern f32 D_801E6970;
extern f32 D_801E6974;
extern f32 D_801E6978;
extern f32 D_801E697C;
extern f32 D_801E6980;
extern f32 D_801E6984;
extern f32 D_801E6988;

s32 func_801E2240(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -9.2f, 38.2f,
                      D_801E6964, D_801E6968, D_801E696C, D_801E6970,
                      D_801E6974, D_801E6978, D_801E697C, D_801E6980,
                      D_801E6984, D_801E6988) != 0) {
        func_8038BED4();
        return 0xE;
    }
    return 0xD;
}
