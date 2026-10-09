#include "context.h"
extern s32 D_801E7144;
extern struct func_801E4434_Struct *func_801BF6B0(s32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4780(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xF) {
        func_801CC4D8(0, 0x01680040, 0, 0, 20.0f);
        D_801E7144 = 0;
        return 0x16;
    }
    return 0x15;
}
