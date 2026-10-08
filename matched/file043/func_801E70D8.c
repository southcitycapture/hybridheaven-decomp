#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CED5C(s32);

s32 func_801E70D8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80049, 0, 0, 30.0f);
    func_801CED5C(1);
    return 0x46;
}
