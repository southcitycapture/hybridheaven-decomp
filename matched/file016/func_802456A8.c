#include "common.h"
typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;
extern func_80242080_Struct3 D_80164F40;
extern u8 D_80249A58[];
void func_80005E44(void *, void *);
extern s32 D_80006214(void *);
#define func_80006214 D_80006214
void func_8012C89C(void *, s32, s32, s32);


typedef struct {
    u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; u16 u12;
    u8 pad14[4]; f32 f18; f32 f1C; f32 f20; s32 u24; u8 pad28[8]; s32 u30;
    u8 pad34[0x14]; u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_802456A8_Inner;
typedef struct { u8 pad[0x30]; func_802456A8_Inner *p; } func_802456A8_Outer;
typedef struct { u8 pad[0x94]; f32 f94; f32 f98; f32 f9C; u8 padA0[2]; u16 uA2; } func_802456A8_Arg;

typedef struct { u8 pad0[0x10]; func_80242080_Struct3 s; } func_802456A8_Frame;

extern f32 D_8024F098;
extern f32 D_8024F09C;

void func_802456A8(func_802456A8_Arg *arg0, func_802456A8_Outer **arg1) {
    func_802456A8_Frame sp;
    sp.s = D_80164F40;
    sp.s.unk4 = 0x80000600;
    func_80005E44(arg0, &sp.s);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->p->u24 |= 0x300;
    (*arg1)->p->u30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->p->f1C = D_8024F098;
    (*arg1)->p->f18 = (*arg1)->p->f1C;
    (*arg1)->p->f20 = D_8024F09C;
    (*arg1)->p->b48 = 0x40;
    (*arg1)->p->b49 = 0x40;
    (*arg1)->p->b4A = 0xFF;
    (*arg1)->p->b4B = 0xA0;
    (*arg1)->p->b4C = 0;
    (*arg1)->p->b4D = 0;
    (*arg1)->p->b4E = 0x64;
    (*arg1)->p->f4 = arg0->f94;
    (*arg1)->p->f8 = arg0->f98;
    (*arg1)->p->fC = arg0->f9C;
    (*arg1)->p->u12 = arg0->uA2;
}
