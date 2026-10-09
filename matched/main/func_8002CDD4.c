#include "context.h"

extern s32 func_80030480(void *, void *, void *, s32);
extern s32 func_80034A10(s32, s32, s32, s32, s32);
extern u8 func_8002F010[];
extern u8 func_8002F6BC[];

void func_8002CDD4(void *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_80030480(arg0, func_8002F6BC, func_8002F010, 0);
    ((s32 *)arg0)[5] = func_80034A10(0, 0, arg2, 1, 0x20);
    ((s32 *)arg0)[6] = func_80034A10(0, 0, arg2, 1, 0x20);
    ((s32 *)arg0)[12] = arg1((u8 *)arg0 + 0x34);
    ((s32 *)arg0)[15] = 0;
    ((s32 *)arg0)[16] = 1;
    ((s32 *)arg0)[17] = 0;
}
