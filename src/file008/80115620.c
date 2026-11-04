#include "common.h"

extern u8 D_801BBBF0[];
extern u8 D_80163B8C[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *);
extern void func_8011A724(s32 arg0);
extern void func_8011A7FC(void);
extern void func_8011AA0C(s32 arg0, void *arg1, void *arg2);
void func_8011570C(s32 arg0, s32 arg1);
void func_80115734(s32 arg0, s32 arg1);

typedef struct func_80115620_StructC { u8 pad0[0x24]; f32 f24; f32 f28; } func_80115620_StructC;
typedef struct func_80115620_StructB { u8 pad0[0x2C]; func_80115620_StructC *p2C; } func_80115620_StructB;
typedef struct func_80115620_StructA {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_80115620_StructB *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_80115620_StructA;
#define F8010E680_G ((func_80115620_StructA *)D_801BBBF0)

void func_80115620(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80163B8C);
    func_80006214(arg0);
    F8010E680_G->s54 = arg0;
    F8010E680_G->sE4 = F8010E680_G->s54;
    F8010E680_G->sE8 = *(func_80115620_StructB **)(F8010E680_G->sE4 + 0x24);
    func_8011A724(0);
    F8010E680_G->sE8->p2C->f24 = F8010E680_G->f29C;
    F8010E680_G->sE8->p2C->f28 = F8010E680_G->f2A0;
    if (F8010E680_G->b2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_80115734);
        return;
    }
    if (F8010E680_G->b2B5 == 2) {
        func_8011AA0C(arg0, func_8011570C, func_80115734);
        return;
    }
    func_800058DC(arg0, func_80115734);
}


extern void func_8011AA54(s32 arg0, void (*arg1)(void));

void func_8011570C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115734);
}


typedef struct func_80115734_StructF {
    u8 pad0[0x4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[0x14];
    f32 f24;
    f32 f28;
    u8 pad2C[0x4];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
} func_80115734_StructF;

typedef struct func_80115734_StructO {
    u8 pad0[0x24];
    struct func_80115734_StructO *o24;
    u8 pad28[0x4];
    func_80115734_StructF *p2C;
} func_80115734_StructO;

typedef struct func_80115734_StructG {
    u8 pad0[0xE0];
    func_80115734_StructO *oE0;
    u8 padE4[4];
    func_80115734_StructO *oE8;
    u8 padEC[0x29C - 0xEC];
    f32 f29C;
    f32 f2A0;
    u8 pad2A4[0x2AD - 0x2A4];
    u8 u2AD;
    u8 pad2AE[0x2B5 - 0x2AE];
    u8 u2B5;
    u8 pad2B6[0x1048 - 0x2B6];
    func_80115734_StructO *o1048;
} func_80115734_StructG;

#define G_80115734 ((func_80115734_StructG *)D_801BBBF0)

extern u8 D_80115734[];
extern f32 D_80163B9C;
extern f32 D_80163BA0;
extern f32 D_80163BA4;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32, s32, s32);
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern void func_8011A148(s16, s16, s16, f32 *, f32 *, f32 *);
extern void func_8011A878(f32, f32);

