#include "common.h"

typedef struct func_801C1CF0_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8];
} func_801C1CF0_Struct;

extern void func_801BF680(s32, func_801C1CF0_Struct **);

s32 func_801C1CF0(s32 arg0, s32 arg1, s32 arg2) {
    func_801C1CF0_Struct *sp1C;
    s32 off;

    func_801BF680(arg0, &sp1C);
    off = arg1 * 0x18;
    return arg2 >= ((func_801C1CF0_Struct *)((u8 *)sp1C + off))->unkC;
}
