#include "common.h"
#define ZP2(a, b) a##b
#define ZP1(a, b) ZP2(a, b)
#define zA_140 func_8012CE9C_ctx140
#define zA_756 func_8012CE9C
extern void D_8012D8C8(void *, s32, s32, f32, s32, s32);
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern struct func_802474E4_StructMid *D_801BBCD0;
extern u8 D_80258FE0[];
typedef struct func_80249704_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80249704_StructInner;
typedef struct func_80249704_StructObj {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
    func_80249704_StructInner *unk30;
} func_80249704_StructObj;
typedef struct func_80249704_StructGlob {
    u8 pad0[0x24];
    func_80249704_StructObj *unk24;
} func_80249704_StructGlob;
extern func_80249704_StructGlob *D_8025C6EC;
extern s8 D_8025C6FD;
typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern struct func_80249A58_StructTbl D_8025C728[];
extern s16 D_8025C7E2;
#define N (arg0->unk24->unk2C)
extern void func_80005700(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
typedef struct func_802491C4_StructNode {
    u8 pad[4];
    f32 x, y;
    s32 z;
} func_802491C4_StructNode;
typedef struct func_802491C4_StructMid {
    u8 pad[0x30];
    func_802491C4_StructNode *node;
} func_802491C4_StructMid;
typedef struct func_802491C4_Struct {
    u8 pad[0x24];
    func_802491C4_StructMid *mid;
    u8 pad28[0x70];
    u16 kind;
} func_802491C4_Struct;
void func_802491C4(func_802491C4_Struct *arg0);
extern void func_8037BB4C(s16, f32, f32, s16);


typedef struct func_8024A168_StructS {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    s16 s10;
    s16 s12;
    s16 s14;
    u8 pad16[2];
    f32 f18;
    f32 f1C;
    f32 f20;
    s32 w24;
    u8 pad28[8];
    s32 w30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
    u8 b4C;
    u8 b4D;
    u8 b4E;
} func_8024A168_StructS;
typedef struct func_8024A168_StructO {
    u8 pad0[0x30];
    func_8024A168_StructS *p;
} func_8024A168_StructO;
typedef struct func_8024A168_StructA {
    u8 pad0[0x24];
    func_8024A168_StructO *o24;
    u8 pad28[0x68];
    s16 s90;
    s16 s92;
    s16 s94;
    s16 s96;
} func_8024A168_StructA;
typedef struct func_8024A168_StructN {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
} func_8024A168_StructN;
typedef struct func_8024A168_StructM {
    u8 pad0[0x2C];
    func_8024A168_StructN *n2C;
} func_8024A168_StructM;
typedef struct func_8024A168_StructG {
    u8 pad0[0x24];
    func_8024A168_StructM *m24;
} func_8024A168_StructG;
typedef struct func_8024A168_StructB {
    func_8024A168_StructO *o[6];
} func_8024A168_StructB;

#define NG ((func_8024A168_StructG *)D_8025C6EC)->m24->n2C
#define NB ((func_8024A168_StructM *)D_801BBCD0)->n2C
#define VV arg1->o[5]->p
#define DD(N) (((N)->f4 - VV->f4) * ((N)->f4 - VV->f4) + ((N)->fC - VV->fC) * ((N)->fC - VV->fC))

void func_8024A168(func_8024A168_StructA *arg0, func_8024A168_StructB *arg1) {
    s32 k;

    func_802491C4((void *)arg0);
    if ((k = 6, arg1->o[1]->p->f18) < 0.4) {
        arg1->o[1]->p->f18 += 0.05;
        arg1->o[1]->p->f1C += 0.05;
        arg1->o[1]->p->f20 += 0.05;
    }
    arg1->o[0]->p->f18 += 0.005;
    arg1->o[0]->p->f1C += 0.005;
    arg1->o[0]->p->f20 += 0.005;
    if (arg1->o[0]->p->b4B >= 0x11) {
        arg1->o[0]->p->b4B -= 0x10;
        arg1->o[0]->p->s12 -= 0x300;
    } else {
        arg1->o[0]->p->b4B = 0;
    }
    arg1->o[2]->p->f18 += 0.01;
    arg1->o[2]->p->f1C += 0.01;
    arg1->o[2]->p->f20 += 0.01;
    if (arg1->o[2]->p->b4B >= 0x11) {
        arg1->o[2]->p->b4B -= 0x10;
        arg1->o[2]->p->s10 = 0;
        arg1->o[2]->p->s12 += 0x800;
        arg1->o[2]->p->s14 = 0;
    } else {
        arg1->o[0]->p->b4B = 0;
    }
    if (arg1->o[3]->p->f18 < 3.0) {
        arg1->o[3]->p->f18 += 0.05;
        arg1->o[3]->p->f1C += 0.05;
        arg1->o[3]->p->f20 += 0.05;
    }
    if (arg1->o[3]->p->b4B >= 9) {
        arg1->o[3]->p->b4B -= 7;
    } else {
        arg1->o[3]->p->b4B = 0;
    }
    k = 6;
    do {
        arg1->o[k]->p->f8 -= 0.5;
        k += 1;
    } while (k < 0xB);
    if ((arg0->s94++ % 3) == 0) {
        k = arg0->s96;
        func_8012C89C(arg0, k, 3, 4);
        D_8012D8C8(arg0, 0x3D0, 7, (f32)(k * 0.010), 2, k);
        arg1->o[k]->p->w24 = 0x60300;
        arg1->o[k]->p->w30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(arg1->o[k], 0x800005FF);
        arg1->o[k]->p->f18 = 0.1f;
        arg1->o[k]->p->f1C = 0.1f;
        arg1->o[k]->p->f20 = 0.1f;
        arg1->o[k]->p->b48 = 0xFF;
        arg1->o[k]->p->b49 = 0xFF;
        arg1->o[k]->p->b4A = 0xFF;
        arg1->o[k]->p->b4B = arg1->o[3]->p->b4B;
        arg1->o[k]->p->b4C = 0xFF;
        arg1->o[k]->p->b4D = 0;
        arg1->o[k]->p->b4E = 0;
        arg1->o[k]->p->f4 = arg1->o[1]->p->f4 + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg1->o[k]->p->f8 = (arg1->o[1]->p->f8 + 10.0f) + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg1->o[k]->p->fC = arg1->o[1]->p->fC + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg0->s96 = arg0->s96 + 1;
        if (arg0->s96 == 0xB) {
            arg0->s96 = 6;
        }
    }
    if (arg0->s92 == 0) {
        arg0->s92 = arg0->s92 + 1;
        if (arg1->o[5]->p->b4B >= 0x21) {
            arg1->o[5]->p->b4B -= 4;
            arg1->o[1]->p->b4B -= 4;
        } else {
            arg1->o[1]->p->b4B = 0;
            arg1->o[5]->p->b4B = 0;
        }
        if (D_8025C6EC != NULL) {
            if (DD(NG) < 900.0f) {
                D_8025C6FD = 1;
            }
        }
        if (DD(NB) < 100.0f) {
            func_8037BB4C(arg0->o24->p->s12, 2.0f, 2.0f, D_8025C7E2);
        }
    } else {
        arg0->s92 = arg0->s92 - 1;
        if (arg0->s92 < 0x38) {
            if (arg1->o[5]->p->f1C < 0.4) {
                arg1->o[5]->p->f1C += 0.04;
            }
        }
        if (D_8025C6EC != NULL) {
            if (DD(NG) < 900.0f) {
                D_8025C6FD = 1;
            }
        }
        if (DD(NB) < 400.0f) {
            func_8037BB4C(arg0->o24->p->s12, 2.0f, 2.0f, D_8025C7E2);
        }
        if (arg0->s92 == 0x38) {
            func_8012C89C(arg0, 5, 0x3D0, 0xB);
            D_8012D8C8(arg0, 0x3D0, 10, 0.5f, 1, 5);
            arg1->o[5]->p->w24 = 0x80300;
            arg1->o[5]->p->w30 = (s32)D_80258FE0 | 0x40000000;
            func_800062F8(arg1->o[5], 0x80000600);
            arg1->o[5]->p->f18 = 0.2f;
            arg1->o[5]->p->f1C = 0.0f;
            arg1->o[5]->p->f20 = 0.2f;
            arg1->o[5]->p->b48 = 0xFF;
            arg1->o[5]->p->b49 = 0xFF;
            arg1->o[5]->p->b4A = 0xFF;
            arg1->o[5]->p->b4B = 0xFF;
            arg1->o[5]->p->b4C = 0xFF;
            arg1->o[5]->p->b4D = 0;
            arg1->o[5]->p->b4E = 0;
            arg1->o[5]->p->f4 = arg1->o[1]->p->f4;
            arg1->o[5]->p->f8 = arg1->o[1]->p->f8;
            arg1->o[5]->p->fC = arg1->o[1]->p->fC;
        }
    }
    if (arg1->o[5]->p->b4B == 0) {
        func_80005700(arg0);
        ((u8 *)D_8025C728)[arg0->s90 * 0x14] = 0;
    }
}
