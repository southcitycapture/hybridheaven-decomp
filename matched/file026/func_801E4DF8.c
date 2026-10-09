#include "context.h"
extern void *func_801BF6B0(s32 arg0);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

extern s32 D_801FB1DC;

struct func_801E4DF8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E4DF8(s32 arg0, s32 arg1) {
    if (((struct func_801E4DF8_Struct *)func_801BF6B0(0))->unkC >= 0xB) {
        func_801CC470(0, 0x01B8000F, 0, 0x100, 5.0f);
        D_801FB1DC = 0;
        return 8;
    }
    return 7;
}
