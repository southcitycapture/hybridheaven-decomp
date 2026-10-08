#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801D271C(s32 a0);

s32 func_801F8A10(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200009, 0, 0, 5.0f);
    func_801D271C(1);
    return 0x20;
}
