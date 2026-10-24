#include "common.h"


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
extern f32 D_802593D8;

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
        arg1[0]->unk30->unkC = D_802593D8;
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


typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_S1 { u8 pad[4]; struct { u8 pad[0x30]; func_8024B350_S2 *unk30; } *unk4; } func_8024B350_S1;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;
typedef struct func_8024B350_A0 { u8 pad[0x44]; f32 unk44; } func_8024B350_A0;
extern func_8024B350_G *D_801BBCD0;
extern u8 D_80259330[];
extern f64 D_802593E0;
extern f32 D_802593E8;
extern f64 D_802593F0;
extern f32 D_802593F8;
extern f32 D_802593FC;
extern f32 D_80259400;
extern void func_8024B4C4();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024B350(func_8024B350_A0 *arg0, func_8024B350_S1 *arg1) {
    if (arg0->unk44 > -1.0) {
        arg0->unk44 = arg0->unk44 - D_802593E0;
    }
    arg1->unk4->unk30->unk8 = arg1->unk4->unk30->unk8 + arg0->unk44;
    if (arg1->unk4->unk30->unk8 <= -390.0f) {
        func_800058DC(arg0, func_8024B4C4);
    }
    D_801BBCD0->unk2C->unk8 = arg1->unk4->unk30->unk8;
    func_8011AAF4(D_80259330, 0xDA, arg0, 0, 1, 0.0f, D_802593E8, (f32)(arg1->unk4->unk30->unk8 + D_802593F0), D_802593F8, 0.0f, D_802593FC, (f32)(arg1->unk4->unk30->unk8 + D_802593F0), D_80259400, 0.0f, 35.0f, -1, -1);
}

extern u8 D_80259368[];
extern f64 D_80259408;
extern f64 D_80259410;
extern f32 D_80259418;
extern f64 D_80259420;
extern f32 D_80259428;
extern f32 D_8025942C;
extern f32 D_80259430;
struct func_8024B654_StructState;
struct func_8024B654_StructObject;
void func_8024B654(struct func_8024B654_StructState *arg0, struct func_8024B654_StructObject **arg1);

void func_8024B4C4(func_8024B2D8_Struct *arg0, func_8024B350_S1 *arg1) {
    f32 v;
    if (arg0->unk44 <= D_80259408) {
        arg0->unk44 = arg0->unk44 + D_80259410;
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
    func_8011AAF4(D_80259368, 0xF0, arg0, 0, 1, 0.0f, D_80259418, (f32)(arg1->unk4->unk30->unk8 + D_80259420), D_80259428, 0.0f, D_8025942C, (f32)(arg1->unk4->unk30->unk8 + D_80259420), D_80259430, 0.0f, 35.0f, -1, -1);
}

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

void func_8024C2F4(s32 arg0, s32 arg1);
void func_8024BDE8(void *arg0, void **arg1);
typedef struct func_8024BC80_Struct4 {
    s32 w[4];
} func_8024BC80_Struct4;
extern u8 D_8017AD28[];
extern u8 D_801BC3D8[];

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


extern s32 func_801C2FF8(void);
struct func_8024BF80_Struct;
extern void func_801C2F0C(s32, struct func_8024BF80_Struct *);
void func_8024BF80(s32 arg0, s32 arg1);
extern f32 D_80259710;
extern f32 D_80259714;

typedef struct func_8024BEF0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024BEF0_Struct;

void func_8024BEF0(s32 arg0, s32 arg1) {
    func_8024BEF0_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = D_80259710;
        sp18.unk4 = D_80259714;
        sp18.unk8 = 0.0f;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x96;
        func_801C2F0C(2, (void *)&sp18);
        func_800058DC(arg0, func_8024BF80);
    }
}


typedef struct func_8024BF80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024BF80_Struct;

extern s32 func_801C3044(void);
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


typedef struct func_8024C028_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_8024C028_StructPos;
typedef struct func_8024C028_StructObj {
    u8 pad[0x2C];
    func_8024C028_StructPos *pos;
} func_8024C028_StructObj;
typedef struct func_8024C028_StructGlobal {
    u8 pad[0xE0];
    func_8024C028_StructObj *obj;
    u8 padE4[0x1E8 - 0xE4];
    f32 x, y, z, tx, ty, tz;
    u8 pad200[0xBA2 - 0x200];
    u8 flag;
} func_8024C028_StructGlobal;
typedef struct func_8024C028_StructArg {
    u8 pad[0x22];
    u8 flag;
} func_8024C028_StructArg;
extern void func_801FBB20(void);
extern u8 D_80259484[];
extern u8 D_802594C4[];
extern f64 D_80259718;
extern f64 D_80259720;
#define G ((func_8024C028_StructGlobal *)&D_801BBBF0)

