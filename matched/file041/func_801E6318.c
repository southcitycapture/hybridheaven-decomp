#include "common.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CED5C(s32);
extern s32 D_801E8220;

s32 func_801E6318(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8003C, 0, 0, 30.0f);
    D_801E8220 = 0;
    func_801CED5C(1);
    return 0xA;
}
