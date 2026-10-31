#include "common.h"
typedef struct func_80002EF0_Struct {
    s32 a;
    s32 b;
    u16 c;
    u8 d;
    u8 pad0[3];
    u8 e[0x12];
} func_80002EF0_Struct;
extern func_80002EF0_Struct D_80037790;
extern u8 D_8005CE70[];
u8 func_80002BE0(u8 arg0);
extern s32 func_8002EE40();


u8 func_80002DBC(u8 arg0, u8 arg1, u8 *arg2) {
    u8 ret;
    s32 sp48;
    u32 t;
    func_80002EF0_Struct sp24;

    ret = func_80002BE0(arg0);
    if (ret == 0) {
        sp24 = D_80037790;
        sp24.d = arg1 + 0x10;
        t = func_8002EE40(D_8005CE70 + arg0 * 0x68, sp24.c, sp24.b, sp24.e, &sp24.d, &sp48);
        switch (t) {
        case 0:
            ret = 0;
            *arg2 = sp48;
            break;
        case 1: ret = 1; break;
        case 2: ret = 2; break;
        case 3: ret = 8; break;
        case 4: ret = 3; break;
        case 5: ret = 9; break;
        default: ret = 0; break;
        }
    }
    return ret;
}
