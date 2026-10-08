#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CED5C(s32 a0);

s32 func_801E45D4(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x02A8002C, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0xD;
}
