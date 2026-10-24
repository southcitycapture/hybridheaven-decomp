#include "common.h"

void func_800058DC(s32, void *);

extern void func_8024781C();

void func_802477E0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x75) == 0) {
        func_800058DC(arg0, func_8024781C);
    }
}

void func_800179B0(void *);

typedef struct func_8024781C_Inner {
    u8 pad[0x40];
    f32 a;
    u8 pad2[0x4];
    f32 b;
} func_8024781C_Inner;

typedef struct func_8024781C_Struct {
    u8 pad[0xDC];
    func_8024781C_Inner *inner;
} func_8024781C_Struct;

extern func_8024781C_Struct D_801BBBF0;
extern u8 D_80252A44[];
extern void func_802478B4();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133980(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30();

void func_8024781C(s32 arg0, s32 arg1) {
    if (func_801C3D20(-400.0f, 200.0f, 50.0f) != 0) {
        func_80133980(0x75);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.inner->a = 0.0f;
        D_801BBBF0.inner->b = 0.0f;
        func_800179B0(D_80252A44);
        func_801FBB30();
        func_800058DC(arg0, func_802478B4);
    }
}


extern s32 func_801C2FF8();
extern void func_80020718(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_80247A2C(s32 arg0, s32 arg1);
extern u8 D_80258BD0[];
extern f32 D_80258CFC, D_80258D00, D_80258D04, D_80258D08, D_80258D0C, D_80258D10, D_80258D14, D_80258D18;

typedef struct func_802478B4_Struct {
    f32 x, y, z;
    s16 a;
    s32 b;
    f32 w;
    s16 c;
    s16 d;
} func_802478B4_Struct;

typedef struct func_802478B4_StructState {
    u8 pad[0x1E8];
    f32 a, b, c, d, e, f;
} func_802478B4_StructState;

void func_802478B4(s32 arg0, s32 arg1) {
    func_802478B4_StructState *p;
    func_802478B4_Struct s;

    if (func_800178E8() != 0 && func_801C2FF8() != 0) {
        s.x = D_80258CFC;
        s.y = 200.0f;
        s.z = D_80258D00;
        s.w = 1.0f;
        s.a = 0x1100;
        s.b = 0x0168003E;
        s.c = 0;
        s.d = 0x78;
        D_801C2F0C(2, &s);
        p = (func_802478B4_StructState *)&D_801BBBF0;
        p->a = D_80258D04;
        p->b = D_80258D08;
        p->c = D_80258D0C;
        p->d = D_80258D10;
        p->e = D_80258D14;
        p->f = D_80258D18;
        func_8011AAF4(D_80258BD0, 0xBF, arg0, 0, 1, 0.0f, p->a, p->b, p->c, 0.0f, p->d, p->e, p->f, 0.0f, 35.0f, -1, -1);
        func_80020718(7);
        func_800058DC(arg0, (void *)func_80247A2C);
    }
}

void func_801C2F0C(s32, s16 *);
s32 func_801C3044();

extern void func_800208C4(s32);
extern u8 D_80252A84[];
extern void func_80247AAC();

struct func_80247A2C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80247A2C(s32 arg0, s32 arg1) {
    struct func_80247A2C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x03480017;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, (s16 *)&sp18);
        func_800179B0(D_80252A84);
        func_800208C4(0x7C);
        func_800058DC(arg0, (void *)func_80247AAC);
    }
}


struct func_80247AAC_StructParams {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};
struct func_80247AAC_StructState {
    u8 pad[0x1E8];
    f32 a, b, c, d, e, f;
};
#define S ((struct func_80247AAC_StructState *)&D_801BBBF0)
extern f32 D_80258D1C;
extern f32 D_80258D20;
extern f32 D_80258D24;
extern f32 D_80258D28;
extern f32 D_80258D2C;
extern f32 D_80258D30;
extern void func_80247B60();

