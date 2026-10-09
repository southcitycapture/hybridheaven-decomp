#include "context.h"
extern s32 D_801EA7AC;
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D51F0(s32 a0);

s32 func_801E6EA8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0348001D, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 9;
}
