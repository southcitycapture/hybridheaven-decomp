#include "context.h"

typedef struct func_8024E43C_StructV { s32 w[4]; } func_8024E43C_StructV;
typedef struct func_8024E43C_StructI {
    u8 pad0[4]; f32 x4; f32 x8; f32 xC; u8 pad10[0x14];
    u32 flags24; u8 pad28[8]; u32 ptr30; u8 pad34[0x17]; u8 b4B;
} func_8024E43C_StructI;
typedef struct func_8024E43C_StructO { u8 pad[0x30]; func_8024E43C_StructI *p; } func_8024E43C_StructO;
typedef struct func_8024E43C_StructA { func_8024E43C_StructO *a; func_8024E43C_StructO *b; } func_8024E43C_StructA;
typedef struct func_8024E43C_StructR { u8 pad[0xA6]; u8 unkA6; } func_8024E43C_StructR;
typedef struct func_8024E43C_StructS { u8 pad[0x3C]; s16 unk3C; } func_8024E43C_StructS;

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_801FBB30(void);
extern func_8024E43C_StructV D_80164F40;
extern void func_8024E60C(s32, s32);
extern void func_800058DC(void *, void *);
extern void func_801339D0(s32);
extern u8 D_80254B78[];
extern u8 D_80254BC8[];

void func_8024E43C(func_8024E43C_StructS *arg0, func_8024E43C_StructA *arg1) {
    struct { s32 w[5]; } sp24;
    if (func_80133A24(0x79) != 0) {
        func_801FBB30();
        *(func_8024E43C_StructV *)&sp24 = D_80164F40;
        sp24.w[1] = 0x80000C00;
        func_80005E44(arg0, &sp24);
        sp24.w[1] = 0x80000300;
        func_80005E44(arg0, &sp24);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x28C, 0);
        arg1->a->p->flags24 |= 0x100;
        arg1->a->p->ptr30 = (u32)D_80254B78 | 0x40000000;
        arg1->a->p->x4 = 0.0f;
        arg1->a->p->x8 = 0.0f;
        arg1->a->p->xC = 0.0f;
        arg1->a->p->b4B = 0;
        func_8012C89C(arg0, 1, 0x28C, 1);
        arg1->b->p->flags24 |= 0x100;
        arg1->b->p->ptr30 = (u32)D_80254BC8 | 0x40000000;
        arg1->b->p->x4 = 0.0f;
        arg1->b->p->x8 = 0.0f;
        arg1->b->p->xC = 0.0f;
        arg1->b->p->b4B = 0;
        func_801339D0(0x73);
        func_801339D0(0x77);
        func_801339D0(0x7B);
        arg0->unk3C = 0;
        ((func_8024E43C_StructR *)func_801505AC(1))->unkA6 = 0xFF;
        func_800058DC(arg0, (void *)func_8024E60C);
    }
}
