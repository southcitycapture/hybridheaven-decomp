#include "context.h"

extern f32 D_801E8A54;
extern f32 D_801E8A58;
extern f32 D_801E8A5C;
extern f32 D_801E8A60;
extern f32 D_801E8A64;
extern f32 D_801E8A68;

s32 func_801E27B0(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -23.3f, -2.8f, D_801E8A54, -32.0f, D_801E8A58, D_801E8A5C, 3.5f, D_801E8A60, 3.5f, 3.5f, D_801E8A64, 5.0f) != 0) {
        func_8038BE98(D_801E8A68);
        func_8038BED4();
        return 0xF;
    }
    return 0xE;
}
