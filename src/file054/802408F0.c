#include "common.h"


typedef struct { s32 w[4]; } func_802408F0_V;

typedef struct func_802408F0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_Inner;

typedef struct func_802408F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802408F0_Inner *unk30;
} func_802408F0_Node;

typedef struct func_802408F0_Args {
    func_802408F0_Node *unk0;
    func_802408F0_Node *unk4;
    func_802408F0_Node *unk8;
    func_802408F0_Node *unkC;
    func_802408F0_Node *unk10;
    func_802408F0_Node *unk14;
    func_802408F0_Node *unk18;
} func_802408F0_Args;

extern void func_800058DC(void *, void (*)(void));
extern s32 func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8015105C(s32);
extern func_802408F0_V D_80164F40;
extern struct func_80246730_Struct D_801BBBF0;
extern u8 D_8017AF38[];
extern u8 D_802467D4[];
extern f32 D_80248108;
extern s32 D_80248800;
extern s32 D_80248804;
extern s32 D_80248808;
extern void func_80240EBC();

#define C(i) (((u8 *) &D_801BBBF0)[i])

void func_802408F0(void *arg0, func_802408F0_Args *arg1) {
    s32 sp38[4];

    *(func_802408F0_V *) sp38 = D_80164F40;
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4D8, 0);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
    arg1->unk0->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = C(0xF32);
    arg1->unk0->unk30->unk4D = C(0xF33);
    arg1->unk0->unk30->unk4E = C(0xF34);
    arg1->unk0->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 1, 0x4D8, 1);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4 = 0.0f;
    arg1->unk4->unk30->unk8 = 0.0f;
    arg1->unk4->unk30->unkC = -177.0f;
    arg1->unk4->unk30->unk4C = C(0xF32);
    arg1->unk4->unk30->unk4D = C(0xF33);
    arg1->unk4->unk30->unk4E = C(0xF34);
    arg1->unk4->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 2, 0x4D8, 2);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4 = 0.0f;
    arg1->unk8->unk30->unk8 = 0.0f;
    arg1->unk8->unk30->unkC = -177.0f;
    arg1->unk8->unk30->unk4C = C(0xF32);
    arg1->unk8->unk30->unk4D = C(0xF33);
    arg1->unk8->unk30->unk4E = C(0xF34);
    arg1->unk8->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 3, 0x4D8, 4);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unkC->unk30->unk4 = 47.0f;
    arg1->unkC->unk30->unk8 = 5.0f;
    arg1->unkC->unk30->unkC = 75.0f;
    arg1->unkC->unk30->unk4C = C(0xF32);
    arg1->unkC->unk30->unk4D = C(0xF33);
    arg1->unkC->unk30->unk4E = C(0xF34);
    arg1->unkC->unk30->unk4F = C(0xF35);
    arg1->unkC->unk22 = 0;
    func_8012C89C(arg0, 4, 0x4D8, 4);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
    arg1->unk10->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk10->unk30->unk4 = D_80248108;
    arg1->unk10->unk30->unk8 = 31.0f;
    arg1->unk10->unk30->unkC = 41.0f;
    arg1->unk10->unk30->unk4C = C(0xF32);
    arg1->unk10->unk30->unk4D = C(0xF33);
    arg1->unk10->unk30->unk4E = C(0xF34);
    arg1->unk10->unk30->unk4F = C(0xF35);
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x4D8, 3);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x400;
    arg1->unk14->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk14->unk30->unk4 = 0.0f;
    arg1->unk14->unk30->unk8 = 82.0f;
    arg1->unk14->unk30->unkC = 0.0f;
    arg1->unk14->unk30->unk4C = C(0xF32);
    arg1->unk14->unk30->unk4D = C(0xF33);
    arg1->unk14->unk30->unk4E = C(0xF34);
    arg1->unk14->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 6, 0x4D8, 3);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x400;
    arg1->unk18->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk18->unk30->unk4 = 0.0f;
    arg1->unk18->unk30->unk8 = 82.0f;
    arg1->unk18->unk30->unkC = -50.0f;
    arg1->unk18->unk30->unk4C = C(0xF32);
    arg1->unk18->unk30->unk4D = C(0xF33);
    arg1->unk18->unk30->unk4E = C(0xF34);
    arg1->unk18->unk30->unk4F = C(0xF35);
    D_80248800 = func_8015105C(0x29);
    D_80248804 = func_8015105C(0x11B);
    D_80248808 = func_80005670(arg0, D_802467D4);
    func_800058DC(arg0, func_80240EBC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80240EBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241024.s")


struct func_802410C8_Struct {
    u8 pad[0x90];
    u8 unk90;
};

extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_8015122C(s32, void *, s32);
extern void func_80241128();
extern u8 D_802468D0[];
extern u8 D_80246A30[];

void func_802410C8(struct func_802410C8_Struct *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80246A30);
        func_8015122C(D_80248804, D_802468D0, 5);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80241128);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802414E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241974.s")


