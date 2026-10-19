#include "common.h"


extern void func_80011198(s32 a0, void *a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);
extern void func_8024092C(void);

typedef struct func_802408F0_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_802408F0_Struct;

void func_802408F0(func_802408F0_Struct *arg0, s32 arg1) {
    void *temp = arg0->unk5C;

    func_80011198(arg1, temp, arg1);
    func_800058DC(arg0, func_8024092C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_8024092C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240BD4.s")


void func_80240D98(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_801BBBF0[];

typedef struct func_80240DA4_SB { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[2]; s16 s12; } func_80240DA4_SB;
typedef struct func_80240DA4_SH { u8 pad[0x2C]; func_80240DA4_SB *p2C; } func_80240DA4_SH;
typedef struct func_80240DA4_SC { u8 pad[0x24]; func_80240DA4_SH *p24; } func_80240DA4_SC;
typedef struct func_80240DA4_SE { u8 pad[0x30]; f32 f30, f34, f38, f3C, f40, f44; } func_80240DA4_SE;
typedef struct func_80240DA4_SG { u8 pad[0x2C]; func_80240DA4_SE *p2C; } func_80240DA4_SG;
typedef struct func_80240DA4_SD { u8 pad[0x2C]; void *p2C; u8 pad30[4]; f32 f34, f38, f3C; s16 s40, s42; f32 f44, f48; u8 b4C; u8 pad4D[3]; f32 f50; s32 w54; s32 w58; s16 s5C, s5E; f32 f60, f64, f68, f6C, f70, f74, f78; } func_80240DA4_SD;
typedef struct func_80240DA4_SF { u8 pad[0xE8]; func_80240DA4_SG *pE8; u8 padEC[0x1118-0xEC]; func_80240DA4_SD *p1118; } func_80240DA4_SF;

extern func_80240DA4_SD *func_80005670();
extern f32 func_8001EAD0();
extern f32 func_8001EB64();
extern s32 func_80374E48();
extern u8 D_80248DA8[];

#define G ((func_80240DA4_SF *)D_801BBBF0)

void func_80240DA4(func_80240DA4_SC *arg0, s32 arg1, f32 arg2, s32 arg3) {
    func_80240DA4_SD *v;
    func_80240DA4_SB *t;
    if (G->p1118 == NULL && func_80374E48(arg0, arg1, 0) != 0) {
        t = arg0->p24->p2C;
        v = func_80005670(arg0, D_80248DA8);
        G->p1118 = v;
        if (v != NULL) {
            v->p2C = arg0;
            G->p1118->f34 = t->f4;
            G->p1118->f38 = t->f8;
            G->p1118->f3C = t->fC;
            G->p1118->s40 = t->s12;
            G->p1118->f44 = func_8001EAD0(G->p1118->s40);
            G->p1118->f48 = func_8001EB64(G->p1118->s40);
            G->p1118->b4C = 0;
            G->p1118->f50 = arg2;
            G->p1118->w54 = 0;
            G->p1118->w58 = arg1;
            G->p1118->s42 = 0;
            G->p1118->s5C = 10;
            G->p1118->s5E = 0;
            G->p1118->f60 = G->pE8->p2C->f30;
            G->p1118->f64 = G->pE8->p2C->f34;
            G->p1118->f68 = G->pE8->p2C->f38;
            G->p1118->f6C = G->pE8->p2C->f3C;
            G->p1118->f70 = G->pE8->p2C->f40;
            G->p1118->f74 = G->pE8->p2C->f44;
            G->p1118->f78 = 35.0f;
        }
    }
}


extern void func_8037488C(s32 arg0, void *arg1);
extern void func_80240FA0();

void func_80240F44(s32 arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = *(u16 **) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x58);
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x30) = temp_v0[0];
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x32) = temp_v0[1];
    func_8037488C(arg0, D_801BBBF0);
    func_800058DC(arg0, func_80240FA0);
}

void func_80240FE4(s32 arg0, s32 arg1);

s32 func_80374994();
extern u8 *D_801BCD08;

void func_80240FA0(s32 arg0, s32 arg1) {
    if (func_80374994() != 0) {
        *(s16 *)(D_801BCD08 + 0x5E) = 0;
        func_800058DC((void *)arg0, &func_80240FE4);
    }
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_80240FE4(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

