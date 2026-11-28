#include "common.h"
s32 func_80244174(u8 arg0, u8 arg1, s8 arg2);

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

/* add to a u16 stat; a result of 0, or one past 0x7FFF, becomes 1 */
#define func_80244410_ADD_STAT(stat, delta) \
    do {                                    \
        (stat) += (delta);                  \
        if ((stat) <= 0) {                  \
            (stat) = 1;                     \
        }                                   \
        if ((stat) >= 0x8000) {             \
            (stat) = 1;                     \
        }                                   \
    } while (0)

void func_80244410(func_80244410_Struct *arg0) {
    s8 amount;
    s16 i;
    s32 diff;
    u8 *base = (u8 *)arg0 - 0x44C;
    u8 *self;
    u8 *other;
    u8 side;

    if (base == D_801BBBF0) {
        amount = D_8017DD8A;
    } else {
        amount = D_8017DD8B;
    }
    if (base == D_801BBBF0) {
        self = D_8017DC40;
    } else {
        self = D_8017DCDE;
    }
    if (base == D_801BBBF0) {
        other = D_8017DCDE;
    } else {
        other = D_8017DC40;
    }
    if (base == D_801BBBF0) {
        side = 0;
    } else {
        side = 1;
    }
    if (amount == 0) {
        return;
    }
    arg0->f2 += func_80244174(0, side, amount);
    arg0->f0 = arg0->f2;
    arg0->f4E += func_80244174(2, side, amount);
    arg0->f50 += func_80244174(3, side, amount);
    arg0->f54 += func_80244174(4, side, amount);
    arg0->f52 += func_80244174(5, side, amount);
    arg0->f58 = arg0->f4E;
    arg0->f5A = arg0->f50;
    diff = (s8)(*(u16 *)(self + 0x48) - *(u16 *)(other + 0x48));
    if (diff != 0) {
        for (i = 0; i < 6; i++) {
            func_80244410_ADD_STAT(arg0->f82[i], amount / 2);
            func_80244410_ADD_STAT(arg0->f8E[i], amount / 2);
        }
    }
    func_8022C5AC(arg0);
}
