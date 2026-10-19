#include "context.h"

extern f32 D_801EA040;
extern f32 D_801EA044;
extern f32 D_801EA048;
extern f32 D_801EA04C;
extern f32 D_801EA050;
extern f32 D_801EA054;
extern f32 D_801EA058;
extern f32 D_801EA05C;
extern f32 D_801EA060;
extern f32 D_801EA064;

s32 func_801E1F9C(s32 arg0, s32 arg1) {
    f32 x = 41.5f;
    if (D_8038C17C(0.0f, D_801EA040, -9.1f, 3.4f,
                   D_801EA044, D_801EA048, D_801EA04C, D_801EA050,
                   D_801EA054, D_801EA058, D_801EA05C, D_801EA060,
                   11.0f, D_801EA064, x, x) != 0) {
        return 8;
    }
    return 7;
}
