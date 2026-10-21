#include "context.h"
extern s32 func_80027D04();
extern s32 func_80031FF0();

typedef struct {
    u8 pad[0x68];
} func_80002BE0_Struct;

u8 func_80002BE0(u8 arg0) {
    u8 v = 0;
    func_80002BE0_Struct *p = &((func_80002BE0_Struct *)D_8005CE70)[arg0];

    if (func_80032FB0(D_8005CE20, p, arg0) == 2) {
        v = 2;
    } else {
    }
    if (func_80027D04(D_8005CE20, p, arg0) == 0) {
        v = 7;
    } else {
    }
    if (func_80031FF0(D_8005CE20, p, arg0) == 0) {
        v = 0xF;
    } else {
    }
    if (v) {
    }
    if (v == 0) {
        switch (func_80032FB0(D_8005CE20, p, arg0)) {
        case 0: v = 0; break;
        case 1: v = 1; break;
        case 2: v = 2; break;
        case 4: v = 3; break;
        case 10: v = 5; break;
        case 11: v = 4; break;
        }
    }
    return v;
}
