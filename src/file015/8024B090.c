#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B2D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B758.s")


typedef struct func_8024BC80_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
} func_8024BC80_StructB;

typedef struct func_8024BC80_StructA {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024BC80_StructB *unk30;
} func_8024BC80_StructA;

typedef struct func_8024BC80_Arg0 {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024BC80_Arg0;

extern void func_800058DC(void *, void *);
void func_8024C2F4(s32 arg0, s32 arg1);
void func_8024BDE8(void *arg0, void **arg1);
extern s32 func_80126CC0(void *, void *);
extern u8 func_80126EAC[];
typedef struct func_8024BC80_Struct4 {
    s32 w[4];
} func_8024BC80_Struct4;
extern func_8024BC80_Struct4 D_80164F40;
extern u8 D_8017AD28[];
extern u8 D_801BC3D8[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);

void func_8024BC80(func_8024BC80_Arg0 *arg0, func_8024BC80_StructA **arg1) {
    func_8024BC80_Struct4 sp;
    func_8024BC80_StructB *tb;
    f32 t;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x7D) != 0) {
            func_800058DC(arg0, func_8024C2F4);
            return;
        }
        sp = D_80164F40;
        sp.w[1] = 0x80000C00;
        func_80005E44(arg0, &sp);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x260, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = 1.0f;
        tb = (*arg1)->unk30;
        t = tb->unk20;
        tb->unk1C = t;
        (*arg1)->unk30->unk18 = t;
        (*arg1)->unk30->unk4 = -600.0f;
        (*arg1)->unk30->unk8 = 0.0f;
        (*arg1)->unk30->unkC = 0.0f;
        (*arg1)->unk30->unk12 = 0;
        (*arg1)->unk22 = 0;
        arg0->unk3C = 0;
        D_801BC3D8[0x3BA] = 1;
        func_800058DC(arg0, func_8024BDE8);
    }
}

extern s32 func_80133A24(s32);
extern struct func_8024C5B4_Struct D_801BBBF0;
extern void func_8024BE88();

extern s32 func_80005670(void *, void *);
extern void func_801339D0(s32);
extern void func_801FBB30(void);
extern s32 D_8025A2D0;
extern u8 D_80253954[];

void func_8024BDE8(void *arg0, void **arg1) {
    if (func_80133A24(0x7C) != 0) {
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2D0 = func_80005670(arg0, D_80253954);
        *((u8 *)*arg1 + 0x22) = 1;
        *(f32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x40) = 0.0f;
        *(f32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x48) = 0.0f;
        *(u16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024BE88);
    }
}


typedef struct func_8024BE88_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024BE88_Struct;

extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_8024BEF0();

