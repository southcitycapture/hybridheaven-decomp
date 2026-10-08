#include "common.h"

extern void func_801CF450(s32 arg0);
extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801C0D04(s32 arg0, s32 arg1);
extern u8 func_801DAAF0[];
extern s32 D_801E8DF8;

s32 func_801E59EC(s32 arg0, s32 arg1) {
    func_801CF450(1);
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1CF8;
    func_801C0D04(4, 1);
    D_801E8DF8 = 0;
    return 0xB;
}
