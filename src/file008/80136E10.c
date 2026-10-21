#include "common.h"

extern f32 D_8018DC88;
extern f32 D_8018DCF4;
extern f32 D_8018DCF8;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8018DC90;
extern f64 D_8018DC98;
extern s32 func_800058DC(void *, void *);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126CC0(s32, void *);
extern s32 func_8012C6B4(s32);
extern s32 func_80133A24(u32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];
extern u8 func_80126EAC[];
extern u8 func_80137418[];
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
extern void func_8012636C(void *, s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_8012C784(void *, s32, u32);
extern void func_80136F30();
extern void func_80137180(void *arg0, void *arg1);
extern void func_801371E0();
extern void func_801387C0(s32 arg0, s32 arg1);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


struct func_80136E10_Struct3 {
    u8 pad0[0x10];
    u32 unk10;
};

struct func_80136E10_Struct0 {
    u8 pad0[0x38];
    struct func_80136E10_Struct3 *unk38;
};

struct func_80136E10_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80136E10_Struct1 {
    u8 pad0[0x30];
    struct func_80136E10_Struct2 *unk30;
};


void func_80136E10(struct func_80136E10_Struct0 *arg0, struct func_80136E10_Struct1 **arg1) {
    f32 temp_fv0;
    struct func_80136E10_Struct2 *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, func_80136F30);
}


typedef struct func_80136F30_StructInner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
} func_80136F30_StructInner;

typedef struct func_80136F30_Struct {
    u8 pad0[0x38];
    func_80136F30_StructInner *unk38;
    u8 pad1[0x90 - 0x3C];
    s16 unk90;
} func_80136F30_Struct;

struct func_80136F90_Struct;
void func_80136F90(struct func_80136F90_Struct *arg0, void *arg1);

void func_80136F30(func_80136F30_Struct *arg0, void *arg1) {
    if (func_80133A24(arg0->unk38->unk14 >> 16) != 0) {
        arg0->unk90 = (s16) ((arg0->unk38->unk10 >> 16) & 0xFF);
        func_800058DC(arg0, func_80136F90);
    }
}


struct func_80136F90_Inner {
    u8 pad0[0x10];
    u32 unk10;
};
typedef struct func_80136F90_Pos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80136F90_Pos;
typedef struct func_80136F90_Mid {
    u8 pad0[0x30];
    func_80136F90_Pos *unk30;
} func_80136F90_Mid;
typedef struct func_80136F90_Struct {
    u8 pad0[0x24];
    func_80136F90_Mid *unk24;
    u8 pad28[0x10];
    struct func_80136F90_Inner *unk38;
    u8 pad3C[0x90 - 0x3C];
    u16 unk90;
} func_80136F90_Struct;

void func_80136F90(func_80136F90_Struct *arg0, void *arg1) {
    if (((arg0->unk38->unk10 >> 8) & 0xFF) < 0x80) {
        arg0->unk24->unk30->unk4 += func_8001EB64(arg0->unk24->unk30->unk12) * ((arg0->unk38->unk10 >> 8) & 0xFF) / 10.0f;
        arg0->unk24->unk30->unkC -= func_8001EAD0(arg0->unk24->unk30->unk12) * ((arg0->unk38->unk10 >> 8) & 0xFF) / 10.0f;
    } else {
        arg0->unk24->unk30->unk4 += func_8001EB64(arg0->unk24->unk30->unk12) * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80) / -10.0f;
        arg0->unk24->unk30->unkC -= func_8001EAD0(arg0->unk24->unk30->unk12) * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80) / -10.0f;
    }
    if (arg0->unk90--) {
    } else {
        func_800058DC(arg0, func_80137180);
    }
}


typedef struct func_80137180_StructInner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
} func_80137180_StructInner;

typedef struct func_80137180_Struct {
    u8 pad0[0x38];
    func_80137180_StructInner *unk38;
    u8 pad1[0x90 - 0x3C];
    s16 unk90;
} func_80137180_Struct;


