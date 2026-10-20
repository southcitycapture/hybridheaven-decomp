#include "context.h"

extern f32 D_801E8644;
extern f32 D_801E8648;
extern f32 D_801E864C;
extern f32 D_801E8650;
extern f32 D_801E8654;
extern f32 D_801E8658;
extern f32 D_801E865C;
extern f32 D_801E8660;

s32 func_801E23D4(s32 arg0, s32 arg1) {
    f32 a = D_801E8644;
    f32 b = D_801E8648;
    if (D_8038C17C(0.0f, D_801E864C, 0x413E6666, 0xBF000000, D_801E8650, D_801E8654, 4.0f, D_801E8658, -25.0f, a, D_801E865C, D_801E8660, a, 34.0f, b, b) != 0) {
        D_8038C158();
        return 0xC;
    }
    return 0xB;
}
