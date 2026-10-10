#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D230.s")


struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_8024D384(void);
extern struct func_8024D2A4_Top D_801BBBF0;
extern u8 D_802541F4[];
extern u8 D_802542B0[];
extern s32 D_8025A2E0;

void func_8024D2A4(void *arg0, void *arg1) {
    if ((func_801C3D20(540.0f, -60.0f, 25.0f) != 0) || (func_801C3D20(560.0f, -100.0f, 25.0f) != 0)) {
        func_80133980(0x7E);
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2E0 = func_80005670(arg0, D_802541F4);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800179B0(D_802542B0);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024D384);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D424.s")


struct func_8024D564_Inner {
    u8 pad[0x12];
    s16 unk12;
};
struct func_8024D564_Struct {
    u8 pad[0x2C];
    struct func_8024D564_Inner *unk2C;
};
extern s16 func_801FD284(s16, s32, s32);
extern void func_8024D5DC(void);
extern struct func_8024D564_Struct *D_801BBCD0;

void func_8024D564(void *arg0, void *arg1) {
    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, 0, 0x3D4CCCCD);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024D5DC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D8A4.s")

/* context.h declaration lines this function uses, needed before the file's own declarations. */
extern s32 D_8025A2E4;
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_8024DA8C();

extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern u8 D_80254208[];

void func_8024DA04(void *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2E4) != 0) {
        func_801512CC(D_8025A2E4, 0x4413B333, 0x43B90000, 0x42DD6666);
        func_80151430(D_8025A2E4, 0x1000);
        func_8015115C(D_8025A2E4, D_80254208);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, &func_8024DA8C);
    }
}


struct func_8024DA8C_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern s32 func_80133A24(s32);
extern void func_801511C4(s32, void *, s32);
extern void func_8024DB10(void);
extern u8 D_80254214[];

void func_8024DA8C(struct func_8024DA8C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_801511C4(D_8025A2E4, D_80254214, 0x14);
        func_801512CC(D_8025A2E4, 0x4413B333, 0xC3020000, 0x42DD6666);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DB10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DB10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DD24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DDA0.s")


struct func_8024DF34_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8024DFA4(void);
extern u8 D_802545D4[];
extern u8 D_8025422C[];

void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1C) {
        func_800179B0(D_802545D4);
        func_8015115C(D_8025A2E4, D_8025422C);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DFA4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DFA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024E2BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024E324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024E3B0.s")

