#include "context.h"

struct func_80386DFC_StructB { u8 pad0[0x18]; f32 f18; f32 f1C; f32 f20; u8 pad24[0x27]; u8 f4B; };
struct func_80386DFC_StructA { u8 pad0[0x30]; struct func_80386DFC_StructB *p; };
struct func_80386DFC_StructC { u8 pad0[0x3C]; u16 f3C; };
extern void func_80005700();
extern f64 D_80389D48;
extern f64 D_80389D50;

void func_80386DFC(struct func_80386DFC_StructC *arg0, struct func_80386DFC_StructA **arg1) {
    s32 t = arg0->f3C;
    f32 v;
    arg0->f3C = t + 1;
    if (t < 8) {
        (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 + D_80389D48);
        v = (*arg1)->p->f18;
        (*arg1)->p->f20 = v;
        (*arg1)->p->f1C = v;
        return;
    }
    (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 - D_80389D50);
    v = (*arg1)->p->f18;
    (*arg1)->p->f20 = v;
    (*arg1)->p->f1C = v;
    (*arg1)->p->f4B -= 6;
    if ((*arg1)->p->f4B < 6) {
        func_80005700();
    }
}
