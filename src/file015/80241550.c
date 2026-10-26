#include "common.h"

extern f32 D_802585CC;
extern f32 D_802585D0;
extern f32 D_802585E8;
extern f32 D_80258600;
extern f32 D_80258604;
extern f32 D_80258608;
extern f32 D_8025860C;
extern f32 D_80258610;
extern f32 D_80258638;
extern f32 D_8025863C;
extern s16 func_801FD284(s16, s32, f32);
extern s32 func_80010550(s32, s32, s32);
extern s32 func_800178E8();
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
extern s32 func_801C3044(void);
extern u8 D_80252134[];
extern u8 D_80252164[];
extern u8 D_80252244[];
extern u8 D_80252320[];
extern u8 D_80258450[];
extern u8 D_80258490[];
#define func_80242A54 func_80242A54__decl
extern u8 func_80242A54[];
#define func_80242C3C func_80242C3C__decl
extern u8 func_80242C3C[];
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801C2F0C(s32, s16 *);
extern void func_80241BBC(s32 arg0, s32 arg1);
extern void func_80241C1C(s32 arg0, s32 arg1);
extern void func_80241C88();
#define func_80241D4C func_80241D4C__decl
extern void func_80241D4C(void);
extern void func_802423E0(s32 arg0, s32 arg1);
extern void func_8024244C(s32 arg0, s32 arg1);
extern void func_802424FC();
extern void func_80242730();
extern void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2);
extern void func_80242874();
extern void func_802428C0();
extern void func_80242DCC();
extern void func_80242FE8();
extern void func_80243020();
extern void func_802430D4();
#define func_8024315C func_8024315C__decl
extern void func_8024315C(void);
extern void func_8024324C(s32 arg0, s32 arg1);
extern void func_80243290();
extern void func_80243348();
extern void func_802433D4();
extern void func_80243414(s32 arg0, s32 arg1);



