#include "context.h"

typedef struct func_80001BC0_Struct {
    s32 f0, f4, f8;
    void *fC;
    s32 f10, f14;
    void *f18;
    s32 f1C;
    void *f20;
    s32 f24;
    void *f28;
    s32 f2C;
    void *f30;
    s32 f34;
    void *f38;
    s32 f3C, f40, f44;
    void *f48;
    s32 f4C;
    void *f50;
    void *f54;
} func_80001BC0_Struct;

extern s32 func_80001060();
extern u8 func_800350D0[];
extern u8 D_800351A0[], D_8004D4F0[], D_8005C288[], D_80063EB0[], D_800642B0[], D_800682B0[];
extern u8 D_80400000[];
extern u16 D_8038F800[][0x12C00];
extern s16 D_8005C3A0[];
extern func_80001BC0_Struct D_8005C3A8[];

void func_80001BC0(void) {
    u8 i;
    func_80001BC0_Struct *p;
    func_80001BC0_Struct *q;

    for (i = 0; i < 3; i++) {
        D_8005C3A0[i] = 2;
        q = p = &D_8005C3A8[i];
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0x40;
        if (func_80001060() != 0) {
            p->fC = D_80400000 + (i << 20);
        } else {
            p->fC = D_8038F800[i];
        }
        q->f10 = 1;
        q->f18 = func_800350D0;
        q->f20 = D_800351A0;
        q->f24 = 0x1000;
        q->f14 = 0;
        q->f1C = 0;
        q->f28 = D_8004D4F0;
        q->f2C = 0x800;
        q->f30 = D_80063EB0;
        q->f34 = 0x400;
        q->f38 = D_800642B0;
        q->f3C = 0;
        q->f40 = 0;
        q->f44 = 0;
        q->f48 = D_800682B0;
        q->f4C = 0xC00;
        q->f50 = D_8005C288;
        q->f54 = &D_8005C3A0[i];
    }
}
