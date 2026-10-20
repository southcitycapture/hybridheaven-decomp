#include "context.h"

extern s16 D_80089356;

typedef struct func_80000ED0_Struct {
    u8 pad[0x898];
    s32 unk898;
    s32 unk89C;
} func_80000ED0_Struct;

typedef struct func_80000ED0_StructInput {
    u8 pad[8];
    u32 unk8;
} func_80000ED0_StructInput;

void func_80000ED0(func_80000ED0_Struct *arg0, void *arg1, func_80000ED0_StructInput *arg2) {
    s32 temp_a0;
    u32 temp_t1;
    u32 temp_v0;

    if (arg2->unk8 & 0x40) {
        if ((D_80089356 == 0) || (temp_v0 = arg0->unk898, temp_v0 == 2)) {
            arg0->unk898++;
            if ((u32)arg0->unk898 >= 3U) {
                arg0->unk898 = 0;
            }
        } else {
            arg0->unk898 = temp_v0 ^ 1;
        }
        temp_a0 = func_800267F0(1);
        arg0->unk89C = arg0->unk89C + 1;
        func_800267F0(temp_a0);
    }
    func_80026300(arg1, arg2, 1);
}
