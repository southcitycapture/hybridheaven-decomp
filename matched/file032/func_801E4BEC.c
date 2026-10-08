#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CED5C(s32);

s32 func_801E4BEC(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x02A8002E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x21;
}
