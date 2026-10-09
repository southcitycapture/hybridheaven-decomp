#include "context.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CED5C(s32 a0);

s32 func_801E6EC4(s32 arg0, s32 arg1) {
    func_801CED5C(1);
    func_801CC4D8(1, 0x02A80046, 0, 0, 5.0f);
    return 0x41;
}