void func_8024C028(void *arg0, func_8024C028_StructArg **arg1) {
    f32 padding;
    f32 sp68;
    f32 y;
    f32 z;
    f32 x;
    f32 diff;
    f64 factor1;
    f64 factor;

    factor1 = D_80259718;
    factor = D_80259720;
    y = G->y;
    z = G->z;
    G->x = (f64)G->x + (f64)(G->obj->pos->x - G->x) * factor1;
    G->y = (f64)y + (f64)((G->obj->pos->y + 20.0f) - y) * factor1;
    G->z = (f64)z + (f64)((G->obj->pos->z - 40.0f) - z) * factor1;
    G->tx = (f64)G->tx + (f64)(G->obj->pos->x - G->tx) * factor;
    G->ty = (f64)G->ty + (f64)((G->obj->pos->y + 17.0f) - G->ty) * factor;
    sp68 = G->tz;
    G->tz = (f64)sp68 + (f64)(G->obj->pos->z - sp68) * factor;
    func_8011AAF4(D_80259484, 0x188, arg0, 0, 1, 0.0f, G->x, G->y, G->z, 0.0f, G->tx, G->ty, G->tz, 0.0f, 35.0f, -1, -1);
    x = G->obj->pos->x;
    if (x < G->x) {
        diff = -(x - G->x);
    } else {
        diff = x - G->x;
    }
    if ((s32)diff == 0) {
        func_8011AAF4(D_802594C4, 0x18E, arg0, 2, 1, 0.0f, G->x, G->y, G->z, 0.0f, G->tx, G->ty, G->tz, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        func_801FBB20();
        (*arg1)->flag = 0;
        G->flag = 0;
        func_800058DC(arg0, func_8024C2F4);
    }
}


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

typedef struct func_8024C3D8_StructC {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    u16 unk2C;
} func_8024C3D8_StructC;
typedef struct func_8024C3D8_StructR {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[9];
    func_8024C3D8_StructC *unk2C;
} func_8024C3D8_StructR;
typedef struct func_8024C3D8_StructP {
    u16 *unk0;
    s32 *unk4;
} func_8024C3D8_StructP;
typedef struct func_8024C3D8_StructG {
    u8 pad[0x984];
    func_8024C3D8_StructP *unk984;
} func_8024C3D8_StructG;
typedef struct func_8024C3D8_StructD {
    u8 pad[0x1E8];
    f32 f[6];
} func_8024C3D8_StructD;
extern func_8024C3D8_StructG D_80171CF0;
extern u8 D_80253980[];
extern func_8024BC80_Struct4 D_802541C4;
extern f32 D_80259728, D_8025972C, D_80259730, D_80259734, D_80259738, D_8025973C;
extern void func_801511C4(s32, void *, s32);
extern void D_801512CC(s32, f32, f32, f32);
void func_8024C5B4(s32 arg0, s32 arg1);
extern func_8024C3D8_StructR *func_80005FAC(s32, void *, void *);

void func_8024C3D8(u8 *arg0, void **arg1) {
    func_8024BC80_Struct4 sp20;
    func_8024C3D8_StructR *r;
    func_8024C3D8_StructC *c;

    if (func_80133A24(0x7D) != 0) {
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[0] = D_80259728;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[1] = D_8025972C;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[2] = D_80259730;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[3] = D_80259734;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[4] = D_80259738;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[5] = D_8025973C;
        func_801511C4(D_8025A2D4, D_80253980, 0xA);
        *(s16 *)(arg0 + 0x92) = 0;
        D_801512CC(D_8025A2D8, -760.3f, 0, -6.1f);
        func_80151430(D_8025A2D8, 0x1800);
        sp20 = D_802541C4;
        func_80006214((void *)D_8025A2D8);
        r = func_80005FAC(D_8025A2D8, arg1[0x30 / 4], &sp20);
        r->unk2C->unk28 = *D_80171CF0.unk984->unk4;
        r->unk2C->unk0 = D_80171CF0.unk984->unk0[0];
        r->unk2C->unk2C = D_80171CF0.unk984->unk0[1];
        r->unk2C->unk4 = 0.0f;
        r->unk2C->unk8 = 0.0f;
        r->unk2C->unkC = 0.0f;
        r->unk2C->unk12 = 0;
        r->unk2C->unk18 = 10.0f;
        r->unk2C->unk1C = 10.0f;
        r->unk2C->unk20 = 10.0f;
        c = r->unk2C;
        c->unk24 = c->unk24 | 0x40015;
        r->unk22 = 1;
        func_80006214(arg0);
        func_800058DC(arg0, (void *)func_8024C5B4);
    }
}



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


extern u8 D_80259578[];
extern u8 D_802539B0[];
extern f32 D_8025977C;
extern f32 D_80259780;
extern f32 D_80259784;
extern f32 D_80259788;
extern void func_8024CA84();

typedef struct func_8024C8F0_Struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad2[0xF20 - 0x200];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    u8 unkF27;
    u8 unkF28;
} func_8024C8F0_Struct;

typedef struct func_8024C8F0_StructArg {
    u8 pad[0x90];
    u16 unk90;
} func_8024C8F0_StructArg;

#define func_8024C8F0_G ((func_8024C8F0_Struct *)&D_801BBBF0)

