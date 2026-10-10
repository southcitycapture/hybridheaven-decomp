#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802486B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802487F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802488BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024965C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024981C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249854.s")


typedef struct func_8024990C_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024990C_Sub;

typedef struct func_8024990C_Inner {
    u8 pad[0x2C];
    func_8024990C_Sub *unk2C;
} func_8024990C_Inner;

typedef struct func_8024990C_Obj {
    u8 pad[0x5C];
    void *unk5C;
} func_8024990C_Obj;

extern void func_80010550(void *arg0, void *arg1);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80249970(void);

void func_8024990C(func_8024990C_Obj *arg0, func_8024990C_Inner **arg1) {
    void *tmp;

    tmp = arg0->unk5C;
    func_80010550(arg1, tmp);
    if (((*arg1)->unk2C)->unk4 >= 80.0f) {
        func_800058DC(arg0, func_80249970);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802499E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A3B4.s")


/* Forward declarations needed because this function sits before func_8024A434 in the file. */
struct func_8024A434_Arg;
void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1);

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024A984(void);

void func_8024A3C0(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x76) != 0) {
            func_800058DC(arg0, (void *)func_8024A984);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024A434);
    }
}


struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024A434_Arg {
    u8 pad[0x3C];
    s16 unk3C;
};

struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_80020718(s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern void *D_80253474;
extern s32 D_8025A2C0;
extern void func_8024A4EC(void);

void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_801C3D20(-380.0f, -540.0f, 40.0f) != 0) {
        func_80133980(0x76);
        func_801339D0(0x73);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        D_8025A2C0 = func_80005670(arg0, &D_80253474);
        arg0->unk3C = 0;
        func_801FBB30();
        func_80020718(7);
        func_800058DC(arg0, &func_8024A4EC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A4EC.s")


typedef struct func_8024A588_Struct {
    s16 unk00;
    s16 pad02;
    s32 unk04;
    f32 unk08;
    s16 unk0C;
    s16 pad0E;
} func_8024A588_Struct;

typedef struct func_8024A588_Obj {
    u8 pad00[0x3C];
    s16 unk3C;
} func_8024A588_Obj;

extern void func_800179B0(void *arg0);
extern void func_801C2F0C(s32 arg0, void *arg1);
extern s32 func_801C3B5C(void);
extern u8 D_802534DC[];
extern u8 func_8024A604[];

void func_8024A588(func_8024A588_Obj *arg0, s32 arg1) {
    s32 pad[4];
    func_8024A588_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk00 = 0;
        sp18.unk04 = 0x0348007A;
        sp18.unk0C = 0x14;
        sp18.unk08 = 10.0f;
        func_801C2F0C(3, &sp18);
        func_800179B0(D_802534DC);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024A604);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A990.s")


struct func_8024A9C8_Inner {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_8024A9C8_Obj {
    u8 pad[0x2C];
    struct func_8024A9C8_Inner *unk2C;
};

extern void func_8024AA38(s32 arg0, s32 arg1);

void func_8024A9C8(void *arg0, struct func_8024A9C8_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -70.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -540.0f;
    (*arg1)->unk2C->unk12 = 0x1800;
    func_800058DC(arg0, (void *) func_8024AA38);
}


typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;

s32 func_80133A24(s32);
void func_8013A1B4(s32, func_8024AA38_Struct, s32);
void func_8024AAC4(void);

extern func_8024AA38_Struct D_802534A0;
extern u8 D_80253524[];

void func_8024AA38(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_802534A0, 0xFFFFFF);
        func_800179B0(D_80253524);
        func_800058DC((void *) arg0, (void *) func_8024AAC4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AAC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AC24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ACB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ADE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024B024.s")

