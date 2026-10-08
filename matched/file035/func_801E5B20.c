#include "common.h"

typedef struct func_801E5B20_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5B20_Struct;

extern func_801E5B20_Struct *func_801BF6B0(s32 arg0);
extern void func_801CC470(s32 arg0, u32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801CE3D0(s32 arg0);
extern s32 D_801E85F4;

s32 func_801E5B20(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 8) {
        func_801CC470(0, 0x03480056, 0, 0, 4.0f);
        func_801CE3D0(1);
        D_801E85F4 = 0;
        return 0xA;
    }
    return 9;
}
