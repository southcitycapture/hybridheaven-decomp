#include "context.h"

struct func_801E4AF0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E4AF0_Struct *func_801BF6B0(s32 arg0);
void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);

s32 func_801E4AF0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 6) {
        func_801CC4D8(0, 0x04100029, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}
