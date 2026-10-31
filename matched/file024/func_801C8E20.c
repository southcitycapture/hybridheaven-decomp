#include "common.h"
#define HZP(p,l) HZQ(p,l)
#define HZQ(p,l) p##_##l
#define func_801C9328 HZP(HZF,__LINE__)
extern void (*D_801CCB04)(void *, s32, u8);
extern void func_800058DC(void *, void *, void *, void *);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
typedef struct func_801C909C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C909C_Inner;
typedef struct func_801C909C_Holder {
    u8 pad0[0x30];
    func_801C909C_Inner *unk30;
} func_801C909C_Holder;
typedef struct func_801C909C_Obj {
    func_801C909C_Holder *unk0;
    func_801C909C_Holder *unk4;
} func_801C909C_Obj;
void func_801C909C(s32 arg0, func_801C909C_Obj *arg1);
extern u8 func_801C9328[];


typedef struct func_801C8E20_StructC {
    /* 0x00 */ u8 pad0[0x4];
    /* 0x04 */ f32 f4;
    /* 0x08 */ f32 f8;
    /* 0x0C */ f32 fC;
    /* 0x10 */ s16 s10;
    /* 0x12 */ s16 s12;
    /* 0x14 */ s16 s14;
    /* 0x16 */ u8 pad16[0x2];
    /* 0x18 */ f32 f18;
    /* 0x1C */ f32 f1C;
    /* 0x20 */ f32 f20;
    /* 0x24 */ s32 flags;
    /* 0x28 */ u8 pad28[0x8];
    /* 0x30 */ s32 s30;
    /* 0x34 */ u8 pad34[0x14];
    /* 0x48 */ u8 b48;
    /* 0x49 */ u8 b49;
    /* 0x4A */ u8 b4A;
    /* 0x4B */ u8 b4B;
} func_801C8E20_StructC;

typedef struct func_801C8E20_StructB {
    /* 0x00 */ u8 pad0[0x30];
    /* 0x30 */ func_801C8E20_StructC *c;
} func_801C8E20_StructB;

typedef struct func_801C8E20_StructA {
    /* 0x00 */ func_801C8E20_StructB *b[2];
} func_801C8E20_StructA;

typedef struct func_801C8E20_StructS {
    s32 w[4];
} func_801C8E20_StructS;

typedef struct func_801C8E20_StructO {
    u8 pad[0x90];
    u8 idx;
} func_801C8E20_StructO;

extern func_801C8E20_StructS D_801CD178[];
extern u8 D_801CCE68[];
extern u8 D_801CCED0[];
extern f64 D_801CF3C0;
extern f32 D_801CF3C8;
extern f32 D_801CF3CC;
extern f32 D_801CF3D0;

void func_801C8E20(func_801C8E20_StructO *arg0, func_801C8E20_StructA *arg1) {
    func_801C8E20_StructS sp;
extern void func_800058DC();

    sp = D_801CD178[arg0->idx];
    sp.w[1] = 0x80000901;
    func_80005E44((s32)arg0, &sp);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 0, 0x229, 1);
    arg1->b[0]->c->flags |= 0x100;
    arg1->b[0]->c->s30 = (s32)D_801CCE68 | 0x40000000;
    arg1->b[0]->c->b48 = 0;
    arg1->b[0]->c->b49 = 0;
    arg1->b[0]->c->b4A = 0;
    arg1->b[0]->c->b4B = 0;
    arg1->b[0]->c->s10 = 0;
    arg1->b[0]->c->s12 = 0;
    arg1->b[0]->c->s14 = 0;
    sp.w[1] = 0x800008FF;
    func_80005E44((s32)arg0, &sp);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 1, 0x229, 1);
    arg1->b[1]->c->flags |= 0x100;
    arg1->b[1]->c->s30 = (s32)D_801CCED0 | 0x40000000;
    arg1->b[0]->c->f4 = 100.0f;
    arg1->b[0]->c->f8 = 42.29999923706055f;
    arg1->b[0]->c->fC = 0.0f;
    arg1->b[0]->c->f18 = 0.23999999463558197f;
    arg1->b[0]->c->f1C = 0.699999988079071f;
    arg1->b[0]->c->f20 = 0.23999999463558197f;
    arg1->b[1]->c->f4 = 100.0f;
    arg1->b[1]->c->f8 = 42.0f;
    arg1->b[1]->c->fC = 0.0f;
    arg1->b[1]->c->f18 = arg1->b[0]->c->f18 + 0.1;
    arg1->b[1]->c->f1C = 0.699999988079071f;
    arg1->b[1]->c->f20 = arg1->b[0]->c->f20 + 0.1;
    func_800058DC(arg0, func_801C909C);
}
