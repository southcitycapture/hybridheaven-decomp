#include "common.h"
extern s32 D_80207908;
extern s32 func_801C0B8C(u64);
extern void func_801CCE88(s32, s32, s32, s32);


extern s32 D_8020790C;
extern s32 D_80207910;
extern s8 D_80208E34;
extern s8 D_80208E35;
extern s8 D_80208E36;
extern u8 D_80208E37;
extern u8 D_80208E38;
extern u8 D_80208E39;

s32 func_801FB994(s32 arg0, s32 arg1)
{
    if (func_801C0B8C(10800000)) {
        D_80208E34 = 4;
        D_80208E35 = 4;
        D_80208E36 = 4;
        D_8020790C = 1;
        D_80208E37 = 124;
        D_80208E38 = 124;
        D_80208E39 = 124;
        D_80207910 = 0;
        return 5;
    }
    switch ((u32)D_80207908) {
    case 0:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 3:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 6:
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 9:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 0, 0, 0);
        break;
    case 12:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 15:
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 18:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 21:
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    case 24:
        func_801CCE88(0, 255, 0, 0);
        func_801CCE88(1, 0, 0, 0);
        break;
    case 27:
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 229, 76, 0);
        break;
    default:
        break;
    }
    D_80207908++;
    D_80207908 = (u32)D_80207908 % 30U;
    return 4;
}
