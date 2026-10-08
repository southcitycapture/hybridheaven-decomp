#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801D271C(s32);

s32 func_801E6F9C(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200009, 0, 0, 5.0f);
    return 0x1F;
}
