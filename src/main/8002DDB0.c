#include "common.h"


struct func_8002DDB0_Struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[0x4];
    s32 *unk1C;
};

s32 func_8002DDB0(struct func_8002DDB0_Struct *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = arg0->unk1C;
    if (arg1 == 2) {
        temp_v0[arg0->unk14] = arg2;
        arg0->unk14 = arg0->unk14 + 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DDB0/func_8002DDE0.s")

