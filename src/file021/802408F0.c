#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240C74.s")


struct func_80240C80_Inner {
    s16 pad0;
    u16 unk2;
};

struct func_80240C80_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80240C80_Inner *unk38;
};

extern s32 func_80126CC0(void *arg0, void *arg1);
extern void func_8001F74C(void *arg0);
extern void func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80240CF8(void);

void func_80240C80(void *arg0, s32 arg1) {
    struct func_80240C80_Struct *s;

    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8001F74C(arg0);
        s = arg0;
        s->unk18 = func_8012E5B0;
        s->unk20 = func_8012E6BC;
        func_8013B570(arg0, s->unk38->unk2, 2, 4, func_80240CF8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802410C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802410F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241114.s")


struct func_8024115C_Sub {
    u8 pad0[2];
    u16 unk2;
};

struct func_8024115C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_8024115C_Sub *unk38;
};

extern void func_80020744(s32);
extern void func_802411D0(void);

void func_8024115C(struct func_8024115C_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80127014) != 0) {
        arg0->unk18 = (void *)func_8012E5B0;
        arg0->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, (void *)func_802411D0);
        func_80020744(0x5C4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802411D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_8024133C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241374.s")


extern void func_8012FE50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
extern s16 D_801BBBF6;

void func_802413A8(s32 arg0, s32 arg1) {
    D_801BBBF6 = 1;
    func_8012FE50(0x1E, 0x54, 6, 1, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802413F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802414A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802414E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802416C8.s")


typedef struct func_80241730_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241730_Struct1;

typedef struct func_80241730_Struct3 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80241730_Struct3;

typedef struct func_80241730_Struct2 {
    u8 pad0[0x2C];
    func_80241730_Struct3 *unk2C;
} func_80241730_Struct2;

extern void func_800058DC(void *, void *);
extern f64 D_80256FA0;
extern void func_802417AC(void);

void func_80241730(func_80241730_Struct1 *arg0, func_80241730_Struct2 **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241730_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = D_80256FA0;
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    arg0->unk92 = 0;
    func_800058DC(arg0, func_802417AC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802417AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802417F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802418A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241DEC.s")


struct func_80241F00_Obj {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_80241F00_Mid {
    u8 pad0[0x30];
    struct func_80241F00_Obj *unk30;
};

struct func_80241F00_Arg1 {
    u8 pad0[0x14];
    struct func_80241F00_Mid *unk14;
    struct func_80241F00_Mid *unk18;
};

struct func_80241F00_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
};

void func_80241F00(struct func_80241F00_Arg0 *arg0, struct func_80241F00_Arg1 *arg1) {
    struct func_80241F00_Obj *temp_a2;
    struct func_80241F00_Obj *temp_v1;
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = (u16) (temp_v0 - 1);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        temp_a2 = arg1->unk18->unk30;
        temp_a2->unk4B = (u8) (temp_a2->unk4B - 0xC);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}


typedef struct func_80241F50_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80241F50_StructB *unk38;
} func_80241F50_Struct;

typedef struct func_80241F50_StructB {
    u8 pad0[2];
    u16 unk2;
} func_80241F50_StructB;

extern u8 func_80241FBC[];

void func_80241F50(func_80241F50_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80241FBC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_8024201C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80242044.s")



void func_802421B0(s32 arg0, s32 arg1) {
    func_80020744(7);
    func_8012FE50(0xF, 0x5A, 6, 2, 2);
}

