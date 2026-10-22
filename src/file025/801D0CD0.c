#include "common.h"


extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D0D90();
extern s32 D_801DB084;
extern s32 D_801DB088;
extern s32 D_801DB0A8;
extern s32 D_801DB0B0;
extern s32 D_801E1330;
extern s32 D_801E1334;

void func_801D0CD0(s32 arg0, s32 arg1) {
    D_801E1330 = arg0;
    D_801DB084 = 0;
    D_801DB088 = 0;
    D_801DB0A8 = 1;
    D_801E1334 = 0;
    D_801DB0B0 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x141, 0, 4, (void *) func_801D0D90);
}


struct func_801D0D90_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_800058DC(void *arg0, void *arg1);
extern void func_8012D844(void *arg0, s32 arg1, s32 arg2);
extern void func_8012D894(void *arg0, s32 arg1, s32 arg2);
extern void func_801D0DFC();

void func_801D0D90(struct func_801D0D90_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D0DFC);
        return;
    }
    func_800058DC(arg0, func_801D0D90);
}

extern s32 D_801DB0A0;
extern s32 D_801DB0A4;

typedef struct func_801D0DFC_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    s32 unk28;
    u16 unk2C;
} func_801D0DFC_StructData;
typedef struct func_801D0DFC_StructObj {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D0DFC_StructData *unk2C;
    s32 unk30;
} func_801D0DFC_StructObj;
typedef struct func_801D0DFC_StructSource {
    u16 *unk0;
    s32 *unk4;
} func_801D0DFC_StructSource;
typedef struct func_801D0DFC_StructGlobal {
    u8 pad0[0x984];
    func_801D0DFC_StructSource *unk984;
} func_801D0DFC_StructGlobal;
extern func_801D0DFC_StructGlobal D_80171CF0;
extern u8 D_801DB08C[];
extern func_801D0DFC_StructObj *D_801DB09C;
extern func_801D0DFC_StructObj *func_80005FAC(void *, s32, void *);
extern void func_801D0F74(void);
extern u8 D_801D0DFC[];

void func_801D0DFC(func_801D0DFC_StructObj *arg0, func_801D0DFC_StructObj *arg1) {
    func_801D0DFC_StructData *temp_a0;
    func_801D0DFC_StructObj *temp_v0;

    if (arg0->unk24 != 0) {
        if (D_801DB0A0 != 0) {
            temp_v0 = func_80005FAC(arg0, arg1->unk30, D_801DB08C);
            D_801DB09C = temp_v0;
            D_801DB09C->unk2C->unk28 = *D_80171CF0.unk984->unk4;
            D_801DB09C->unk2C->unk0 = *D_80171CF0.unk984->unk0;
            D_801DB09C->unk2C->unk2C = D_80171CF0.unk984->unk0[1];
            D_801DB09C->unk2C->unk4 = 0.0f;
            D_801DB09C->unk2C->unk8 = 0.0f;
            D_801DB09C->unk2C->unkC = 0.0f;
            D_801DB09C->unk2C->unk12 = 0;
            D_801DB09C->unk2C->unk18 = 10.0f;
            D_801DB09C->unk2C->unk1C = 10.0f;
            D_801DB09C->unk2C->unk20 = 10.0f;
            temp_a0 = D_801DB09C->unk2C;
            temp_a0->unk24 |= 0x40015;
            D_801DB09C->unk22 = D_801DB0A4;
        } else {
            D_801DB09C = NULL;
            D_801DB0A4 = 0;
        }
        func_800058DC(arg0, func_801D0F74);
        return;
    }
    func_800058DC(arg0, D_801D0DFC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D0F74.s")



void func_801D11AC(s32 arg0) {
    D_801DB0A0 = arg0;
}



void func_801D11B8(s32 arg0) {
    D_801DB0A4 = arg0;
}



s32 func_801D11C4(void) {
    return D_801DB088 != 0;
}



s32 func_801D11D4(void) {
    if (D_801DB088 != 0) {
        return 0;
    }
    if (D_801DB084 != 0) {
        return 0;
    }
    return D_801DB0A8;
}

extern u8 D_801E1338;

u8 *func_801D1214(void) {
    return &D_801E1338;
}


struct func_801D1220_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1220_Struct D_801E1348;

s32 func_801D1220(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1348.unk0) {
        return 0;
    }
    return D_801E1348.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D1258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D12B8.s")

