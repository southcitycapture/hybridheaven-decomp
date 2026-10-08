#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B2D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024B758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024BC80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024BDE8.s")


typedef struct func_8024BE88_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024BE88_Struct;

extern s32 func_80133A24(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_800058DC(void *, void *);
extern void func_8024BEF0(void);

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
extern void func_8024BFEC(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024BFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C2F4.s")


extern s32 func_8015105C(s32);
extern void func_8024C350(void);
extern s32 D_8025A2D4;
extern s32 D_8025A2D8;

void func_8024C300(s32 arg0, s32 arg1) {
    D_8025A2D4 = func_8015105C(0x30);
    D_8025A2D8 = func_8015105C(0x141);
    func_800058DC((void *) arg0, (void *) func_8024C350);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C350.s")

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

extern struct func_8024C5B4_Struct D_801BBBF0;
extern f32 D_80259740;
extern s32 func_801C3DC8(s32, s32, s32, s32, f32, f32, f32, f32, f32);
extern void func_8024C630(void);

void func_8024C5B4(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, D_801BBBF0.unk1E8, D_801BBBF0.unk1EC, D_801BBBF0.unk1F0, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, D_80259740, 35.0f) == 0) {
        func_800058DC(arg0, func_8024C630);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C824.s")


typedef struct func_8024C87C_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C87C_Struct;

extern s32 func_800178E8(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern void func_8024C8F0(void);

void func_8024C87C(func_8024C87C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024C8F0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024C8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CA84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CDE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024CF30.s")


typedef struct func_8024D134_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024D134_Struct;

extern u8 D_80253974[];
extern void func_8024D19C(void);
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);

void func_8024D134(func_8024D134_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2D4, 0x71);
    if (func_80151790(D_8025A2D4) == 0) {
        func_8015115C(D_8025A2D4, D_80253974);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024D19C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/func_8024D19C.s")