/* hh-block asm/nonmatchings/file015/80241550/_mrg_keep_a375f0c481f3e952.s {"functions":["func_80241550"],"rodata":[[".late_rodata","asm/nonmatchings/file015/80241550/func_80241928.s","D_80258550"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_mrg_keep_a375f0c481f3e952.s")



#define D_801BBBF0 D_801BBBF0__func_80241928
#define D_80258550 D_80258550__func_80241928
#define func_801C3B10 func_801C3B10__func_80241928
#define func_801C3B2C func_801C3B2C__func_80241928
#define func_801C3B5C func_801C3B5C__func_80241928
#define func_801C3D20 func_801C3D20__func_80241928
#define func_801FBB30 func_801FBB30__func_80241928
#define func_802419BC func_802419BC__func_80241928
typedef struct func_80241928_StructInner {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80241928_StructInner;
typedef struct func_80241928_StructOuter {
    u8 pad0[0xDC];
    func_80241928_StructInner *unkDC;
} func_80241928_StructOuter;



typedef struct func_80241928_StructArg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80241928_StructArg;
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B5C(void);
extern s32 func_801C3D20(f32, f32, s32);
extern void func_801FBB30(void);
extern func_80241928_StructOuter D_801BBBF0;
extern f32 D_80258550;
extern void func_802419BC();

void func_80241928(func_80241928_StructArg *arg0, void *arg1) {
    if (func_801C3D20(-65.0f, D_80258550, 0x420C0000) != 0) {
        func_80133980(0x78);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801FBB30();
        arg0->unk3C = 0;
        func_801C3B5C();
        func_800058DC(arg0, func_802419BC);
    }
}
#undef D_801BBBF0
#undef D_80258550
#undef func_801C3B10
#undef func_801C3B2C
#undef func_801C3B5C
#undef func_801C3D20
#undef func_801FBB30
#undef func_802419BC

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_802419BC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_802419BC.s","D_80258290"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_802419BC.s")

#define func_80241B50 func_80241B50__func_802419BC
extern void func_80241B50(s32 arg0, s32 arg1);
extern u8 D_801BBBF0[];
extern s32 func_801C2FF8();
extern u8 D_80258290[];

extern u8 D_80252094[];
extern u8 D_802520A8[];
extern s32 D_8025A270;
extern s32 D_8025A274;

typedef struct func_802419BC_Struct {
    f32 x, y, z;
    s16 a;
    s16 pad;
    s32 v;
    f32 w;
    s16 b, c, d;
} func_802419BC_Struct;
typedef struct func_802419BC_Gl {
    u8 pad[0x1E8];
    f32 f[6];
} func_802419BC_Gl;

void func_802419BC(s32 arg0, s32 arg1) {
    func_802419BC_Struct s;
#define GL ((func_802419BC_Gl *)&D_801BBBF0)

    if (func_801C2FF8() != 0) {
        GL->f[0] = -72.0f;
        GL->f[1] = 16.0f;
        GL->f[2] = 301.899994f;
        GL->f[3] = (-54.0999985f);
        GL->f[4] = 15.3000002f;
        GL->f[5] = 312.0f;
        func_8011AAF4(D_80258290, 0x1A5, (void *)arg0, 0, 1, 0.0f, GL->f[0], GL->f[1], GL->f[2], 0.0f, GL->f[3], GL->f[4], GL->f[5], 0.0f, 35.0f, -1, -1);
        s.a = 0x1100;
        s.v = 0x0168003E;
        s.b = 0;
        s.c = 0x96;
        s.d = 0xC00;
        s.x = -58.0f;
        s.y = 313.0f;
        s.z = 0.0f;
        s.w = 1.0f;
        func_801C2F0C(6, (s16 *)&s);
        D_8025A270 = func_80005670((void *)arg0, D_80252094);
        D_8025A274 = func_80005670((void *)arg0, D_802520A8);
        func_800058DC((void *)arg0, (void *)func_80241B50);
    }
}
#undef GL
#undef func_80241B50

#define func_80241BBC func_80241BBC__func_80241B50

extern void func_80241BBC(s32 arg0, s32 arg1);

typedef struct func_80241B50_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s16 sp24;
    u8 pad2[0x12];
} func_80241B50_Struct;

void func_80241B50(s32 arg0, s32 arg1) {
    func_80241B50_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0x1000;
        sp.sp1C = 0x04100045;
        sp.sp24 = 0xA;
        sp.sp20 = 1.0f;
        func_801C2F0C(3, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241BBC);
    }
}
#undef func_80241BBC

#define func_80241C1C func_80241C1C__func_80241BBC
typedef struct func_80241C1C_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s32 pad2[5];
} func_80241C1C_Struct;
void func_80241C1C(s32 arg0, s32 arg1);

void func_80241BBC(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0;
        sp.sp1C = 0x04100045;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241C1C);
    }
}
#undef func_80241C1C

#define func_80241C88 func_80241C88__func_80241C1C

extern void func_80241C88();


void func_80241C1C(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        func_80020718(0x1A9);
        sp.sp18 = 0;
        sp.sp1C = 0x04100046;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *)arg0, func_80241C88);
    }
}
#undef func_80241C88


typedef struct func_80241C88_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241C88_StructInner;

typedef struct func_80241C88_StructNode {
    u8 pad[0x30];
    func_80241C88_StructInner *unk30;
} func_80241C88_StructNode;

typedef struct func_80241C88_StructArg {
    u8 pad[0x3C];
    s16 unk3C;
} func_80241C88_StructArg;

typedef struct func_80241C88_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0xA];
} func_80241C88_StructLocal;


void func_80241C88(func_80241C88_StructArg *arg0, func_80241C88_StructNode **arg1) {
    u8 temp_v1;
    func_80241C88_StructInner *temp_v0;
    func_80241C88_StructLocal local;

    temp_v0 = arg1[0]->unk30;
    temp_v1 = temp_v0->unk4B;
    if (temp_v1 >= 0x11) {
        temp_v0->unk4B = temp_v1 - 0x10;
        arg1[1]->unk30->unk4B = arg1[0]->unk30->unk4B;
    } else {
        temp_v0->unk4B = 0;
        arg1[1]->unk30->unk4B = 0;
    }
    if (func_801C3044() == 0) {
        func_80020718(0x1AA);
        local.unk0 = 0x1000;
        local.unk4 = 0x04100044;
        local.unkC = 0xA;
        local.unk8 = 1.0f;
        func_801C2F0C(3, &local.unk0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241D4C);
    }
}

#undef func_80241D4C
#undef func_80242A54
#undef func_8024315C
#define func_801C2F0C func_801C2F0C__func_80241D4C
#define func_80241DD0 func_80241DD0__func_80241D4C
#define func_80242A54 func_80242A54__func_80241D4C
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80241D4C
#define func_8024315C func_8024315C__func_80241D4C
#define func_8024443C func_8024443C__func_80241D4C
#define SG_CAT2(a, b) a##b
#define SG_CAT(a, b) SG_CAT2(a, b)
#define func_80242F38_StructGlobal SG_CAT(SGL_, __LINE__)
#define SGL_348 int
#define SGL_407 func_80242F38_StructGlobal
#define SGL_411 func_80242F38_StructGlobal
#define SGL_412 func_80242F38_StructGlobal
#define SGL_413 func_80242F38_StructGlobal
#define SGL_584 func_80242F38_StructGlobal
#define FA_342 FA_342_x
#define FA_351 func_80242A54
#define FB_423 FB_423_x
#define FB_433 func_8024315C
#define FC_585 FC_585_x
#define FC_603 func_8024443C
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
extern void func_8024443C(void);

#undef func_80242F38_StructGlobal

typedef struct func_80241D4C_Struct { s16 a; s16 pad; s32 b; f32 c; } func_80241D4C_Struct;
typedef struct func_80241D4C_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241D4C_Arg;
extern u8 func_80241DD0[];
extern void func_801C2F0C(s32, void *, void *);

void func_80241D4C(func_80241D4C_Arg *arg0, s32 arg1) {
    u8 padx[0x14];
    func_80241D4C_Struct s;

    if (((arg0->unk3C++ < 0x1E) ^ 1) && func_801C3044() == 0) {
        s.a = 0x1000;
        s.b = 0x04100044;
        s.c = 6.0f;
        func_801C2F0C(4, &s, arg0);
        func_800058DC(arg0, func_80241DD0);
    }
}
#undef SG_CAT2
#undef SG_CAT
#undef SGL_348
#undef SGL_407
#undef SGL_411
#undef SGL_412
#undef SGL_413
#undef SGL_584
#undef FA_342
#undef FA_351
#undef FB_423
#undef FB_433
#undef FC_585
#undef FC_603
#undef func_801C2F0C
#undef func_80241DD0
#undef func_80242A54
#undef func_80242F38_StructGlobal
#undef func_8024315C
#undef func_8024443C
#define func_80242A54 func_80242A54__decl
#define func_8024315C func_8024315C__decl
#define func_80241D4C func_80241D4C__decl

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_80241DD0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_80241DD0.s","D_802582D0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_80241DD0.s")

#define D_802582D0 D_802582D0__func_80241DD0
#define func_8011AAF4 func_8011AAF4__func_80241DD0
#define func_80241F20 func_80241F20__func_80241DD0
#define func_80241F20_Arg func_80241F20_Arg__func_80241DD0
#define func_80241F20_Mid func_80241F20_Mid__func_80241DD0
#define func_80241F20_Node func_80241F20_Node__func_80241DD0
#define func_80241F20_Struct func_80241F20_Struct__func_80241DD0
#define G ((func_80241F20_Struct *)&D_801BBBF0)
typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80241F20_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241F20_Arg;
void func_80241F20(func_80241F20_Arg *arg0, s32 arg1);

typedef struct func_80241DD0_Local { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0x12]; } func_80241DD0_Local;
extern u8 D_802582D0[];

void func_80241DD0(func_80241F20_Arg *arg0, s32 arg1) {
    func_80241DD0_Local sp50;

    if (func_801C3044() == 0) {
        G->f1E8 = (-124.800003f);
        G->f1EC = 18.0f;
        G->f1F0 = 341.200012f;
        G->f1F4 = (-62.9000015f);
        G->f1F8 = 14.6000004f;
        G->f1FC = 299.200012f;
        func_8011AAF4(D_802582D0, 0x230, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
        sp50.a = 0x1000;
        sp50.b = 0x04100025;
        sp50.c = 3.0f;
        func_801C2F0C(4, &sp50.a);
        G->unkE0->unk2C->unk12 = 0x1C00;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241F20);
    }
}
#undef G
#undef D_802582D0
#undef func_8011AAF4
#undef func_80241F20
#undef func_80241F20_Arg
#undef func_80241F20_Mid
#undef func_80241F20_Node
#undef func_80241F20_Struct

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_80241F20.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_80241F20.s","D_80258310"],[".rodata","asm/nonmatchings/file015/80241550/func_80241F20.s","D_80258350"],[".rodata","asm/nonmatchings/file015/80241550/func_80241F20.s","D_80258390"],[".rodata","asm/nonmatchings/file015/80241550/func_80241F20.s","D_802583D0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_80241F20.s")

#define func_8024236C func_8024236C__func_80241F20
extern u8 D_801BBBF0[];

typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
typedef struct func_80241F20_StructLocal { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0xA]; } func_80241F20_StructLocal;
typedef struct func_80241F20_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241F20_Arg;

struct func_8024236C_Struct;
void func_8024236C(struct func_8024236C_Struct *arg0, void *arg1);
extern u8 D_80258310[], D_80258350[], D_80258390[], D_802583D0[];

void func_80241F20(func_80241F20_Arg *arg0, s32 arg1) {
    u16 t;
    f32 z = 0.0f;
    func_80241F20_StructLocal sp;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0x3C) {
        func_80020718(0x1AB);
    }
    if (t == 0x5A) {
        G->unk434 = 1;
        G->f1E8 = (-81.8000031f);
        G->f1EC = 13.0f;
        G->f1F0 = 311.700012f;
        G->f1F4 = (-71.9000015f);
        G->f1F8 = 6.80000019f;
        G->f1FC = 301.399994f;
        func_8011AAF4(D_80258310, 0x258, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        func_80020718(7);
    }
    if (t == 0x66) {
        G->f1E8 = -75.0f;
        G->f1EC = 16.7000008f;
        G->f1F0 = 305.100006f;
        G->f1F4 = (-50.2000008f);
        G->f1F8 = 16.1000004f;
        G->f1FC = 279.0f;
        func_8011AAF4(D_80258350, 0x267, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0x1000;
        sp.b = 0x01B8000B;
        sp.d = 0xA;
        sp.c = 1.0f;
        func_801C2F0C(3, &sp.a);
    }
    if (t == 0x84) {
        G->f1E8 = -75.0f;
        G->f1EC = 16.7000008f;
        G->f1F0 = 305.100006f;
        G->f1F4 = (-50.2000008f);
        G->f1F8 = 16.1000004f;
        G->f1FC = 279.0f;
        func_8011AAF4(D_80258390, 0x27C, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
    }
    if (t == 0x8E) {
        G->unkE0->unk2C->unk4 = (-57.0999985f);
        G->unkE0->unk2C->unkC = 318.100006f;
        G->unkE0->unk2C->unk12 = 0x1000;
        G->f1E8 = -59.5f;
        G->f1EC = 17.3999996f;
        G->f1F0 = 336.600006f;
        G->f1F4 = (-55.7999992f);
        G->f1F8 = 12.0f;
        G->f1FC = 295.600006f;
        func_8011AAF4(D_802583D0, 0x28D, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0;
        sp.b = 0x01B8000B;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp.a);
        func_800208C4(0x7C);
        func_800058DC(arg0, func_8024236C);
    }
}
#undef func_8024236C

#define func_802423E0 func_802423E0__func_8024236C

typedef struct func_8024236C_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_8024236C_Struct;

typedef struct func_8024236C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024236C_StructLocal;

extern void func_802423E0(s32 arg0, s32 arg1);

void func_8024236C(func_8024236C_Struct *arg0, void *arg1) {
    func_8024236C_StructLocal sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xA;
        sp18.unk8 = 1.0f;
        arg0->unk3C = 0;
        func_801C2F0C(3, (s16 *) &sp18);
        func_800058DC(arg0, func_802423E0);
    }
}
#undef func_802423E0

#define func_8024244C func_8024244C__func_802423E0

extern void func_8024244C(s32 arg0, s32 arg1);

typedef struct func_802423E0_Struct {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
} func_802423E0_Struct;

void func_802423E0(s32 arg0, s32 arg1) {
    s32 pad[5];
    func_802423E0_Struct sp;

    if (func_801C3044() == 0) {
        sp.unk0 = 0x1100;
        sp.unk4 = 0x04100026;
        sp.unk8 = 5.0f;
        func_801C2F0C(4, &sp.unk0);
        func_80133980(0x73);
        func_800058DC((void *) arg0, (void *) func_8024244C);
    }
}
#undef func_8024244C



typedef struct func_8024244C_Struct {
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s16 unk24;
    s32 unk28;
    f32 unk2C;
    s16 unk30;
    s16 unk32;
} func_8024244C_Struct;

void func_8024244C(s32 arg0, s32 arg1) {
    s32 pad;
    func_8024244C_Struct sp;

    if ((func_80133A24(0x73) != 0) && (func_800178E8() != 0)) {
        func_801339D0(0x73);
        sp.unk18 = (-49.4000015f);
        sp.unk1C = 288.399994f;
        sp.unk20 = 0.0f;
        sp.unk24 = 0x1100;
        sp.unk28 = 0x01B8001B;
        sp.unk2C = 1.0f;
        sp.unk30 = 0;
        sp.unk32 = 0x96;
        func_801C2F0C(2, (s16 *)&sp);
        func_800058DC((void *)arg0, (void *)func_802424FC);
    }
}

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_802424FC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_802424FC.s","D_80258410"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_802424FC.s")

#define func_80242638 func_80242638__func_802424FC
#define func_80242638_StructArg func_80242638_StructArg__func_802424FC
typedef struct func_80242638_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_80242638_StructArg;
extern void func_80242638(func_80242638_StructArg *arg0, s32 arg1);

extern u8 D_80258410[];

void func_802424FC(func_8024236C_Struct *arg0, s32 arg1) {
    func_8024236C_StructLocal sp;

    if (func_801C3044() == 0) {
        G->f1E8 = -71.0f;
        G->f1EC = 15.1000004f;
        G->f1F0 = 306.899994f;
        G->f1F4 = (-43.4000015f);
        G->f1F8 = 15.6999998f;
        G->f1FC = 284.299988f;
        func_8011AAF4(D_80258410, 0x303, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
        sp.unk0 = 0;
        sp.unk4 = 0x0348007A;
        sp.unkC = 0x14;
        sp.unk8 = 1.0f;
        arg0->unk3C = 0;
        func_801C2F0C(3, &sp.unk0);
        func_800058DC(arg0, func_80242638);
    }
}
#undef func_80242638
#undef func_80242638_StructArg


typedef struct func_80242638_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_80242638_StructInner;

typedef struct func_80242638_StructNode {
    u8 pad[0x2C];
    func_80242638_StructInner *unk2C;
} func_80242638_StructNode;

typedef struct func_80242638_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0xE0 - 6];
    func_80242638_StructNode *unkE0;
    u8 pad2[0x434 - 0xE4];
    u8 unk434;
} func_80242638_StructGlobal;

typedef struct func_80242638_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_80242638_StructArg;

extern func_80242638_StructNode *D_801BBCD0;

void func_80242638(func_80242638_StructArg *arg0, s32 arg1) {
    s32 count;

    count = arg0->unk3C++;
    ((func_80242638_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk12 =
        func_801FD284(D_801BBCD0->unk2C->unk12, 0x1C00, 0.1f);
    if (count == 0x28) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk434 = 4;
        func_80020718(8);
    }
    if (count == 0x46) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4 = 0x16;
        func_8012FE50(0x1E,
            ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4,
            6, 1, 0);
    }
}


void func_802426EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80242730 func_80242730__func_802426F8

extern void func_80242730();

void func_802426F8(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80242730);
}
#undef func_80242730

#define func_802427E8 func_802427E8__func_80242730
struct func_80243290_StructTriple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2);

typedef struct func_80242730_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80242730_StructInner;

typedef struct func_80242730_StructOuter {
    u8 pad0[0x2C];
    func_80242730_StructInner *unk2C;
} func_80242730_StructOuter;

typedef struct func_80242730_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80242730_StructArg;

extern struct func_80243290_StructTriple D_802520BC;

void func_80242730(func_80242730_StructArg *arg0, void **arg1) {
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk4 = -59.5f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unkC = 278.600006f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk12 = 0x1B1C;
    func_8013A1B4(arg1, D_802520BC, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_802427E8);
}
#undef func_802427E8

#define func_80242874 func_80242874__func_802427E8

extern void func_80242874();
extern struct func_80243290_StructTriple D_802520C8;

void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4((void **) arg1, D_802520C8, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80242874);
    }
}
#undef func_80242874

#define func_802428C0 func_802428C0__func_80242874

typedef struct func_80242874_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242874_Struct;

extern void func_802428C0();

void func_80242874(func_80242874_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800179B0(D_80252134);
        func_800058DC(arg0, func_802428C0);
    }
}
#undef func_802428C0

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_802428C0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_802428C0.s","D_80258450"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_802428C0.s")

#define func_802429D8 func_802429D8__func_802428C0

typedef struct func_802428C0_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_802428C0_Struct;
typedef struct func_802428C0_Arg {
    u8 pad0[0x90];
    u16 unk90;
} func_802428C0_Arg;

struct func_802429D8_StructArg;
void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1);

void func_802428C0(func_802428C0_Arg *arg0, s32 arg1) {
    func_802428C0_Struct *s;
    if (func_800178E8() != 0) {
        s = (func_802428C0_Struct *)&D_801BBBF0;
        s->unk1E8 = (-47.2999992f);
        s->unk1EC = 13.1000004f;
        s->unk1F0 = 262.100006f;
        s->unk1F4 = (-71.1999969f);
        s->unk1F8 = 16.5f;
        s->unk1FC = 312.399994f;
        func_8011AAF4(D_80258450, 0x376, arg0, 0, 1, 0.0f, s->unk1E8, s->unk1EC, s->unk1F0, 0.0f, s->unk1F4, s->unk1F8, s->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80252164);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802429D8);
    }
}
#undef func_802429D8


struct func_802429D8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

struct func_802429D8_StructNode {
    u8 pad0[0x2C];
    struct func_802429D8_StructInner *unk2C;
};

struct func_802429D8_StructArg {
    u8 pad0[0x90];
    u16 unk90;
};



void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1) {
    if (arg0->unk90 == 0) {
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk4 = -61.0f;
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unkC = 312.299988f;
        arg0->unk90 = 1;
    }
    if (func_800178E8() != 0) {
        func_800058DC(arg0, func_80242A54);
    }
}

#undef func_80242A54
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80242A54
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

typedef struct func_80242A54_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80242A54_StructArg;

extern func_80242F38_StructGlobal D_802520D4;
extern u8 D_802521D8[];
extern void func_80242B14();

void func_80242A54(func_80242A54_StructArg *arg0, void ** volatile arg1)
{
  s32 new_var2;
  unsigned int new_var;
  new_var2 = (*arg0).unk5C;
  new_var = 0xFFFFFF;
  if (func_80011140(arg1, new_var2, D_802520D4, 0x14) && func_800178E8())
  {
    func_8013A1B4(arg1, D_802520D4, new_var);
    func_800179B0(D_802521D8);
    func_800058DC(arg0, func_80242B14);
  }
  if (1)
  {
  }
}
#undef func_80242F38_StructGlobal
#define func_80242A54 func_80242A54__decl

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_80242B14.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_80242B14.s","D_80258490"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_80242B14.s")



typedef struct func_80242B14_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242B14_Struct;

typedef struct func_80242B14_StructG {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80242B14_StructG;

void func_80242B14(func_80242B14_Struct *arg0, s32 arg1) {
    func_80242B14_StructG *g;
    s32 t = arg0->unk5C;

    if (func_80010550(arg1, t, arg1) != 0) {
        if (func_800178E8() != 0) {
            g = (func_80242B14_StructG *)&D_801BBBF0;
            g->unk1E8 = (-56.0999985f);
            g->unk1EC = 16.6000004f;
            g->unk1F0 = 301.299988f;
            g->unk1F4 = -61.5f;
            g->unk1F8 = 16.5f;
            g->unk1FC = 312.700012f;
            func_8011AAF4(D_80258490, 0x3AD, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80252244);
            func_800058DC(arg0, func_80242C3C);
        }
    }
}

#undef func_80242C3C
/* hh-block asm/nonmatchings/file015/80241550/_ro_func_80242C3C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_80242C3C.s","D_802584D0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_80242C3C.s")

#define D_802584D0 D_802584D0__func_80242C3C
#define func_802429D8 func_802429D8__func_80242C3C
#define func_802429D8_StructArg func_802429D8_StructArg__func_80242C3C
#define func_80242D48 func_80242D48__func_80242C3C
#define func_80242D48_Struct func_80242D48_Struct__func_80242C3C
struct func_802429D8_StructArg {
    u8 pad0[0x90];
    u16 unk90;
};
typedef struct func_80242D48_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80242D48_Struct;
extern void func_80242D48(func_80242D48_Struct *arg0, s32 arg1);

typedef struct func_80242C3C_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80242C3C_Struct;
typedef struct func_80242C3C_Arg {
    u8 pad0[0x90];
    u16 unk90;
} func_80242C3C_Arg;

extern u8 D_802584D0[];
struct func_802429D8_StructArg;
void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1);

void func_80242C3C(func_80242C3C_Arg *arg0, s32 arg1) {
    func_80242C3C_Struct *s;
    if (func_800178E8() != 0) {
        s = (func_80242C3C_Struct *)&D_801BBBF0;
        s->unk1E8 = (-47.2999992f);
        s->unk1EC = 13.1000004f;
        s->unk1F0 = 262.100006f;
        s->unk1F4 = (-71.1999969f);
        s->unk1F8 = 16.5f;
        s->unk1FC = 312.399994f;
        func_8011AAF4(D_802584D0, 0x3C4, arg0, 0, 1, 0.0f, s->unk1E8, s->unk1EC, s->unk1F0, 0.0f, s->unk1F4, s->unk1F8, s->unk1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80242D48);
    }
}
#undef D_802584D0
#undef func_802429D8
#undef func_802429D8_StructArg
#undef func_80242D48
#undef func_80242D48_Struct
#define func_80242C3C func_80242C3C__decl


typedef struct func_80242D48_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80242D48_Struct;

extern struct func_80243290_StructTriple D_802520E0;

void func_80242D48(func_80242D48_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4((void **) arg1, D_802520E0, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80242DCC);
    }
}

/* hh-block asm/nonmatchings/file015/80241550/_ro_func_80242DCC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80241550/func_80242DCC.s","D_80258510"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80241550/_ro_func_80242DCC.s")

#define func_80242F38 func_80242F38__func_80242DCC
#define func_80242F38_StructArg func_80242F38_StructArg__func_80242DCC
typedef struct func_80242F38_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242F38_StructArg;
extern void func_80242F38(func_80242F38_StructArg *arg0, void ** volatile arg1);

typedef struct func_80242DCC_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x30];
    u16 unk90;
} func_80242DCC_Struct;

extern u8 D_802522C0[];
extern u8 D_80258510[];

void func_80242DCC(func_80242DCC_Struct *arg0, unsigned int arg1)
{
  s32 a3;
  u16 v;
  func_80242DCC_Struct *p;
  v = arg0->unk90;
  a3 = arg0->unk5C;
  arg0->unk90 = 1 + v;
  p = arg0;
  if (((s32) v) < 0x5A)
  {
    func_80010550(arg1, a3, (s32) p);
    return;
  }
  if (v == 0x5A)
  {
    func_800179B0(D_802522C0);
    return;
  }
  if ((func_80010550(arg1, a3, (s32) p) != 0) && (func_800178E8() != 0))
  {
 if (1) { } if (1) { } if (1) { }
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1E8 = -115.0f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1EC = 1.39999998f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F0 = 334.700012f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F4 = (-43.5999985f);
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F8 = 23.0f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1FC = 285.200012f;
    func_8011AAF4(D_80258510, 0x3F0, p, 0, 1, 0.0f, ((func_80241F20_Struct *) (&D_801BBBF0))->f1E8, ((func_80241F20_Struct *) (&D_801BBBF0))->f1EC, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F0, 0.0f, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F4, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F8, ((func_80241F20_Struct *) (&D_801BBBF0))->f1FC, 0.0f, 35.0f, -1, -1);
    func_800058DC(p, (void *) func_80242F38);
  }
}
#undef func_80242F38
#undef func_80242F38_StructArg

#define func_80242FE8 func_80242FE8__func_80242F38

typedef struct func_80242F38_StructInner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x6];
    s16 unk12;
} func_80242F38_StructInner;

typedef struct func_80242F38_StructNode {
    u8 pad0[0x2C];
    func_80242F38_StructInner *unk2C;
} func_80242F38_StructNode;

typedef struct func_80242F38_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242F38_StructArg;

typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

extern s32 func_80011140(void **, s32, func_80242F38_StructGlobal, s32);
extern func_80242F38_StructGlobal D_802520F8;
extern void func_80242FE8();

void func_80242F38(func_80242F38_StructArg *arg0, void ** volatile arg1) {
    s32 temp;

    temp = arg0->unk5C;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk12 = 0x1EAA;
    if ((func_80011140(arg1, temp, D_802520F8, 0x1E) != 0) && (func_800178E8() != 0)) {
        func_800179B0(D_80252320);
        func_800058DC(arg0, func_80242FE8);
    }
}
#undef func_80242FE8

#define func_800058DC func_800058DC__func_80242FE8
#define func_800178E8 func_800178E8__func_80242FE8
#define func_80243020 func_80243020__func_80242FE8

s32 func_800178E8(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_80243020();

void func_80242FE8(u64 arg0) {
    if (func_800178E8(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80243020);
    }
}
#undef func_800058DC
#undef func_800178E8
#undef func_80243020

#define func_802430D4 func_802430D4__func_80243020

extern void func_802430D4();

void func_80243020(u8 *arg0, void ** volatile arg1)
{
  s32 new_var;
  new_var = *((s32 *) (arg0 + 0x5C));
  if ((func_80011140(arg1, new_var, D_802520F8, 0xF) != 0) && (func_800178E8() != 0))
  {
    func_8013A1B4(arg1, D_802520F8, 0xFFFFFF);
    func_800058DC(arg0, (void *) func_802430D4);
  }
}
#undef func_802430D4

typedef struct func_802430D4_S { s32 a, b, c; } func_802430D4_S;
extern func_802430D4_S D_80252104;

void func_802430D4(u8 *arg0, s32 volatile arg1) {
    extern s32 func_80010550();
    s32 t = *(s32 *)(arg0 + 0x5C);
    if (func_80010550(arg1, t)) {
        func_80133980(0x77);
        func_8013A1B4(arg1, D_80252104, 0xFFFFFF);
        *(s16 *)(arg0 + 0x90) = 0;
        func_800058DC(arg0, func_8024315C);
    }
}

#undef func_8024315C
#define func_80243200 func_80243200__func_8024315C
extern void func_80243200(void *arg0, void *arg1);

typedef struct func_8024315C_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024315C_Struct;

extern struct func_80243290_StructTriple D_80252110;
extern u8 D_80252378[];

void func_8024315C(func_8024315C_Struct *arg0, volatile s32 arg1)
{
  s32 temp_a2;
  u16 temp_v0;
  s32 ready;
  temp_a2 = arg0->unk5C;
  ready = (arg0->unk90++) >= 0x1E;
  if (ready && func_80010550(arg1, temp_a2 & 0xFFFFFFFF, temp_a2))
  {
    if (1)
    {
    }
    func_8013A1B4(arg1, D_80252110, 0xFFFFFF);
    func_800179B0(D_80252378);
    func_800058DC(arg0, func_80243200);
  }
}
#undef func_80243200
#define func_8024315C func_8024315C__decl

#define func_8024324C func_8024324C__func_80243200

extern void func_8024324C(s32 arg0, s32 arg1);

void func_80243200(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_8024324C);
    }
}
#undef func_8024324C


void func_8024324C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80243290 func_80243290__func_80243258

extern void func_80243290();

void func_80243258(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x57, 0, 4, func_80243290);
}
#undef func_80243290

#define func_80243348 func_80243348__func_80243290

struct func_80243290_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_80243290_StructOuter {
    u8 pad0[0x2C];
    struct func_80243290_StructInner *unk2C;
};

struct func_80243290_StructArg {
    u8 pad0[0x90];
    s16 unk90;
};


extern struct func_80243290_StructTriple D_8025211C;

extern void func_80243348();

void func_80243290(struct func_80243290_StructArg *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk4 = (-43.7999992f);
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unkC = 286.100006f;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_8025211C, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80243348);
}
#undef func_80243348

#define func_802433D4 func_802433D4__func_80243348

extern void func_802433D4();
extern struct func_80243290_StructTriple D_80252128;

void func_80243348(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_8013A1B4((void **) arg1, D_80252128, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_802433D4);
    }
}
#undef func_802433D4

#define func_80243414 func_80243414__func_802433D4

struct func_802433D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern void func_80243414(s32 arg0, s32 arg1);

void func_802433D4(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_80243414);
    }
}
#undef func_80243414


void func_80243414(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

