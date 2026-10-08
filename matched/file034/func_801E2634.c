#include "context.h"

extern f32 D_801E94C4;
extern f32 D_801E94C8;
extern f32 D_801E94CC;
extern f32 D_801E94D0;

s32 func_801E2634(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCF8500) != 0) {
        func_8038BD50(D_801E94C4, D_801E94C8, 294.1f);
        D_8038BD88(D_801E94CC, D_801E94D0, 303.2f);
        return 0x1C;
    }
    return 0x1B;
}
