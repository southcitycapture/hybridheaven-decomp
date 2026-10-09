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


extern void func_8002C1D0(void);

void func_8002691C(s32 arg0) {
    if (D_800498F0 == 0) {
        D_800498F0 = arg0;
        func_8002C1D0();
    }
}


struct func_80026950_Struct1 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u8 pad[2];
    s32 unkC;
    s32 unk10;
};

struct func_80026950_Struct5 {
    u8 pad[8];
    void (*unk8)(void *, s32, void *);
};

struct func_80026950_Struct4 {
    u8 pad0[0xC];
    struct func_80026950_Struct5 *unkC;
    u8 pad1[0xC8];
    s32 unkD8;
};

struct func_80026950_Struct3 {
    u8 pad[8];
    struct func_80026950_Struct4 *unk8;
};

struct func_80026950_Struct2 {
    u8 pad[0x1C];
    s32 unk1C;
};

void *func_8002C6A0();                              /* extern */
s32 func_8002C7CC(void *, s32);                     /* extern */

void func_80026950(struct func_80026950_Struct2 *arg0, struct func_80026950_Struct3 *arg1, s16 arg2, s32 arg3) {
    struct func_80026950_Struct1 *temp_v0;

    if (arg1->unk8 != NULL) {
        temp_v0 = func_8002C6A0();
        if (temp_v0 != NULL) {
            temp_v0->unk4 = arg0->unk1C + arg1->unk8->unkD8;
            temp_v0->unk8 = 0xB;
            temp_v0->unkC = arg2;
            temp_v0->unk10 = func_8002C7CC(arg0, arg3);
            temp_v0->unk0 = 0;
            arg1->unk8->unkC->unk8(arg1->unk8->unkC, 3, temp_v0);
        }
    }
}

