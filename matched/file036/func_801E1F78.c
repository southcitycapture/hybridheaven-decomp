#include "common.h"

extern void D_8038C158(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1F78(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 59.0f, 13.2f, 10.0f, 57.7999992f, 13.3000002f, 9.60000038f, 47.0999985f, 15.5f, 46.5999985f, 45.9000015f, 15.6000004f, 46.2000008f) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}
