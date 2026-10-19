#include "context.h"

extern f32 D_801E8734;
extern f32 D_801E8738;
extern f32 D_801E873C;
extern f32 D_801E8740;
extern f32 D_801E8744;
extern f32 D_801E8748;
extern f32 D_801E874C;
extern f32 D_801E8750;
extern f32 D_801E8754;
extern f32 D_801E8758;

s32 func_801E29B0(s32 arg0, s32 arg1) {
    f32 tmp = D_801E8734;
    if (D_8038C17C(0.0f, 2.0f, (s32)0xC11CCCCD, (s32)0xC02CCCCD, D_801E8738, -21.0f, D_801E873C, D_801E8740, D_801E8744, D_801E8748, D_801E874C, D_801E8750, D_801E8754, D_801E8758, tmp, tmp) != 0) {
        func_8038BED4();
        return 0x14;
    }
    return 0x13;
}
