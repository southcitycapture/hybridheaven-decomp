#include "common.h"

typedef struct func_80388444_Struct {
    u8 pad[0xB0];
    s32 unkB0;
} func_80388444_Struct;

extern void func_80005700(void *);
extern void func_80126E88(s32, void *);

void func_80388444(func_80388444_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_80126E88(0x12F, arg0);
        func_80005700(arg0);
    }
}
