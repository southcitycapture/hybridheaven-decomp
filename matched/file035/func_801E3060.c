#include "context.h"

extern f32 D_801E8BB4;
extern f32 D_801E8BB8;
extern f32 D_801E8BBC;
extern f32 D_801E8BC0;
extern f32 D_801E8BC4;
extern f32 D_801E8BC8;
extern f32 D_801E8BCC;
extern f32 D_801E8BD0;

s32 func_801E3060(s32 arg0, s32 arg1) {
    f32 temp = D_801E8BB4;

    if (D_8038C17C(0.0f, D_801E8BB8, 0x400CCCCD, 0x40B00000,
                   temp, 3.0f, 6.0f, temp, -1.0f,
                   D_801E8BBC, 980.0f, D_801E8BC0, D_801E8BC4,
                   D_801E8BC8, D_801E8BCC, D_801E8BD0) != 0) {
        D_8038C158();
        func_801C7B30(0);
        return 0x19;
    }
    return 0x18;
}
