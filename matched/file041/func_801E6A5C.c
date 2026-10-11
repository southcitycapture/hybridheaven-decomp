#include "context.h"

extern s32 D_801E8220;
extern s32 func_801CED5C(s32);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E6A5C(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8003B, 0, 0, 5.0f);
    D_801E8220 = 0;
    func_801CED5C(1);
    return 25;
}
