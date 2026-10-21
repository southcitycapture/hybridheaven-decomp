#include "context.h"

extern void func_8001F74C();
extern void func_8001F75C();
extern void func_80005700();
extern u16 D_801BCAE0;
extern f64 D_801E4008;

typedef struct func_801E0040_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[8];
    f32 f18;
    f32 f1C;
    f32 f20;
    u8 pad24[0x27];
    u8 b4B;
} func_801E0040_StructB;

typedef struct func_801E0040_StructA {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0xC];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x46];
    s16 s92;
    f32 f94;
} func_801E0040_StructA;

typedef struct func_801E0040_StructC {
    u8 pad0[0x30];
    func_801E0040_StructB *p;
} func_801E0040_StructC;

void func_801E0040(func_801E0040_StructA *arg0, func_801E0040_StructC **arg1) {
    s32 v;
    f64 k;
    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
        return;
    }
    func_8001F75C();
    k = D_801E4008;
    (*arg1)->p->f4 = (*arg1)->p->f4 + arg0->f40;
    (*arg1)->p->f8 = (*arg1)->p->f8 + arg0->f44;
    (*arg1)->p->fC = (*arg1)->p->fC + arg0->f48;
    (*arg1)->p->f18 = (f64)(*arg1)->p->f18 + k;
    (*arg1)->p->f1C = (f64)(*arg1)->p->f1C + k;
    (*arg1)->p->f20 = (f64)(*arg1)->p->f20 + k;
    arg0->f44 = arg0->f44 + arg0->f94;
    v = (*arg1)->p->b4B;
    v += arg0->s92;
    if (v < 0) v = 0;
    if (v >= 0x100) v = 0xFF;
    (*arg1)->p->b4B = v;
    if ((arg0->flags & 0x20) || v == 0) {
        func_80005700(arg0, arg1);
    }
}
