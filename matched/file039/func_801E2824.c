#include "context.h"

extern f32 D_801EB144;
extern f32 D_801EB148;
extern f32 D_801EB14C;
extern f32 D_801EB150;
extern f32 D_801EB154;
extern f32 D_801EB158;
extern f32 D_801EB15C;
extern f32 D_801EB160;
extern f32 D_801EB164;

s32 func_801E2824(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0xC1ED999A, 0xC0FCCCCD,
                   D_801EB144, -29.5f, D_801EB148, D_801EB14C,
                   D_801EB150, D_801EB154, D_801EB158, D_801EB15C,
                   D_801EB160, D_801EB164, 31.0f, 31.0f) != 0) {
        D_8038C158();
        return 0x23;
    }
    return 0x22;
}
