#include "common.h"


typedef struct { s32 w[4]; } func_801E4AA0_Vec;
typedef struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 s12; } func_801E4AA0_F;
typedef struct { u8 pad0[0x30]; func_801E4AA0_F *p30; } func_801E4AA0_B;
typedef struct { u8 pad0[0x10]; u32 w10; u32 w14; } func_801E4AA0_C;
typedef struct { u8 pad0[0x18]; f32 f18; f32 f1C; f32 f20; s32 w24; u8 pad28[8]; void *p30; u8 pad34[0x18]; u8 b4C; u8 b4D; u8 b4E; u8 b4F; } func_801E4AA0_E;
typedef struct { u8 pad0[0x22]; u8 b22; u8 pad23[0xD]; func_801E4AA0_E *p30; } func_801E4AA0_D;
typedef struct { u8 pad0[0x24]; func_801E4AA0_B *p24; u8 pad28[4]; u32 w2C; u8 pad30[6]; u16 h36; func_801E4AA0_C *p38; u8 pad3C[0x38]; s32 w74; f32 f78; f32 f7C; f32 f80; s16 s84; s16 s86; s16 s88; } func_801E4AA0_A;
typedef struct { u16 *p0; s32 *p4; } func_801E4AA0_T;
typedef struct { u8 pad[0xF32]; u8 b[4]; } func_801E4AA0_G;

extern s32 func_8000522C();
extern void func_800058DC();
extern void func_80005E44();
extern void func_80006214();
extern void *func_8000C3B0();
extern void func_8001F74C();
extern void func_8012636C();
extern s32 func_80126CC0();
extern void func_8012C784();
extern u8 func_80126EAC[];
extern u8 func_801E4CCC[];
extern func_801E4AA0_Vec D_80164F40;
extern func_801E4AA0_T *D_80171CEC[];
extern u8 D_8017AE98[];
extern func_801E4AA0_G D_801BBBF0;

void func_801E4AA0(func_801E4AA0_A *arg0, func_801E4AA0_D **arg1) {
    func_801E4AA0_Vec sp28;
    s32 a1;
    func_801E4AA0_B *b;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp28 = D_80164F40;
        func_8001F74C(arg0);
        sp28.w[1] = 0x80000C00;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, (arg0->p38->w14 >> 8) & 0xFF);
        (*arg1)->p30->f18 = 1.0f;
        (*arg1)->p30->f1C = 1.0f;
        (*arg1)->p30->f20 = 1.0f;
        arg0->w2C |= 0x800;
        arg0->w74 = func_8000522C(*D_80171CEC[arg0->h36]->p0, D_80171CEC[arg0->h36]->p4[arg0->p38->w14 >> 24]);
        b = arg0->p24;
        arg0->f78 = b->p30->f4;
        arg0->f7C = b->p30->f8;
        arg0->f80 = b->p30->fC;
        arg0->s84 = 0;
        arg0->s86 = b->p30->s12;
        arg0->s88 = 0;
        (*arg1)->p30->p30 = D_8017AE98;
        a1 = arg0->p38->w10 & 0xFF;
        if (a1 & 1) {
            (*arg1)->p30->w24 = 0x13;
            (*arg1)->p30->p30 = func_8000C3B0(*arg1);
            (*arg1)->p30->b4C = D_801BBBF0.b[0];
            (*arg1)->p30->b4D = D_801BBBF0.b[1];
            (*arg1)->p30->b4E = D_801BBBF0.b[2];
            (*arg1)->p30->b4F = D_801BBBF0.b[3];
        }
        if (a1 & 2) {
            (*arg1)->b22 = 0;
        }
        func_800058DC(arg0, func_801E4CCC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4AA0/func_801E4CCC.s")

