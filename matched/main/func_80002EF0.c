#include "context.h"

typedef struct func_80002EF0_Struct {
    s32 a;
    s32 b;
    u16 c;
    u8 d;
    u8 pad0[3];
    u8 e[0x12];
} func_80002EF0_Struct;

extern func_80002EF0_Struct D_80037790;

u8 func_80002EF0(u8 arg0, u8 arg1, s32 arg2) {
    u8 sp4C[12];
    func_80002EF0_Struct s;
    u8 v;

    v = func_80002BE0(arg0);
    if (v == 0) {
        s = D_80037790;
        s.d = arg1 + 0x10;
        s.a = arg2;
        switch (func_8002A350(&D_8005CE70[arg0 * 0x68], s.c, s.b, s.e, &s.d, arg2, sp4C)) {
        case 0: v = 0; break;
        case 1: v = 1; break;
        case 2: v = 2; break;
        case 3: v = 8; break;
        case 4: v = 3; break;
        case 5: v = 9; break;
        case 7: v = 10; break;
        case 8: v = 11; break;
        case 9: v = 12; break;
        default: v = 0; break;
        }
    }
    return v;
}