struct func_80241A88_Struct {
    u8 pad[0x90];
    u8 unk90;
};
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_80241B98();
extern u8 D_802476B8[];
extern u8 D_80246E10[];
extern u8 D_802468F4[];
extern f32 D_802481D8;
extern f32 D_802481DC;
extern f32 D_802481E0;
extern f32 D_802481E4;

void func_80241A88(void *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8011AAF4(D_802476B8, 0x39D, arg0, 0, 1, 0.0f, D_802481D8, 7.5f, D_802481DC, 0.0f, 0.5f, D_802481E0, D_802481E4, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246E10);
        func_8015122C(D_80248804, D_802468F4, 5);
        func_801512CC(D_80248804, 1.0f, 0.0f, 17.0f);
        ((struct func_80241A88_Struct *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80241B98);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241E3C.s")


extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);
extern u8 D_80246918[];
extern u8 D_80246930[];
extern void func_80241FD8();

struct func_80241F30_Struct {
    u8 pad[0x90];
    u8 unk90;
};

void func_80241F30(struct func_80241F30_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_80246918);
    }
    if (func_800178E8() != 0 && arg0->unk90 != 0) {
        func_801512CC(D_80248800, -2.0f, 0.0f, -33.0f);
        func_8015122C(D_80248804, D_80246930, 5);
        func_800058DC(arg0, func_80241FD8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024231C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802425EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802428BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802432D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802434E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024372C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80244014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024421C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802445C8.s")


typedef struct func_80244874_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80244874_Inner;

typedef struct func_80244874_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80244874_Inner *unk30;
} func_80244874_Node;

typedef struct func_80244874_Args {
    u8 pad0[0xC];
    func_80244874_Node *unkC;
    func_80244874_Node *unk10;
} func_80244874_Args;

typedef struct func_80244874_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80244874_Obj;

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern s32 func_80130264(void);
extern void func_8013AE20(s32, void *, s32);
extern void func_80244E08();
extern u8 D_80246888[];
extern u8 D_802468C4[];
extern u8 D_80247EB0[];
extern f64 D_80248670;
extern f64 D_80248678;
extern f64 D_80248680;
extern f64 D_80248688;
extern f64 D_80248690;
extern f64 D_80248698;
extern f64 D_802486A0;
extern f32 D_802486A8;
extern f32 D_802486AC;
extern f32 D_802486B0;
extern f32 D_802486B4;
extern f32 D_802486B8;

#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80244874(func_80244874_Obj *arg0, func_80244874_Args *arg1) {
    s32 cnt;
    f64 d;
    extern s32 func_800178E8();

    cnt = arg0->unk3C;
    arg0->unk3C++;
    if (arg0->unk3C > 0x1000) {
        arg0->unk3C -= 0x100;
    }
    if (func_80151790(D_80248800) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248800, D_80246888);
    }
    func_8011AAF4(D_80247EB0, 0x6DC, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    if (cnt < 0x1E) {
        F(0x1E8) = F(0x1E8) + D_80248670;
        F(0x1EC) = (f64) F(0x1EC);
        F(0x1F0) = F(0x1F0) + D_80248678;
        F(0x1F4) = F(0x1F4) + D_80248680;
        F(0x1F8) = F(0x1F8) + D_80248688;
        F(0x1FC) = F(0x1FC) + D_80248690;
    }
    if (!(cnt % 2)) {
        d = D_80248698;
    } else {
        d = D_802486A0;
    }
    F(0x1EC) = F(0x1EC) + d;
    if (func_800178E8(cnt) != 0 && arg0->unk90 != 0) {
        F(0x1E8) = 4.0f;
        F(0x1EC) = D_802486A8;
        F(0x1F0) = D_802486AC;
        F(0x1F4) = D_802486B0;
        F(0x1F8) = D_802486B4;
        F(0x1FC) = D_802486B8;
        func_801512CC(D_80248804, -5.0f, 0.0f, 53.0f);
        func_8015115C(D_80248804, D_802468C4);
        if (func_80130264() == 0) {
            func_80246694(3.0f, 19.0f, 85.0f, 0.4f);
            func_80246694(-18.0f, 21.0f, 86.0f, 0.4f);
            func_80246694(1.0f, 31.0f, 88.0f, 0.4f);
            func_80246694(23.0f, 23.0f, 89.0f, 0.4f);
            func_80246694(-10.0f, 46.0f, 90.0f, 0.4f);
        }
        func_80246694(-7.0f, 5.5f, 47.0f, 0.1f);
        func_80246694(-1.0f, -1.5f, 11.0f, 0.1f);
        func_80246694(-7.0f, 0.5f, 8.0f, 0.1f);
        func_80246694(2.0f, -1.5f, 5.0f, 0.1f);
        func_80246694(18.0f, 2.5f, 5.0f, 0.1f);
        func_80246694(-19.0f, 0.5f, 4.0f, 0.2f);
        func_80246694(20.0f, -1.5f, 2.0f, 0.1f);
        func_80246694(12.0f, -0.5f, 2.0f, 0.1f);
        func_80246694(-6.0f, -4.5f, -12.0f, 0.1f);
        func_80246694(7.0f, -3.5f, -14.0f, 0.1f);
        arg1->unkC->unk22 = 1;
        arg1->unkC->unk30->unk4 = 47.0f;
        arg1->unkC->unk30->unk8 = 5.0f;
        arg1->unkC->unk30->unkC = 75.0f;
        arg1->unkC->unk30->unk10 = 0;
        arg1->unkC->unk30->unk12 = 0;
        arg1->unkC->unk30->unk14 = 0x1CE3;
        arg1->unk10->unk22 = 1;
        arg1->unk10->unk30->unk4 = 99.0f;
        arg1->unk10->unk30->unk8 = 31.0f;
        arg1->unk10->unk30->unkC = 41.0f;
        arg1->unk10->unk30->unk10 = 0;
        arg1->unk10->unk30->unk12 = 0;
        arg1->unk10->unk30->unk14 = 0x182;
        func_80006214((void *) D_80248804);
        func_8013AE20(D_80248804, arg1, 0);
        func_80006214(arg0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80244E08);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80244E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024506C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024541C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802456C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802458F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245E94.s")


void func_802460D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern s32 func_80130078(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80020718(s32);
extern void func_80246160();
extern u16 D_80089474[];

void func_802460DC(void *arg0, s32 arg1) {
    if (func_80130078() == 0) {
        if (D_80089474[2] & 0x1000) {
            func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
            func_80020718(0xA);
            *(s16 *)((u8 *)arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_80246160);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246160.s")


void func_802461AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802461B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802463F0.s")


struct func_80246598_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern s32 func_8012D918(void *, s32, s16, s32, s32);
extern s16 D_802473F0[];

void func_80246598(void *arg0, s32 arg1) {
    struct func_80246598_Struct *s;
    s32 temp_v1;

    s = arg0;
    temp_v1 = s->unk3C++;
    func_8012D918(arg0, 0x2DD, D_802473F0[temp_v1 % 8], 0, 0);
}


struct func_802465F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_802465F8_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void *func_8012C4D0(s32, struct func_802465F8_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern struct func_802465F8_Struct D_802467E8;

void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_802465F8_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467E8, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}


struct func_80246694_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern struct func_802465F8_Struct D_802467FC;

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_80246694_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467FC, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}


struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};

extern s32 func_8012FE50();

void func_80246730(void) {
    u16 var;
    s32 five;

    five = 2;
    if (D_801BBBF0.unk34D == 0) {
        D_801BBBF0.unk3A6 = 0xF;
        D_801BBBF0.unk3A7 = 2;
        D_801BBBF0.unk4 = 0x4B;
        func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, five);
        return;
    }
    D_801BBBF0.unk4 = 0xC2;
    func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, 0);
}

