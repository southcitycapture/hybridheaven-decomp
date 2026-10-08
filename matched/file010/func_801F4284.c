#include "common.h"

typedef struct func_801F4284_SubStruct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F4284_SubStruct;

typedef struct func_801F4284_Struct {
    u8 pad0[0x38];
    func_801F4284_SubStruct *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
} func_801F4284_Struct;

void func_801F4284(func_801F4284_Struct *arg0) {
    func_801F4284_SubStruct *temp_v0;

    temp_v0 = arg0->unk38;
    arg0->unk94 = (s16) (s32) ((f64) (f32) temp_v0->unk6 / 10.0);
    arg0->unk96 = (s16) (s32) ((f64) (f32) temp_v0->unkA / 10.0);
}
