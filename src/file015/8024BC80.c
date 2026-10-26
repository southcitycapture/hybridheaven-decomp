#include "common.h"

extern f32 D_80259710;
extern f32 D_80259714;
extern f32 D_80259740;
extern f32 D_80259774;
extern f32 D_80259778;
extern f32 D_8025977C;
extern f32 D_80259780;
extern f32 D_80259784;
extern f32 D_80259788;
extern f32 D_8025978C;
extern f32 D_80259790;
extern f32 D_80259794;
extern f32 D_80259798;
extern f32 D_8025979C;
extern f32 D_802597A0;
extern f32 D_802597A4;
extern f32 D_802597A8;
extern s16 D_80089354;
extern s32 D_8025A2D0;
extern s32 D_8025A2D4;
extern s32 D_8025A2D8;
extern s32 func_80005670(void *, void *);
extern s32 func_800178E8(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern s32 func_8015105C(s32);
extern s32 func_80151478(s32);
extern s32 func_80151790(s32);
extern s32 func_801517CC(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern s32 func_801C3DC8(s32, s32, s32, s32, f32, f32, f32, f32, f32);
extern u8 D_8017AD28[];
extern u8 D_801BC3D8[];
extern u8 D_80253954[];
extern u8 D_80253968[];
extern u8 D_80253974[];
extern u8 D_802539B0[];
extern u8 D_80259578[];
extern u8 D_802595B8[];
extern u8 func_80126EAC[];
extern void func_80005700();
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80133980();
extern void func_801339D0(s32);
extern void func_80151114();
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_80151430(s32, s32);
extern void func_801514B0(s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30(void);
extern void func_8024BDE8(void *arg0, void **arg1);
extern void func_8024BE88();
extern void func_8024BEF0();
extern void func_8024BF80(s32 arg0, s32 arg1);
extern void func_8024BFEC();
extern void func_8024C028();
extern void func_8024C2F4(s32 arg0, s32 arg1);
extern void func_8024C350();
extern void func_8024C3D8();
extern void func_8024C630();
extern void func_8024C87C();
extern void func_8024C8F0();
extern void func_8024CA84();
extern void func_8024CBB0();
extern void func_8024D19C();

#define func_8024BDE8 func_8024BDE8__func_8024BC80
#define func_8024C2F4 func_8024C2F4__func_8024BC80

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
extern func_8024BC80_Struct4 D_80164F40;

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
#undef func_8024BDE8
#undef func_8024C2F4

#define func_8024BE88 func_8024BE88__func_8024BDE8
extern struct func_8024C5B4_Struct D_801BBBF0;
extern void func_8024BE88();


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
#undef func_8024BE88

#define func_8024BEF0 func_8024BEF0__func_8024BE88

typedef struct func_8024BE88_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024BE88_Struct;

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
#undef func_8024BEF0

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/D_80259450.s")

#define func_8024BF80 func_8024BF80__func_8024BEF0

struct func_8024BF80_Struct;
extern void func_801C2F0C(s32, struct func_8024BF80_Struct *);
void func_8024BF80(s32 arg0, s32 arg1);

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

extern const f32 D_80259710__load;
extern const f32 D_80259714__load;
void func_8024BEF0(s32 arg0, s32 arg1) {
    func_8024BEF0_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = D_80259710__load;
        sp18.unk4 = (D_80259714__load);
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
#undef func_8024BF80

#define func_801C2F0C func_801C2F0C__func_8024BF80
#define func_8024BFEC func_8024BFEC__func_8024BF80

typedef struct func_8024BF80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024BF80_Struct;

extern void func_801C2F0C(s32, func_8024BF80_Struct *);
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
#undef func_801C2F0C
#undef func_8024BFEC

#define func_800058DC func_800058DC__func_8024BFEC

extern void func_800058DC(void *arg0, void *arg1);

void func_8024BFEC(s32 arg0, s32 arg1) {
    if (func_80133A24(115) != 0) {
        func_800058DC(arg0, func_8024C028);
    }
}
#undef func_800058DC



#define D_80259484 D_80259484__func_8024C028
#define D_802594C4 D_802594C4__func_8024C028
#define D_80259718 D_80259718__func_8024C028
#define D_80259720 D_80259720__func_8024C028
#define func_801FBB20 func_801FBB20__func_8024C028
#define func_8024C8F0_Struct func_8024C8F0_Struct__func_8024C028
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
#define G ((func_8024C8F0_Struct *)&D_801BBBF0)

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
#undef G
#undef D_80259484
#undef D_802594C4
#undef D_80259718
#undef D_80259720
#undef func_801FBB20
#undef func_8024C8F0_Struct


void func_8024C2F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024C350 func_8024C350__func_8024C300

extern void func_8024C350();

void func_8024C300(s32 arg0, s32 arg1) {
    D_8025A2D4 = func_8015105C(0x30);
    D_8025A2D8 = func_8015105C(0x141);
    func_800058DC((void *) arg0, (void *) func_8024C350);
}
#undef func_8024C350



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





/* hh-block asm/nonmatchings/file015/8024BC80/_ro_named_a0821758d4021b46.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024BC80/func_8024C028.s","D_80259484"],[".rodata","asm/nonmatchings/file015/8024BC80/func_8024C028.s","D_802594C4"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/_ro_named_a0821758d4021b46.s")

#define D_801512CC D_801512CC__func_8024C3D8
#define D_80171CF0 D_80171CF0__func_8024C3D8
#define D_801BBBF0 D_801BBBF0__func_8024C3D8
#define D_80253980 D_80253980__func_8024C3D8
#define D_802541C4 D_802541C4__func_8024C3D8
#define func_80005FAC func_80005FAC__func_8024C3D8
#define func_801511C4 func_801511C4__func_8024C3D8
#define func_8024BC80_Struct4 func_8024BC80_Struct4__func_8024C3D8
#define func_8024C5B4 func_8024C5B4__func_8024C3D8
#define func_8024C5B4_Struct func_8024C5B4_Struct__func_8024C3D8
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
typedef struct func_8024BC80_Struct4 {
    s32 w[4];
} func_8024BC80_Struct4;

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
extern f32 D_80259728__load;
extern f32 D_8025972C__load;
extern f32 D_80259730__load;
extern f32 D_80259734__load;
extern f32 D_80259738__load;
extern f32 D_8025973C__load;
extern void func_801511C4(s32, void *, s32);
extern void D_801512CC(s32, f32, f32, f32);
void func_8024C5B4(s32 arg0, s32 arg1);
extern func_8024C3D8_StructR *func_80005FAC(s32, void *, void *);

void func_8024C3D8(u8 *arg0, void **arg1) {
    func_8024BC80_Struct4 sp20;
    func_8024C3D8_StructR *r;
    func_8024C3D8_StructC *c;

    if (func_80133A24(0x7D) != 0) {
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[0] = D_80259728__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[1] = D_8025972C__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[2] = D_80259730__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[3] = D_80259734__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[4] = D_80259738__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[5] = D_8025973C__load;
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
#undef D_801512CC
#undef D_80171CF0
#undef D_801BBBF0
#undef D_80253980
#undef D_802541C4
#undef func_80005FAC
#undef func_801511C4
#undef func_8024BC80_Struct4
#undef func_8024C5B4
#undef func_8024C5B4_Struct

struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};


void func_8024C5B4(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, D_801BBBF0.unk1E8, D_801BBBF0.unk1EC, D_801BBBF0.unk1F0, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, 0.200000003f, 35.0f) == 0) {
        func_800058DC((void *)arg0, (void *)func_8024C630);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/func_8024C630.s")

#define func_8024C87C func_8024C87C__func_8024C824

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
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unk4 = 38.0999985f;
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unkC = (-555.299988f);
    func_800058DC((void *) arg0, (void *) &func_8024C87C);
}
#undef func_8024C87C

#define func_8024C8F0 func_8024C8F0__func_8024C87C

typedef struct func_8024C87C_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C87C_Struct;

extern void func_8024C8F0();

void func_8024C87C(func_8024C87C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024C8F0);
    }
}
#undef func_8024C8F0



/* hh-block asm/nonmatchings/file015/8024BC80/_ro_func_8024C8F0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024BC80/func_8024C8F0.s","D_80259578"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/_ro_func_8024C8F0.s")

#define func_8024CA84 func_8024CA84__func_8024C8F0


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
        func_8024C8F0_G->unk1E8 = (-775.299988f);
        func_8024C8F0_G->unk1EC = 16.2000008f;
        func_8024C8F0_G->unk1F0 = (-6.5999999f);
        func_8024C8F0_G->unk1F4 = (-760.5f);
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
#undef func_8024CA84



/* hh-block asm/nonmatchings/file015/8024BC80/_ro_func_8024CA84.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024BC80/func_8024CA84.s","D_802595B8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/_ro_func_8024CA84.s")


typedef struct func_8024CA84_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024CA84_Struct;


void func_8024CA84(func_8024CA84_Struct *arg0, s32 arg1) {
    func_8011AAF4(D_802595B8, 0x295, arg0, 0, 2, 0.0242666658f, (-774.900024f), 17.6000004f, (-6.5999999f), 0.0497500002f, (-759.799988f), 15.3999996f, (-6.0999999f), 0.0f, 35.0f, -1, -1);
    if (arg0->unk90++ >= 0x28) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CBB0);
    }
}



/* hh-block asm/nonmatchings/file015/8024BC80/_ro_func_8024CBB0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024BC80/func_8024CBB0.s","D_802595F8"],[".rodata","asm/nonmatchings/file015/8024BC80/func_8024CBB0.s","D_80259644"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/_ro_func_8024CBB0.s")

#define D_802595F8 D_802595F8__func_8024CBB0
#define D_80259644 D_80259644__func_8024CBB0
#define func_8024CDE8 func_8024CDE8__func_8024CBB0

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

void func_8024CDE8();

#define func_8024CBB0_G ((func_8024CBB0_Struct *)&D_801BBBF0)

void func_8024CBB0(func_8024CBB0_Arg *arg0, s32 arg1) {
    func_8011AAF4(D_802595F8, 0x2AC, arg0, 0, 2, 0.0242666658f, (-774.900024f), 17.6000004f, (-6.5999999f), 0.0497500002f, (-759.799988f), 15.3999996f, (-6.0999999f), 0.0f, 35.0f, -1, -1);
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
        func_8024CBB0_G->unk1E8 = 59.2000008f;
        func_8024CBB0_G->unk1EC = (-116.599998f);
        func_8024CBB0_G->unk1F0 = (-552.5f);
        func_8024CBB0_G->unk1F4 = 39.0999985f;
        func_8024CBB0_G->unk1F8 = (-114.699997f);
        func_8024CBB0_G->unk1FC = (-554.900024f);
        func_8011AAF4(D_80259644, 0x2C7, arg0, 0, 1, 0.0f, func_8024CBB0_G->unk1E8, func_8024CBB0_G->unk1EC, func_8024CBB0_G->unk1F0, 0.0f, func_8024CBB0_G->unk1F4, func_8024CBB0_G->unk1F8, func_8024CBB0_G->unk1FC, 0.0f, 20.2590008f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CDE8);
    }
}

#undef func_8024CBB0_G
#undef D_802595F8
#undef D_80259644
#undef func_8024CDE8



/* hh-block asm/nonmatchings/file015/8024BC80/_ro_func_8024CDE8.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024BC80/func_8024CDE8.s","D_80259690"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/_ro_func_8024CDE8.s")

typedef struct func_8024CDE8_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_8024CDE8_Struct;
extern void func_800179B0(void *);
extern void func_8024CF30();
extern u8 D_80259690[];
extern u8 D_80253980[];
extern u8 D_80253E2C[];

#define G ((func_8024C8F0_Struct *)&D_801BBBF0)

void func_8024CDE8(func_8024CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x3C) {
        G->unk1E8 = 112.900002f;
        G->unk1EC = (-114.900002f);
        G->unk1F0 = (-235.699997f);
        G->unk1F4 = 111.800003f;
        G->unk1F8 = (-116.199997f);
        G->unk1FC = (-213.199997f);
        func_8011AAF4(D_80259690, 0x2E8, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253E2C);
        func_8015115C(D_8025A2D4, D_80253980);
        arg0->unk92 = 0;
        func_80006214(arg0);
        func_800058DC(arg0, func_8024CF30);
    }
}
#undef G

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024BC80/func_8024CF30.s")

#define func_8024D19C func_8024D19C__func_8024D134

typedef struct func_8024D134_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024D134_Struct;

extern void func_8024D19C();

void func_8024D134(func_8024D134_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2D4, 0x71);
    if (func_80151790(D_8025A2D4) == 0) {
        func_8015115C(D_8025A2D4, D_80253974);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024D19C);
    }
}
#undef func_8024D19C



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


/* C-owned readonly prefix; private load aliases retain IDO scheduling. */
static const f32 D_80259710__rodata[] = {38.099998474121094f};
static const f32 D_80259714__rodata[] = {-555.2999877929688f};
static const f64 D_80259718__rodata[] = {0.2};
static const f64 D_80259720__rodata[] = {0.3};
static const f32 D_80259728__rodata[] = {112.9000015258789f};
static const f32 D_8025972C__rodata[] = {-114.9000015258789f};
static const f32 D_80259730__rodata[] = {-235.6999969482422f};
static const f32 D_80259734__rodata[] = {111.80000305175781f};
static const f32 D_80259738__rodata[] = {-116.19999694824219f};
static const f32 D_8025973C__rodata[] = {-213.1999969482422f};