void func_80247AAC(s32 arg0, s32 arg1) {
    struct func_80247AAC_StructParams params;

    if (func_801C3044() == 0) {
        params.a = 0;
        params.b = 0x03480017;
        params.c = 3.0f;
        D_801C2F0C(4, &params.a);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        S->a = D_80258D1C;
        S->b = D_80258D20;
        S->c = D_80258D24;
        S->d = D_80258D28;
        S->e = D_80258D2C;
        S->f = D_80258D30;
        func_800058DC(arg0, func_80247B60);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80247B60.s")


extern void func_80247FA4();
extern u8 D_80252B64[];
extern u8 D_80258C48[];
extern u8 D_80258C84[];
extern f32 D_80258D50;
extern f32 D_80258D54;
extern f32 D_80258D58;
extern f32 D_80258D5C;
extern f32 D_80258D60;
extern f32 D_80258D64;
extern f32 D_80258D68;
extern f32 D_80258D6C;

struct func_80247DA0_Struct {
    u8 pad[0x1E8];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
};
struct func_80247DA0_Pkt {
    f32 f0, f4, f8;
    s16 hC;
    u8 pad[2];
    s32 s10;
    f32 f14;
    s16 h18, h1A;
    s32 pad2;
};

void func_80247DA0(s32 arg0, s32 arg1) {
    struct func_80247DA0_Pkt p;
    extern s32 D_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
#define G (*(struct func_80247DA0_Struct *)&D_801BBBF0)

    if (func_800178E8() != 0 && D_8011AAF4(D_80258C48, 0x14C, arg0, 0, 2, D_80258D50, G.f1E8, G.f1EC, G.f1F0, 4294967296.0f, G.f1F4, G.f1F8, G.f1FC, 0.0f, 35.0f, -1, -1) == 0) {
        G.f1E8 = D_80258D54;
        G.f1EC = D_80258D58;
        G.f1F0 = 201.0f;
        G.f1F4 = D_80258D5C;
        G.f1F8 = D_80258D60;
        G.f1FC = D_80258D64;
        func_8011AAF4(D_80258C84, 0x157, arg0, 0, 1, 0.0f, G.f1E8, G.f1EC, G.f1F0, 0.0f, G.f1F4, G.f1F8, G.f1FC, 0.0f, 35.0f, -1, -1);
        p.hC = 0x1100;
        p.s10 = 0x0168003E;
        p.h18 = 0;
        p.h1A = 0x5A;
        p.f0 = D_80258D68;
        p.f4 = 188.0f;
        p.f8 = D_80258D6C;
        p.f14 = 1.0f;
        func_801C2F0C(2, (s16 *)&p);
        func_800179B0(D_80252B64);
        func_800058DC(arg0, (void *)func_80247FA4);
    }
}


void func_8024800C();

struct func_80247FA4_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80247FA4(s32 arg0, s32 arg1) {
    struct func_80247FA4_Struct s;

    if (func_801C3044() == 0) {
        s.a = 0;
        s.b = 0x03480017;
        s.d = 0x14;
        s.c = 1.0f;
        func_801C2F0C(3, &s.a);
        func_800058DC(arg0, func_8024800C);
    }
}


struct func_8024800C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

extern void func_8024806C();

void func_8024800C(s32 arg0, s32 arg1) {
    struct func_8024800C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x03480017;
        sp18.c = 3.0f;
        func_801C2F0C(4, &sp18.a);
        func_800058DC(arg0, func_8024806C);
    }
}


extern f32 D_80258D70;
extern f32 D_80258D74;
extern f32 D_80258D78;
extern s32 D_801C2F0C(s32, void *);
void func_80248108(s32 arg0, s32 arg1);

struct func_8024806C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

struct func_8024806C_StructGlobal {
    u8 pad[0x1E8];
    f32 x, y, z;
};

struct func_8024806C_StructArg {
    u8 pad[0x3C];
    s16 state;
};

#define G ((struct func_8024806C_StructGlobal *)&D_801BBBF0)

void func_8024806C(struct func_8024806C_StructArg *arg0, s32 arg1) {
    struct func_8024806C_Struct data;

    if (func_801C3044() == 0) {
        data.a = 0x1100;
        data.b = 0x0348007A;
        data.d = 0x14;
        data.c = 5.0f;
        D_801C2F0C(5, &data.a);
        arg0->state = 0;
        G->x = D_80258D70;
        G->y = D_80258D74;
        G->z = D_80258D78;
        func_800058DC((s32)arg0, func_80248108);
    }
}


s32 func_800178E8();
extern u8 D_80252DEC[];
void func_8024814C();

void func_80248108(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80252DEC);
        func_800058DC(arg0, func_8024814C);
    }
}


extern void func_80248190();

void func_8024814C(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80020718(7);
        func_800058DC(arg0, func_80248190);
    }
}


typedef struct func_80248190_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_80248190_StructB;
typedef struct func_80248190_StructA {
    u8 pad[0x2C];
    func_80248190_StructB *p;
} func_80248190_StructA;

extern void func_80005700(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801FBB20(void);
extern func_80248190_StructA *D_801BBCD0;
extern func_80248190_StructA *D_801BBCD8;
extern u8 D_80258CC0[];
extern f32 D_80258D7C;

void func_80248190(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 20.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 20.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, D_80258D7C, 35.0f) == 0) {
        func_8011AAF4(D_80258CC0, 0x1CB, arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800208C4(0x26);
        func_800208C4(0x33);
        func_80005700(arg0);
    }
}

