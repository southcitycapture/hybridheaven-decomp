#include "common.h"
typedef struct func_80002EF0_Struct {
    s32 a;
    s32 b;
    u16 c;
    u8 d;
    u8 pad0[3];
    u8 e[0x12];
} func_80002EF0_Struct;

extern u8 D_8005CE70[];
u8 func_80002BE0(u8 arg0);
extern s32 func_80031BC0();
extern s32 func_80032DD0();

s32 func_8000303C(u8 arg0, u8 arg1) {
    s32 v;
    u8 r;
    func_80002EF0_Struct info;
    void *sp20[2];

    r = func_80002BE0(arg0);
    if (r == 0) {
        sp20[1] = &D_8005CE70[arg0 * 0x68];
        v = func_80032DD0(sp20[1], arg1, &info);
        if (v == 0) {
            v = func_80031BC0(sp20[1], info.c, info.b, info.e, &info.d);
        }
        switch (v) {
        case 0: r = 0; break;
        case 1: r = 1; break;
        case 2: r = 2; break;
        case 3: r = 8; break;
        case 4: r = 3; break;
        case 5: r = 9; break;
        default: r = 0; break;
        }
    }
    return r;
}
