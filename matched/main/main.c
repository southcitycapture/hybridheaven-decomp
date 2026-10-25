#include "context.h"

extern void func_80028B10(void);
extern s32 func_8002C0B0(void);
extern void func_80001124(void *arg0);
extern void func_80028260(void *, s32, void (*)(void *), void *, void *, s32);
extern void func_80034C90(void *);
extern s32 D_80000300;
extern u16 D_80037754;
extern u16 D_80037758;
extern u8 D_80057BD0[];
extern u8 D_80059D80[];

void main(void) {
    func_80028B10();
    if (D_80000300 == 0) {
        for (;;) {
        }
    }
    if (func_8002C0B0() == 0x400000) {
        D_80037754 = 0;
        D_80037758 = 0;
    } else {
        D_80037754 = 1;
        D_80037758 = 1;
    }
    func_80028260(D_80057BD0, 1, func_80001124, 0, D_80059D80, 9);
    func_80034C90(D_80057BD0);
}
