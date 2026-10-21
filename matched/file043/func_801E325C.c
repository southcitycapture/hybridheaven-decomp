#include "context.h"

extern f32 D_801EA188;
extern f32 D_801EA18C;
extern f32 D_801EA190;
extern f32 D_801EA194;
extern f32 D_801EA198;

s32 func_801E325C(s32 arg0, s32 arg1) {
    f32 x;
    f32 y;

    do {
        x = D_801EA188;
        y = D_801EA18C;
    } while (0);
    if (D_8038C17C(0.0f, 8.0f, -84.0f, 8.9f,
            97.0f, D_801EA190, D_801EA194, D_801EA198,
            x, y, 116.5f,
            x, y, 116.5f, 41.5f, 41.5f) != 0) {
        return 0x38;
    }
    return 0x37;
}
