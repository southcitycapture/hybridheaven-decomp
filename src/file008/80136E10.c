#include "common.h"


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

extern s32 func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, u32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];
extern void func_80136F30();

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
void func_80137180(void *arg0, void *arg1);
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);

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

extern s32 func_80133A24(u32);
extern void func_801371E0();

void func_80137180(void *arg0, void *arg1) {
    func_80137180_Struct *s;

    s = arg0;
    if (func_80133A24(s->unk38->unk14 >> 16) == 0) {
        s->unk90 = (s16) ((s->unk38->unk10 >> 16) & 0xFF);
        func_800058DC(s, func_801371E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_801371E0.s")


extern s32 func_80126CC0(s32, void *);
extern u8 func_80126EAC[];
extern u8 func_80137418[];

void func_801373D8(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80137418);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80136E10/func_80137E10.s")


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

void func_801387C0(s32 arg0, s32 arg1);

extern s32 func_8012C6B4(s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f32 D_8018DCF4;
extern f32 D_8018DCF8;

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