void func_80115734(s32 arg0, s32 arg1) {
    s16 sp56;
    s16 sp54;
    s16 sp52;
    f32 var_ft5;
    f32 var_ft4;
    s16 sp46;
    s16 d;
    s16 a1;
    f32 sp3C;
    func_80115734_StructF *pv1;
#define sa0 arg0
#define var_a0 arg0
#define a0b arg0

    G_80115734->oE8->p2C->f24 = G_80115734->f29C;
    G_80115734->oE8->p2C->f28 = G_80115734->f2A0;
    if (G_80115734->u2AD != 0) {
        if (G_80115734->u2B5 == 1) {
            func_8011A724(1);
            func_8011A7FC();
        } else if (G_80115734->u2B5 == 2) {
            func_8011AA0C(arg0, func_8011570C, D_80115734);
            return;
        } else {
            G_80115734->u2AD = 0;
            G_80115734->u2B5 = 0;
        }
    }
    func_8011A0F0(&sp52);
    if (G_80115734->o1048 != NULL) {
        var_ft5 = G_80115734->o1048->o24->p2C->f4;
    } else {
        var_ft5 = G_80115734->oE0->p2C->f4;
    }
    if (G_80115734->o1048 != NULL) {
        var_ft4 = G_80115734->o1048->o24->p2C->fC;
    } else {
        var_ft4 = G_80115734->oE0->p2C->fC;
    }
    G_80115734->oE8->p2C->f30 = 125.0f;
    G_80115734->oE8->p2C->f34 = G_80115734->oE0->p2C->f8 + 3.0f;
    if (G_80115734->oE0->p2C->fC < var_ft4) {
        var_a0 = -1;
    } else {
        var_a0 = 1;
    }
    G_80115734->oE8->p2C->f38 = (f32)(var_a0 * 30) + G_80115734->oE0->p2C->fC;
    G_80115734->oE8->p2C->f3C = (G_80115734->oE0->p2C->f4 + var_ft5) * 0.5;
    G_80115734->oE8->p2C->f40 = G_80115734->oE0->p2C->f8 + 17.0f;
    G_80115734->oE8->p2C->f44 = (G_80115734->oE0->p2C->fC + var_ft4) * 0.5;
    sp46 = func_8001EF38(G_80115734->oE0->p2C->fC - G_80115734->oE8->p2C->f38, G_80115734->oE0->p2C->f4 - G_80115734->oE8->p2C->f30);
#define v1 G_80115734->oE8->p2C
    d = sp46 - func_8001EF38(v1->f44 - v1->f38, v1->f3C - v1->f30);
    if (d & 0x1000) {
        a1 = (d & 0x1FFF) - 0x2000;
    } else {
        a1 = d & 0x1FFF;
    }
    if (a1 < 0) {
        a0b = -a1;
    } else {
        a0b = a1;
    }
    if (a0b > 0x180) {
        sp3C = func_8002FC20((v1->f30 - v1->f3C) * (v1->f30 - v1->f3C) + (v1->f38 - v1->f44) * (v1->f38 - v1->f44), a1, sp46);
        if (a1 < 0) {
            G_80115734->oE8->p2C->f3C = func_8001EB64(sp46 + 0x180) * sp3C + G_80115734->oE8->p2C->f30;
            G_80115734->oE8->p2C->f44 = func_8001EAD0(sp46 + 0x180) * sp3C + G_80115734->oE8->p2C->f38;
        } else {
            G_80115734->oE8->p2C->f3C = func_8001EB64(sp46 - 0x180) * sp3C + G_80115734->oE8->p2C->f30;
            G_80115734->oE8->p2C->f44 = func_8001EAD0(sp46 - 0x180) * sp3C + G_80115734->oE8->p2C->f38;
        }
    }
    func_8011A878(D_80163B9C, D_80163BA4);
    pv1 = G_80115734->oE0->p2C;
    D_80163B9C = pv1->f4;
    D_80163BA0 = pv1->f8;
    D_80163BA4 = pv1->fC;
    func_80119F9C(&sp56, &sp54);
    func_8011A148(sp56, sp54, sp52, &v1->f48, &v1->f4C, &v1->f50);
}

extern u8 D_80163BFC[];
void func_80115C3C(s32 arg0, s32 arg1);
void func_80115C64(s32 arg0, s32 arg1);

typedef struct func_80115B50_StructC { u8 pad0[0x24]; f32 f24; f32 f28; } func_80115B50_StructC;
typedef struct func_80115B50_StructB { u8 pad0[0x2C]; func_80115B50_StructC *p2C; } func_80115B50_StructB;
typedef struct func_80115B50_StructA {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_80115B50_StructB *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_80115B50_StructA;
#define F8010E680_G ((func_80115B50_StructA *)D_801BBBF0)

void func_80115B50(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80163BFC);
    func_80006214(arg0);
    F8010E680_G->s54 = arg0;
    F8010E680_G->sE4 = F8010E680_G->s54;
    F8010E680_G->sE8 = *(func_80115B50_StructB **)(F8010E680_G->sE4 + 0x24);
    func_8011A724(0);
    F8010E680_G->sE8->p2C->f24 = F8010E680_G->f29C;
    F8010E680_G->sE8->p2C->f28 = F8010E680_G->f2A0;
    if (F8010E680_G->b2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_80115C64);
        return;
    }
    if (F8010E680_G->b2B5 == 2) {
        func_8011AA0C(arg0, func_80115C3C, func_80115C64);
        return;
    }
    func_800058DC(arg0, func_80115C64);
}



