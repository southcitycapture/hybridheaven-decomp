#include "common.h"

#define func_8024B2D8 func_8024B2D8__func_8024B090

typedef struct func_8024B090_SB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x10];
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024B090_SB;
typedef struct func_8024B090_S4 { s32 w[4]; } func_8024B090_S4;
typedef struct func_8024B090_A0 { u8 pad[0x3C]; s16 unk3C; } func_8024B090_A0;
typedef struct func_8024B090_SA {
    u8 pad[0x30];
    func_8024B090_SB *unk30;
} func_8024B090_SA;

extern s32 func_80126CC0(void *, void *);
extern u8 func_80126EAC[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_800058DC(void *, void *);
struct func_8024B2D8_Struct;
void func_8024B2D8(struct func_8024B2D8_Struct *arg0, s32 arg1);
struct func_8024BC80_Struct4;
extern struct func_8024BC80_Struct4 D_80164F40;
struct func_8024C5B4_Struct;
extern struct func_8024C5B4_Struct D_801BBBF0;
extern u8 D_8017AF90[];

void func_8024B090(func_8024B090_A0 *arg0, func_8024B090_SA **arg1) {
    func_8024B090_S4 sp28;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp28 = *(func_8024B090_S4 *)&D_80164F40;
        sp28.w[1] = 0x80000900;
        func_80005E44(arg0, &sp28);
        sp28.w[1] = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x29A, 0);
        arg1[0]->unk30->unk24 |= 0x400;
        arg1[0]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
        arg1[0]->unk30->unk4 = 100.0f;
        arg1[0]->unk30->unk8 = -410.0f;
        arg1[0]->unk30->unkC = 717.5f;
        arg1[0]->unk30->unk12 = 0x1000;
        arg1[0]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[0]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[0]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[0]->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 1, 0x28D, 2);
        arg1[1]->unk30->unk24 |= 0x400;
        arg1[1]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
        arg1[1]->unk30->unk4 = 100.0f;
        arg1[1]->unk30->unk8 = -130.0f;
        arg1[1]->unk30->unkC = 744.0f;
        arg1[1]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[1]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[1]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[1]->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024B2D8);
    }
}
#undef func_8024B2D8

#define func_8024B350 func_8024B350__func_8024B2D8

typedef struct func_8024B2D8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_8024B2D8_Struct;

extern void func_801518D4();
extern void func_80020718(s32);
extern void func_8024B350();

void func_8024B2D8(func_8024B2D8_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x80) != 0) {
        if (arg0->unk3C++ >= 0x2D) {
            arg0->unk44 = 0.0f;
            func_80020718(0x1FA);
            func_801518D4(0, 1, 0xA);
            func_800058DC(arg0, func_8024B350);
        }
    }
}
#undef func_8024B350

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/_ro_func_8024B350.s")

#define func_8024B4C4 func_8024B4C4__func_8024B350

typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_S1 { u8 pad[4]; struct { u8 pad[0x30]; func_8024B350_S2 *unk30; } *unk4; } func_8024B350_S1;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;
typedef struct func_8024B350_A0 { u8 pad[0x44]; f32 unk44; } func_8024B350_A0;
extern func_8024B350_G *D_801BBCD0;
extern u8 D_80259330[];

extern void func_8024B4C4();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024B350(func_8024B350_A0 *arg0, func_8024B350_S1 *arg1) {
    if (arg0->unk44 > -1.0) {
        arg0->unk44 = arg0->unk44 - 0.05;
    }
    arg1->unk4->unk30->unk8 = arg1->unk4->unk30->unk8 + arg0->unk44;
    if (arg1->unk4->unk30->unk8 <= -390.0f) {
        func_800058DC(arg0, func_8024B4C4);
    }
    D_801BBCD0->unk2C->unk8 = arg1->unk4->unk30->unk8;
    func_8011AAF4(D_80259330, 0xDA, arg0, 0, 1, 0.0f, 100.800003f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 749.299988f, 0.0f, 100.599998f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 735.200012f, 0.0f, 35.0f, -1, -1);
}
#undef func_8024B4C4

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/_ro_func_8024B4C4.s")

#define func_8024B654 func_8024B654__func_8024B4C4
extern u8 D_80259368[];

struct func_8024B654_StructState;
struct func_8024B654_StructObject;
void func_8024B654(struct func_8024B654_StructState *arg0, struct func_8024B654_StructObject **arg1);

void func_8024B4C4(func_8024B2D8_Struct *arg0, func_8024B350_S1 *arg1) {
    f32 v;
    if (arg0->unk44 <= (-0.1)) {
        arg0->unk44 = arg0->unk44 + 0.05;
    }
    arg1->unk4->unk30->unk8 += arg0->unk44;
    v = arg1->unk4->unk30->unk8;
    if (v <= -410.0f) {
        arg0->unk3C = 0;
        func_80020718(0x1FC);
        func_801518D4(0, 1, 0xA);
        func_800058DC(arg0, func_8024B654);
        v = arg1->unk4->unk30->unk8;
    }
    D_801BBCD0->unk2C->unk8 = v;
    func_8011AAF4(D_80259368, 0xF0, arg0, 0, 1, 0.0f, 100.800003f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 749.299988f, 0.0f, 100.599998f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 735.200012f, 0.0f, 35.0f, -1, -1);
}
#undef func_8024B654

struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_8024B654_StructState {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B654_StructState;

typedef struct func_8024B654_StructPosition {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_8024B654_StructPosition;

typedef struct func_8024B654_StructObject {
    u8 pad[0x30];
    func_8024B654_StructPosition *unk30;
} func_8024B654_StructObject;

typedef struct func_8024B654_StructGlobal {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x3A0];
    u8 unk3A6;
} func_8024B654_StructGlobal;

void func_8024B654(func_8024B654_StructState *arg0, func_8024B654_StructObject **arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if ((s32)temp_v0 >= 0xF) {
        if (temp_v0 == 0xF) {
            ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk3A6 = 1;
            ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk4 = 0x108;
            func_8012FE50(0x10, ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk4, 0, 1, 0);
            func_80020718(0x122);
            func_80020718(0xA);
        }
        (*arg1)->unk30->unk4 += (f64)func_8001EB64((*arg1)->unk30->unk12) * 1.5;
        (*arg1)->unk30->unkC -= (f64)func_8001EAD0((*arg1)->unk30->unk12) * 1.5;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024B090/_ro_func_8024B758.s")

#define func_8024B350_G func_8024B350_G__func_8024B758
#define func_8024B350_S2 func_8024B350_S2__func_8024B758
#define func_8024C5B4_Struct func_8024C5B4_Struct__func_8024B758
struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;


typedef struct func_8024B758_StructA {
    f32 unk0; f32 unk4; f32 unk8; s16 unkC; u8 padE[2]; s32 unk10; f32 unk14; s16 unk18; s16 unk1A; s32 unk1C;
} func_8024B758_StructA;
typedef struct func_8024B758_StructB {
    s16 unk0; u8 pad2[2]; s32 unk4; f32 unk8; s16 unkC;
} func_8024B758_StructB;
typedef struct func_8024B758_StructP {
    u8 pad[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12;
} func_8024B758_StructP;
typedef struct func_8024B758_StructO {
    u8 pad[0x30]; func_8024B758_StructP *unk30;
} func_8024B758_StructO;
typedef struct func_8024B758_StructI {
    u8 pad[6]; s16 unk6; u8 pad8[2]; s16 unkA;
} func_8024B758_StructI;
typedef struct func_8024B758_Struct {
    u8 pad0[0x24]; func_8024B758_StructO *unk24; u8 pad28[0x10]; func_8024B758_StructI *unk38;
    u8 pad3C[0x54]; u8 unk90; u8 pad91[2]; u8 unk93; f32 unk94;
} func_8024B758_Struct;
typedef struct func_8024B758_Tab { u8 pad0[6]; u16 unk6; f32 unk8; u8 pad[8]; } func_8024B758_Tab;
typedef struct func_8024B758_DC { u8 pad[0x2C]; s32 unk2C; u8 pad30[0x14]; f32 unk44; } func_8024B758_DC;
typedef struct func_8024B758_G { u8 pad[0xDC]; func_8024B758_DC *unkDC; struct { u8 pad[0x2C]; func_8024B758_StructP *unk2C; } *unkE0; } func_8024B758_G;
extern s32 func_801C2F0C(s32, void *);
extern s32 func_801C2FF8();
extern s32 func_801C3044();
extern s16 func_801FD284(s16, s32, f32);
extern void func_80133980(s32);
extern func_8024B758_Tab D_8018294C[];
extern func_8024B758_Tab D_80182952[];
extern func_8024B758_Tab D_80182954[20];
extern u8 D_802593A0[];

s32 func_8024B758(func_8024B758_Struct *arg0, s32 arg1) {
    union { func_8024B758_StructA a; func_8024B758_StructB b; } u;
    func_8024B758_DC *p;

    switch (arg0->unk93) {
    case 1:
        if ((u32)*(u16 *)((u8 *)D_80182952 + arg0->unk90 * 0x14) <= arg0->unk94 && func_801C2FF8() != 0) {
            u.a.unk0 = 100.7f;
            u.a.unk4 = 735.0f;
            u.a.unk8 = 0.0f;
            u.a.unkC = 0x1100;
            u.a.unk10 = 0x0168003E;
            u.a.unk14 = 1.0f;
            u.a.unk18 = 0;
            u.a.unk1A = 0x96;
            func_801C2F0C(2, &u.a);
            p = ((func_8024B758_G *)&D_801BBBF0)->unkDC;
            p->unk2C &= ~0x40;
            ((func_8024B758_G *)&D_801BBBF0)->unkDC->unk44 = 0.0f;
            arg0->unk93 = 4;
        } else {
            arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
            arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
            arg0->unk94 += (f64)*(f32 *)(0x80182954u + arg0->unk90 * 0x14);
        }
        break;
    case 4:
        if (func_801C3044() == 0) {
            u.b.unk0 = 0x1100;
            u.b.unk4 = 0x0348007A;
            u.b.unkC = 0xA;
            u.b.unk8 = 5.0f;
            func_801C2F0C(5, &u.b);
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
        break;
    case 2:
        ((func_8024B758_G *)&D_801BBBF0)->unkE0->unk2C->unk12 = func_801FD284(((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12, 0x1000, 0.1f);
        arg0->unk94 = arg0->unk94 + 1.0f;
        if (arg0->unk94 >= 30.0f) {
            func_8011AAF4(D_802593A0, 0x144, arg0, 0, 1, 0.0f, 100.8f, -113.9f, 749.3f, 0.0f, 100.6f, -113.9f, 735.2f, 0.0f, 35.0f, -1, -1);
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
            func_80020718(0x122);
        }
        break;
    case 3:
        ((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12 = func_801FD284(((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12, 0x1000, 0.07f);
        arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
        arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
        if ((arg0->unk94 += (f64)D_8018294C[arg0->unk90].unk8) >= (u32)D_8018294C[arg0->unk90].unk6) {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            func_80133980(0x80);
            return 0;
        }
        break;
    default:
        break;
    }
    return 1;
}
#undef func_8024B350_G
#undef func_8024B350_S2
#undef func_8024C5B4_Struct

