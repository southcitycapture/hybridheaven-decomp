#include "context.h"

extern u8 D_801BBCDC[];
extern u8 D_801CFDF0[];
extern u8 D_801CFDF3;
extern u8 D_801CFDF4;
extern u8 func_801CAEEC[];
extern void func_80005700();

void func_801CAE00(s32 arg0, s32 arg1) {
    u8 i;
    s32 r;

    for (i = 0; i < 3; i++) {
        D_801CFDF0[i] = 0;
    }
    D_801BBCDC[0xB] = 0;
    r = func_8013E620();
    if (r != 0) {
        r &= 0xF;
        if (r & 2) {
            D_801CFDF3 = 1;
        } else {
            D_801CFDF3 = 0;
        }
        if (r & 4) {
            D_801CFDF4 = 1;
        } else {
            D_801CFDF4 = 0;
        }
        if (D_801CFDF3 | D_801CFDF4) {
            func_800058DC(arg0, func_801CAEEC);
            return;
        }
        func_80005700(arg0);
        return;
    }
    func_80005700(arg0);
}