void func_8024BE88(func_8024BE88_Struct *arg0, s32 arg1) {
    s32 flag;

    if (func_80133A24(0x7D) != 0) {
        flag = arg0->unk3C++ >= 5;
        if (flag != 0) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_800058DC(arg0, func_8024BEF0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024BEF0.s")


typedef struct func_8024BF80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024BF80_Struct;

extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, func_8024BF80_Struct *);
extern void func_8024BFEC();

void func_8024BF80(s32 arg0, s32 arg1) {
    func_8024BF80_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x0348007A;
        sp18.unkC = 0x14;
        sp18.unk8 = 10.0f;
        func_801C2F0C(5, &sp18);
        func_800058DC((void *) arg0, (void *) func_8024BFEC);
    }
}


extern void func_8024C028();

void func_8024BFEC(s32 arg0, s32 arg1) {
    if (func_80133A24(115) != 0) {
        func_800058DC(arg0, func_8024C028);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C028.s")


void func_8024C2F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern s32 func_8015105C(s32);
extern void func_8024C350();
extern s32 D_8025A2D4;
extern s32 D_8025A2D8;

void func_8024C300(s32 arg0, s32 arg1) {
    D_8025A2D4 = func_8015105C(0x30);
    D_8025A2D8 = func_8015105C(0x141);
    func_800058DC((void *) arg0, (void *) func_8024C350);
}


extern s32 func_801517CC(s32);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_80151430(s32, s32);
extern void func_8015115C(s32, void *);
extern void func_8024C3D8();
extern u8 D_80253968[];

typedef struct func_8024C350_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C350_Struct;

void func_8024C350(func_8024C350_Struct *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2D4) != 0) {
        func_801512CC(D_8025A2D4, 0x42DF999A, 0xC3020000, 0xC3554CCD);
        func_80151430(D_8025A2D4, 0x1000);
        func_8015115C(D_8025A2D4, D_80253968);
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_8024C3D8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C3D8.s")


struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};

extern f32 D_80259740;
extern s32 func_801C3DC8(s32, s32, s32, s32, f32, f32, f32, f32, f32);
extern void func_8024C630();

void func_8024C5B4(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, D_801BBBF0.unk1E8, D_801BBBF0.unk1EC, D_801BBBF0.unk1F0, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, D_80259740, 35.0f) == 0) {
        func_800058DC(arg0, func_8024C630);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C630.s")


extern f32 D_80259774;
extern f32 D_80259778;
extern void func_8024C87C();

typedef struct func_8024C824_Inner {
    u8 pad[0x4];
    f32 unk4;
    u8 pad2[0x4];
    f32 unkC;
} func_8024C824_Inner;

typedef struct func_8024C824_Mid {
    u8 pad[0x2C];
    func_8024C824_Inner *unk2C;
} func_8024C824_Mid;

typedef struct func_8024C824_Outer {
    u8 pad[0xE0];
    func_8024C824_Mid *unkE0;
} func_8024C824_Outer;

void func_8024C824(s32 arg0, s32 arg1) {
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unk4 = D_80259774;
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unkC = D_80259778;
    func_800058DC((void *) arg0, (void *) &func_8024C87C);
}


typedef struct func_8024C87C_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C87C_Struct;

extern s32 func_800178E8(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern void func_8024C8F0();

void func_8024C87C(func_8024C87C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024C8F0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C8F0.s")


typedef struct func_8024CA84_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024CA84_Struct;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8024CBB0(void);
extern u8 D_802595B8[];
extern f32 D_8025978C;
extern f32 D_80259790;
extern f32 D_80259794;
extern f32 D_80259798;
extern f32 D_8025979C;
extern f32 D_802597A0;
extern f32 D_802597A4;
extern f32 D_802597A8;

void func_8024CA84(func_8024CA84_Struct *arg0, s32 arg1) {
    func_8011AAF4(D_802595B8, 0x295, arg0, 0, 2, D_8025978C, D_80259790, D_80259794, D_80259798, D_8025979C, D_802597A0, D_802597A4, D_802597A8, 0.0f, 35.0f, -1, -1);
    if (arg0->unk90++ >= 0x28) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CBB0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CBB0.s")

typedef struct func_8024CDE8_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_8024CDE8_Struct;
extern void func_800179B0(void *);
extern void func_8024CF30();
extern u8 D_80259690[];
extern u8 D_80253980[];
extern u8 D_80253E2C[];
extern f32 D_802597E8;
extern f32 D_802597EC;
extern f32 D_802597F0;
extern f32 D_802597F4;
extern f32 D_802597F8;
extern f32 D_802597FC;

void func_8024CDE8(func_8024CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x3C) {
        *(f32 *)&D_801BBBF0.unk1E8 = D_802597E8;
        *(f32 *)&D_801BBBF0.unk1EC = D_802597EC;
        *(f32 *)&D_801BBBF0.unk1F0 = D_802597F0;
        D_801BBBF0.unk1F4 = D_802597F4;
        D_801BBBF0.unk1F8 = D_802597F8;
        D_801BBBF0.unk1FC = D_802597FC;
        func_8011AAF4(D_80259690, 0x2E8, arg0, 0, 1, 0.0f, *(f32 *)&D_801BBBF0.unk1E8, *(f32 *)&D_801BBBF0.unk1EC, *(f32 *)&D_801BBBF0.unk1F0, 0.0f, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253E2C);
        func_8015115C(D_8025A2D4, D_80253980);
        arg0->unk92 = 0;
        func_80006214(arg0);
        func_800058DC(arg0, func_8024CF30);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CF30.s")


typedef struct func_8024D134_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024D134_Struct;

extern u8 D_80253974[];
extern void func_8024D19C();
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);

void func_8024D134(func_8024D134_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2D4, 0x71);
    if (func_80151790(D_8025A2D4) == 0) {
        func_8015115C(D_8025A2D4, D_80253974);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024D19C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024D19C.s")

