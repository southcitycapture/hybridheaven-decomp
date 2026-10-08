#include "context.h"

extern f32 D_801EC518;
extern f32 D_801EC51C;
extern f32 D_801EC520;
extern f32 D_801EC524;
extern f32 D_801EC528;
extern f32 D_801EC52C;
extern f32 D_801EC530;
extern f32 D_801EC534;

s32 func_801E243C(s32 arg0, s32 arg1) {
    f32 temp;

    temp = D_801EC518;
    if (func_8038BEF8(0.0f, D_801EC51C, 67.1f, 19.4f, -8.5f, D_801EC520, temp, D_801EC524, -2.5f, D_801EC528, temp, D_801EC52C, D_801EC530, D_801EC534) != 0) {
        return 0x18;
    }
    return 0x17;
}