void func_80115C3C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115C64);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/D_801884E0.s")
#define D_80115C64 D_80115C64__func_80115C64
#define D_80163C0C D_80163C0C__func_80115C64
#define D_80163C10 D_80163C10__func_80115C64
#define D_80163C14 D_80163C14__func_80115C64


typedef struct func_80115C64_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[0x14];
    f32 f24;
    f32 f28;
    u8 pad2C[0x4];
    f32 f30, f34, f38, f3c, f40, f44, f48, f4c, f50;
} func_80115C64_StructB;
typedef struct func_80115C64_StructA {
    u8 pad0[0x2C];
    func_80115C64_StructB *p2C;
} func_80115C64_StructA;
typedef struct func_80115C64_Struct {
    u8 pad0[4];
    u16 h4;
    u8 pad6[0xE0 - 6];
    func_80115C64_StructA *pE0;
    u8 padE4[4];
    func_80115C64_StructA *pE8;
    u8 padEC[0x29C - 0xEC];
    f32 f29C, f2A0;
    u8 pad2A4[0x2AD - 0x2A4];
    u8 b2AD;
    u8 pad2AE[0x2B5 - 0x2AE];
    u8 b2B5;
    u8 pad2B6[0x2C4 - 0x2B6];
    f32 f2C4;
    u8 pad2C8[0x2D0 - 0x2C8];
    f32 f2D0;
    u8 pad2D4[0x2DC - 0x2D4];
    f32 f2DC;
    u8 pad2E0[0x2EC - 0x2E0];
    f32 f2EC;
    u8 pad2F0[0x2F8 - 0x2F0];
    f32 f2F8;
    u8 pad2FC[0x304 - 0x2FC];
    f32 f304;
} func_80115C64_Struct;

#define G ((func_80115C64_Struct *)D_801BBBF0)
#define H ((func_80115C64_Struct *)(u32)D_801BBBF0)
extern f32 D_80163C0C;
extern f32 D_80163C10;
extern f32 D_80163C14;
/* own address; the standalone link puts the defined name at the .text base */
extern u8 D_80115C64[];

void func_80115C64(s32 a0, s32 a1) {
    s16 sp46;
    s16 sp44;
    s16 sp42;
    func_80115C64_StructB *p;

    G->pE8->p2C->f24 = G->f29C;
    G->pE8->p2C->f28 = G->f2A0;
    if (G->b2AD == 0) goto next;
    if ((u32)G->b2B5 == 1) {
        func_8011A724(1);
        func_8011A7FC();
        goto next;
    }
    if ((u32)G->b2B5 == 2) {
        func_8011AA0C(a0, func_80115C3C, D_80115C64);
        return;
    }
    G->b2AD = 0;
    G->b2B5 = 0;
next:
    func_8011A0F0(&sp42);
    if (G->h4 == 0x25) {
        p = G->pE0->p2C;
        if (0.1 < ((p->f4 < 40.0) ? -(p->f4 - 40.0) : (p->f4 - 40.0))) {
            a0 = (p->f4 < 40.0) ? -1 : 1;
            p->f4 = p->f4 - 0.1 * a0;
        } else {
            p->f4 = 40.0f;
        }
    }
    G->pE8->p2C->f30 = H->f2C4 + G->pE0->p2C->f4;
    G->pE8->p2C->f34 = H->f2D0 + G->pE0->p2C->f8;
    G->pE8->p2C->f38 = H->f2DC + G->pE0->p2C->fC;
    G->pE8->p2C->f3c = H->f2EC + G->pE0->p2C->f4;
    G->pE8->p2C->f40 = H->f2F8 + G->pE0->p2C->f8;
    G->pE8->p2C->f44 = H->f304 + G->pE0->p2C->fC;
    func_8011A878(D_80163C0C, D_80163C14);
    p = G->pE0->p2C;
    D_80163C0C = p->f4;
    D_80163C10 = p->f8;
    D_80163C14 = p->fC;
    /* empty if: extra blocks lower the &D_801BBBF0 web priority so uopt splits it instead of using $s0 */
    if (p) {
    }
    func_80119F9C(&sp46, &sp44);
    p = G->pE8->p2C;
    func_8011A148(sp46, sp44, sp42, &p->f48, &p->f4c, &p->f50);
}
#undef G
#undef H
#undef D_80115C64
#undef D_80163C0C
#undef D_80163C10
#undef D_80163C14

