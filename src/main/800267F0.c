#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800267F0/func_800267F0.s")


struct func_80026890_Struct {
    struct func_80026890_Struct *unk0;
    struct func_80026890_Struct *unk4;
};

void func_80026890(struct func_80026890_Struct *arg0) {
    struct func_80026890_Struct *temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = arg0->unk4;
    }
    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = arg0->unk0;
    }
}


struct func_800268C0_Struct {
    struct func_800268C0_Struct *unk0;
    struct func_800268C0_Struct *unk4;
};

void func_800268C0(struct func_800268C0_Struct *arg0, struct func_800268C0_Struct **arg1) {
    struct func_800268C0_Struct *temp_v0;

    arg0->unk0 = *arg1;
    arg0->unk4 = (struct func_800268C0_Struct *) arg1;
    temp_v0 = *arg1;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = arg0;
    }
    *arg1 = arg0;
}


extern void func_80034F60(void);
extern s32 D_800498F0;

void func_800268E4(void) {
    if (D_800498F0 != 0) {
        func_80034F60();
        D_800498F0 = 0;
    }
}


extern void func_8002C1D0();

void func_8002691C(s32 arg0) {
    if (D_800498F0 == 0) {
        D_800498F0 = arg0;
        func_8002C1D0();
    }
}

