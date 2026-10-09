#include "common.h"


struct func_80030480_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    s32 unk10;
};

void func_80030480(struct func_80030480_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = 0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    arg0->unkE = 0;
    arg0->unk10 = arg3;
}