void func_8024C8F0(func_8024C8F0_StructArg *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x19) {
        func_8024C8F0_G->unkF20 = 0x64;
        func_8024C8F0_G->unkF21 = 0x64;
        func_8024C8F0_G->unkF22 = 0x64;
        func_8024C8F0_G->unkF23 = 0x64;
        func_8024C8F0_G->unkF24 = 0x64;
        func_8024C8F0_G->unkF25 = 0x64;
        func_8024C8F0_G->unkF26 = -0x64;
        func_8024C8F0_G->unkF27 = 0;
        func_8024C8F0_G->unkF28 = 0;
        func_8024C8F0_G->unk1E8 = D_8025977C;
        func_8024C8F0_G->unk1EC = D_80259780;
        func_8024C8F0_G->unk1F0 = D_80259784;
        func_8024C8F0_G->unk1F4 = D_80259788;
        func_8024C8F0_G->unk1F8 = 12.5f;
        func_8024C8F0_G->unk1FC = -6.0f;
        func_8011AAF4(D_80259578, 0x27D, arg0, 0, 1, 0.0f, func_8024C8F0_G->unk1E8, func_8024C8F0_G->unk1EC,
                      func_8024C8F0_G->unk1F0, 0.0f, func_8024C8F0_G->unk1F4, func_8024C8F0_G->unk1F8,
                      func_8024C8F0_G->unk1FC, 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        func_8015115C(D_8025A2D8, D_802539B0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CA84);
    }
}

#undef func_8024C8F0_G


typedef struct func_8024CA84_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024CA84_Struct;

extern void func_8024CBB0();
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


typedef struct func_8024CBB0_Struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad2[0xF20 - 0x200];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    s8 unkF27;
    u8 unkF28;
} func_8024CBB0_Struct;

typedef struct func_8024CBB0_Arg {
    u8 pad[0x90];
    u16 unk90;
} func_8024CBB0_Arg;

extern u8 D_802595F8[];
extern u8 D_80259644[];
extern f32 D_802597AC;
extern f32 D_802597B0;
extern f32 D_802597B4;
extern f32 D_802597B8;
extern f32 D_802597BC;
extern f32 D_802597C0;
extern f32 D_802597C4;
extern f32 D_802597C8;
extern f32 D_802597CC;
extern f32 D_802597D0;
extern f32 D_802597D4;
extern f32 D_802597D8;
extern f32 D_802597DC;
extern f32 D_802597E0;
extern f32 D_802597E4;
void func_8024CDE8();

#define func_8024CBB0_G ((func_8024CBB0_Struct *)&D_801BBBF0)

void func_8024CBB0(func_8024CBB0_Arg *arg0, s32 arg1) {
    func_8011AAF4(D_802595F8, 0x2AC, arg0, 0, 2, D_802597AC, D_802597B0, D_802597B4, D_802597B8, D_802597BC, D_802597C0, D_802597C4, D_802597C8, 0.0f, 35.0f, -1, -1);
    if (arg0->unk90++ >= 30) {
        func_8024CBB0_G->unkF20 = 0x75;
        func_8024CBB0_G->unkF21 = 0x6C;
        func_8024CBB0_G->unkF22 = 0x40;
        func_8024CBB0_G->unkF23 = 0xFF;
        func_8024CBB0_G->unkF24 = 0xB0;
        func_8024CBB0_G->unkF25 = 0x80;
        func_8024CBB0_G->unkF26 = 0;
        func_8024CBB0_G->unkF27 = 0x40;
        func_8024CBB0_G->unkF28 = 0;
        func_8024CBB0_G->unk1E8 = D_802597CC;
        func_8024CBB0_G->unk1EC = D_802597D0;
        func_8024CBB0_G->unk1F0 = D_802597D4;
        func_8024CBB0_G->unk1F4 = D_802597D8;
        func_8024CBB0_G->unk1F8 = D_802597DC;
        func_8024CBB0_G->unk1FC = D_802597E0;
        func_8011AAF4(D_80259644, 0x2C7, arg0, 0, 1, 0.0f, func_8024CBB0_G->unk1E8, func_8024CBB0_G->unk1EC, func_8024CBB0_G->unk1F0, 0.0f, func_8024CBB0_G->unk1F4, func_8024CBB0_G->unk1F8, func_8024CBB0_G->unk1FC, 0.0f, D_802597E4, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CDE8);
    }
}

#undef func_8024CBB0_G

typedef struct func_8024CDE8_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_8024CDE8_Struct;
extern void func_800179B0(void *);
extern void func_8024CF30();
extern u8 D_80259690[];
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


extern s32 func_80151478(s32);
extern void func_80151114();
extern void func_80133980();
extern void func_80005700();

typedef struct func_8024D19C_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024D19C_Struct;

void func_8024D19C(func_8024D19C_Struct *arg0, s32 arg1) {
    if (func_80151478(D_8025A2D4) < 0x800) {
        func_801514B0(D_8025A2D4, 0x71);
    }
    if (arg0->unk90++ >= 0x28) {
        func_80151114(D_8025A2D4, arg0);
        func_80151114(D_8025A2D8);
        func_80133980(0x73);
        func_80005700(arg0);
    }
}

