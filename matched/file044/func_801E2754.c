#include "context.h"

extern f32 D_801EDC5C;
extern f32 D_801EDC60;
extern f32 D_801EDC64;
extern f32 D_801EDC68;

s32 func_801E2754(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EDC5C);
    func_8038BD50(D_801EDC60, D_801EDC64, 0x420D999A);
    D_8038BD88(D_801EDC68, 7.5f, 0x40600000);
    return 0x24;
}