void func_80137180(void *arg0, void *arg1) {
    func_80137180_Struct *s;

    s = arg0;
    if (func_80133A24(s->unk38->unk14 >> 16) == 0) {
        s->unk90 = (s16) ((s->unk38->unk10 >> 16) & 0xFF);
        func_800058DC(s, func_801371E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_801371E0.s")



void func_801373D8(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80137418);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137418.s")


typedef struct func_80137970_StructIn {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[4];
    u32 unk10;
} func_80137970_StructIn;
typedef struct func_80137970_Struct {
    u8 pad0[0x38];
    func_80137970_StructIn *unk38;
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    f32 unk90;
} func_80137970_Struct;
typedef struct func_80137970_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80137970_StructB;
typedef struct func_80137970_StructA {
    u8 pad0[0x2C];
    func_80137970_StructB *unk2C;
} func_80137970_StructA;

extern func_80137970_StructA *D_801BBCD0;

void func_80137970(func_80137970_Struct *arg0, s32 arg1) {
    f32 sp74;
    s16 sp72;

    func_801FCA4C((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, 0x5E7);
    if (func_801FD644((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, arg0->unk90,
            func_8001EF38((f32)arg0->unk38->unk6 / 10.0 - D_801BBCD0->unk2C->unk4, (f32)arg0->unk38->unkA / 10.0 - D_801BBCD0->unk2C->unkC), 1.0f, 1.0f, 0x14) != 0) {
        func_80380F94((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 0.0f, 0.0f, 0.0f, 2);
    }
    if ((arg0->unk38->unk10 >> 24) != 2) {
        if (!(arg0->unk3C++ & 1)) {
            sp72 = func_8012C6B4(0x2000);
            sp74 = func_8012C6B4(0x3E8) / 100.0;
            arg1 = sp72;
            func_80129FB8(func_8001EAD0(arg1) * sp74 + (f32)arg0->unk38->unk6 / 10.0, arg0->unk90 + (f32)arg0->unk38->unk8 / 10.0 + 4.0,
                func_8001EB64(arg1) * sp74 + (f32)arg0->unk38->unkA / 10.0, 0.0f, D_8018DC88, 0.0f, 0.0f, 0x38, 0x26, 0, 0x32, 0x32, 0x32, 0xB4, -4,
                func_8012C6B4(0x46) / D_8018DC90 + D_8018DC98, 0xB, 0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137D00.s")

void func_801381C4(int arg0, int arg1);


extern f64 D_8018DCC0;
extern f64 D_8018DCC8;
extern f64 D_8018DCD0;
extern f64 D_8018DCD8;

typedef struct func_80137E10_Struct {
    u8 pad0[0x38];
    func_80137180_StructInner *unk38;
    u8 pad1[0x94 - 0x3C];
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
} func_80137E10_Struct;

void func_80137E10(func_80137E10_Struct *arg0, s32 arg1) {
    s32 sp7C;
    s32 pad;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 v;

    arg0->unk9E++;
    if (!(arg0->unk9E % 2)) {
        arg0->unk9C = arg0->unk9C - 1;
        v = func_8012C6B4(0x7B) & 3;
        if (v == 0) goto case0;
        if (v == 1) goto case1;
        if (v == 2) goto case2;
        if (v != 3) goto common;
        if (1) goto case3;
    case0:
        arg0->unk94 = (f32) ((f64) arg0->unk94 + D_8018DCC0);
        arg0->unk98 = (f32) ((f64) arg0->unk98 + D_8018DCC8);
        sp6C = func_8012C6B4(0x14);
        sp70 = func_8012C6B4(0x14);
        sp74 = func_8012C6B4(0x14);
        func_80129FB8(((f32) sp6C + arg0->unk94) - 10.0f, (f32) (((f64) sp70 + 20.0) - 10.0), ((f32) sp74 + arg0->unk98) - 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x80, 8, (f32) ((f64) (f32) func_8012C6B4(0xF) / 20.0), 0xA, 0);
        return;
    case1:
        sp7C = 0xB;
        if (1) goto common;
    case2:
        sp7C = 0xC;
        if (1) goto common;
    case3:
        sp7C = 0xD;
        if (1) goto common;
    common:
        arg0->unk94 = (f32) ((f64) arg0->unk94 + D_8018DCD0);
        arg0->unk98 = (f32) ((f64) arg0->unk98 + D_8018DCD8);
        sp5C = func_8012C6B4(0x14);
        sp60 = func_8012C6B4(0x14);
        sp64 = func_8012C6B4(0x14);
        sp68 = func_8012C6B4(0x80);
        sp6C = func_8012C6B4(0x1F);
        sp70 = func_8012C6B4(0x1F);
        sp74 = func_8012C6B4(0x1F);
        func_80129FB8(((f32) sp5C + arg0->unk94) - 10.0f, (f32) (((f64) sp60 + 20.0) - 10.0), ((f32) sp64 + arg0->unk98) - 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, sp68, sp6C + 0xE0, sp70, sp74, 0xFF, 8, (f32) ((f64) (f32) func_8012C6B4(0xF) / 40.0), sp7C, 0);
    }
    if (func_80133A24(arg0->unk38->unk10 >> 0x10) == 0) {
        func_800058DC(arg0, func_801381C4);
    }
}


void func_801381C4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_801381D0.s")


void func_801383C0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



typedef struct func_801383CC_Struct {
    u8 pad0[0x38];
    struct func_801383CC_Inner *unk38;
} func_801383CC_Struct;
struct func_801383CC_Inner {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
};

void func_801383CC(func_801383CC_Struct *arg0, s32 arg1) {
    s32 a, b, c, d;
    f32 z = 0.0f;
    struct func_801383CC_Inner *p;

    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) ((f64) (f32) p->unk8 / 10.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, 1.0f, 0xE, 0);
    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) (((f64) (f32) p->unk8 / 10.0) + 20.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, D_8018DCF4, 0xB, 0);
    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) ((f64) (f32) p->unk8 / 10.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, D_8018DCF8, 8, 0);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) (((f64) (f32) p->unk8 / 10.0) + 20.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x80, 8, 1.0f, 0xA, 0);
    func_800058DC(arg0, func_801387C0);
}


void func_801387C0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_801387CC.s")


void func_80138B84(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80138B90.s")


void func_80138F48(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

