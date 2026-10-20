#include "context.h"
extern f32 D_801E8B4C;
extern f32 D_801E8B50;
extern f32 D_801E8B54;
extern f32 D_801E8B58;
extern f32 D_801E8B5C;
extern f32 D_801E8B60;
extern f32 D_801E8B64;
extern f32 D_801E8B68;
extern f32 D_801E8B6C;
extern f32 D_801E8B70;

s32 func_801E2DA4(s32 arg0, s32 arg1) {
    f32 k = D_801E8B4C;
    if (D_8038C17C(0.0f, D_801E8B50, 0x409CCCCD, 0x40C66666, D_801E8B54, 2.0f, 5.5f, D_801E8B58, D_801E8B5C, D_801E8B60, k, D_801E8B64, D_801E8B68, k, D_801E8B6C, D_801E8B70) != 0) {
        func_8038BE98(6.0f);
        func_8038BED4();
        func_801C7B30(0);
        func_8038D28C(0x70);
        return 0x16;
    }
    return 0x15;
}
