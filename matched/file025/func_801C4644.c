#include "context.h"

extern void *func_80005670(void *, void *);
extern u8 D_801DA354[];

typedef struct func_801C4644_Struct {
    u8 pad0[0x90];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    u16 uA8;
    u16 uAA;
    u16 uAC;
} func_801C4644_Struct;

s32 func_801C4644(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    func_801C4644_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA354);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->f90 = arg0;
    temp_v0->f94 = arg1;
    temp_v0->f98 = arg2;
    temp_v0->f9C = arg3;
    temp_v0->fA0 = arg4;
    temp_v0->fA4 = arg5;
    temp_v0->uA8 = 0;
    temp_v0->uAC = arg6;
    return 1;
}
