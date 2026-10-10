#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802408F0.s")


extern f32 D_80246A34;
extern f32 D_80246C60;

struct func_8024092C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_8024092C(struct func_8024092C_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    D_80246C60 = D_80246A34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240CF8.s")

extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
extern void func_800058DC(void *arg0, void *arg1);

struct func_80240DF4_Struct {
    f32 a;
    f32 b;
    f32 c;
    s16 d;
    s32 e;
    f32 f;
    s16 g;
    s16 h;
    s16 i;
};

extern f32 D_80246A58;
extern f32 D_80246A5C;
extern void func_80240E8C(void);

void func_80240DF4(void *arg0, void *arg1) {
    struct func_80240DF4_Struct buf;

    if (func_801C2FF8() != 0) {
        buf.a = D_80246A58;
        buf.b = D_80246A5C;
        buf.c = 0.0f;
        buf.d = 0x1100;
        buf.e = 0x0168003E;
        buf.f = 1.5f;
        buf.g = 0;
        buf.h = 0x5A;
        buf.i = 0x15A2;
        func_801C2F0C(6, (void *) &buf);
        func_800058DC(arg0, func_80240E8C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240E8C.s")


typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;

extern s32 func_801C3044(void);
extern void func_80020718(s32 arg0);
extern void func_80240F7C(void);

void func_80240EF8(void *arg0, void *arg1) {
    u8 pad[0x10];
    func_80240EF8_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x01680041;
        sp18.c = 3.0f;
        sp18.d = 0x14;
        func_801C2F0C(5, &sp18);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_80020718(0x153);
        func_80020718(0x154);
        func_800058DC(arg0, func_80240F7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241220.s")


s32 func_80126944(void);
s32 func_801C3B20(void);
s32 func_801C3D20(f32, f32, f32);
void func_801C3B10(s32);
void func_801C3B2C(s32);
void func_801FBB30(void);
void func_80241420(void);

void func_802413A0(void *arg0, s32 arg1) {
    if (func_80126944() == 0) {
        if (func_801C3D20(-180.0f, -90.0f, 20.0f) != 0) {
            if (func_801C3B20() == 0) {
                func_801FBB30();
                func_801C3B2C(2);
                func_801C3B10(1);
                func_800058DC(arg0, func_80241420);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802414B8.s")


struct func_80241524_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8001E978(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void func_802415B4(void);
extern s16 D_80089354;

void func_80241524(struct func_80241524_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8012C89C(arg0, 0, 0x292, 3);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
        arg0->unk3C = 0;
        func_80020718(0x153);
        func_800058DC(arg0, func_802415B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802415B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802416EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802418D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802418E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241A68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80242BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802430FC.s")


struct func_80243224_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
};

struct func_80243224_Outer {
    u8 pad[0x30];
    struct func_80243224_Inner *unk30;
};

void func_80243224(s32 arg0, struct func_80243224_Outer **arg1) {
    struct func_80243224_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C++;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D++;
}

