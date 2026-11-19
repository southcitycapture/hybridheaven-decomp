#include "common.h"
extern s32 D_80037780[];
extern u8 D_8005CE20[];
extern u8 D_8005CE70[];
extern s32 func_80027D04();


s32 func_80002A94(arg0)
u8 arg0;
{
    s32 temp_v0;
    s32 var_v1;
    s32 t;
    u8 *p;

    t = arg0 & 0xFF;
    temp_v0 = func_80027D04(D_8005CE20, (p = t * 0x68 + D_8005CE70, arg0 = t, p), t);
    switch (temp_v0) {
    case 0:
        var_v1 = 0;
        D_80037780[arg0] = 1;
        break;
    case 1:
        var_v1 = 1;
        break;
    case 0xB:
        var_v1 = 4;
        break;
    case 4:
        var_v1 = 3;
        break;
    default:
        var_v1 = 0;
        break;
    }
    return var_v1;
}
