#include "context.h"

typedef struct func_800021B4_Out {
    u8 pad0[2];
    u16 u2;
    u16 u4;
    s16 u6;
    s16 u8;
    u16 uA;
    u16 uC;
    u8 padE[2];
    s32 u10;
    u8 pad14[0xC];
} func_800021B4_Out;

typedef struct func_800021B4_In {
    u16 u0;
    s8 u2;
    s8 u3;
    u8 pad4[2];
} func_800021B4_In;

extern void func_8000242C();
extern void func_800266B0(void *, s32, s32);
extern void func_800283B0(void *);
extern void func_80028434(void *);
extern u8 func_80151BC4(void);
extern s32 func_80151BFC();
extern void func_80151DA4(func_800021B4_Out *);
extern void func_801521C8();
extern u8 D_8005CE20[];
extern func_800021B4_In D_8005CE50[];
extern u8 D_8005CE68[];
extern func_800021B4_Out D_80089474[];
extern u8 D_801BBBF0[];

void func_800021B4(void) {
    func_800021B4_Out *o;
    func_800021B4_In *i;
    u16 t;
    u16 t2;
    u16 v;
    s32 s;
    s32 n;

    func_800283B0(D_8005CE20);
    func_800266B0(D_8005CE20, 0, 1);
    func_80028434(D_8005CE20 + 0x30);
    o = D_80089474;
    for (n = 0; n < 4; n++, o++) {
        i = &D_8005CE50[n];
        v = i->u0;
        o->u4 = (o->u2 ^ v) & v;
        o->u2 = v;
        o->u6 = i->u2;
        o->u8 = i->u3;
        if (i == D_8005CE50 && func_80151BC4() == 2) if (*(u16 *)(D_801BBBF0 + 0x2C) == 5) {
            if (func_80151BFC() == 0) {
                func_80151DA4(o);
                s = o->u4;
                if (s & 0x4000) {
                }
            } else {
                func_801521C8();
            }
        }
        s = o->u6;
        v = 0;
        if (s < -0x28) v = 0x200;
        if (s >= 0x29) v |= 0x100;
        s = o->u8;
        if (s >= 0x29) v |= 0x800;
        if (s < -0x28) v |= 0x400;
        o->uC = (o->uA ^ v) & v;
        o->uA = v;
        if (o->u10 != 0) func_8000242C((void *)o);
    }
}
