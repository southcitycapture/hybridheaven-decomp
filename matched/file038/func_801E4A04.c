#include "context.h"
extern s32 D_801E6B48;
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CE274(void);

extern s32 D_801E6B4C;

s32 func_801E4A04(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005F, 0, 0, 3.0f);
        D_801E6B48 = 0;
        D_801E6B4C = 0;
        return 7;
    }
    return 6;
}
