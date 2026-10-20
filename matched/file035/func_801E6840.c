#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);

typedef struct func_801E6840_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E6840_Struct;

s32 func_801E6840(s32 arg0, s32 arg1) {
    if (((func_801E6840_Struct *)func_801BF6B0(0))->unkC >= 0xD) {
        func_801CC470(1, 0x03480083, 0, 0, 2.0f);
        func_801D631C(1);
        return 0x17;
    }
    if (func_801D62D0() != 0) {
        func_801D631C(0);
    }
    return 0x15;
}
