#include "context.h"

extern s32 func_80244174(s32, u8, s8);
extern void func_8022C5AC();
extern u8 D_8017DC40[];
extern u8 D_8017DCDE[];
extern s8 D_8017DD8A;
extern s8 D_8017DD8B;
extern u8 D_801BBBF0[];

typedef struct {
    s16 f0;
    s16 f2;
    u8 pad4[0x4A];
    u16 f4E;
    u16 f50;
    u16 f52;
    u16 f54;
    u8 pad56[2];
    u16 f58;
    u16 f5A;
    u8 pad5C[0x26];
    u16 f82[6];
    u16 f8E[6];
} func_80244410_Struct;

void func_80244410(func_80244410_Struct *arg0) {
    volatile s8 sp37;
    u8 pad[8];
    u8 *sp28;
    u8 *sp24;
    u8 sp23;
    u8 *base = (u8 *)arg0 - 0x44C;
    s16 i;
    s32 v;
    s32 a3;
    u16 *p;


    if (base == D_801BBBF0) {
        sp37 = D_8017DD8A;
    } else {
        sp37 = D_8017DD8B;
    }
    if (base == D_801BBBF0) {
        sp28 = D_8017DC40;
    } else {
        sp28 = D_8017DCDE;
    }
    if (base == D_801BBBF0) {
        sp24 = D_8017DCDE;
    } else {
        sp24 = D_8017DC40;
    }
    if (base == D_801BBBF0) {
        sp23 = 0;
    } else {
        sp23 = 1;
    }
    if (sp37 != 0) {
        arg0->f2 += func_80244174(0, sp23, sp37);
        arg0->f0 = arg0->f2;
        arg0->f4E += func_80244174(2, sp23, sp37);
        arg0->f50 += func_80244174(3, sp23, sp37);
        arg0->f54 += func_80244174(4, sp23, sp37);
        arg0->f52 += func_80244174(5, sp23, sp37);
        arg0->f58 = arg0->f4E;
        arg0->f5A = arg0->f50;
        a3 = sp37;
        v = (s8)(*(u16 *)(sp28 + 0x48) - *(u16 *)(sp24 + 0x48));
        if (v != 0) {
            a3 = a3 / 2;
            i = 0;
            do {
                v = (u16)(arg0->f82[i] += a3);
                if (v <= 0) {
                    v = (u16)(arg0->f82[i] = 1);
                }
                if (v >= 0x8000) {
                    arg0->f82[i] = 1;
                }
                v = (u16)(arg0->f8E[i] += a3);
                if (v <= 0) {
                    v = (u16)(arg0->f8E[i] = 1);
                }
                if (v >= 0x8000) {
                    arg0->f8E[i] = 1;
                }
                i++;
            } while (i < 6);
        }
        func_8022C5AC(arg0);
    }
}
