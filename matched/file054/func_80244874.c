#include "context.h"

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
