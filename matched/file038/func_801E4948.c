#include "context.h"
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CE274(void);

s32 func_801E4948(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}
