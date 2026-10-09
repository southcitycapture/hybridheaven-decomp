#include "common.h"


struct func_800305D0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

void func_800305D0(struct func_800305D0_Struct *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = 0x10 - (arg1 & 0xF);
    if (temp_v0 != 0x10) {
        arg0->unk0 = arg1 + temp_v0;
    } else {
        arg0->unk0 = arg1;
    }
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    arg0->unk4 = arg0->unk0;
}

