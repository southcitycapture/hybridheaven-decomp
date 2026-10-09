#include "common.h"


struct func_8002D000_Struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[0x4];
    s32 *unk1C;
};

s32 func_8002D000(struct func_8002D000_Struct *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = arg0->unk1C;
    if (arg1 == 2) {
        temp_v0[arg0->unk14] = arg2;
        arg0->unk14 = arg0->unk14 + 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D150.s")


s32 func_8002D490(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        *arg0 = arg2;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002DABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002DC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002DD00.s")

