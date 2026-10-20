#include "context.h"
#define NDX (*(u8 **)(*(u8 **)(*(u8 **)((u8 *)*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C))
#define NFX(o) (*(f32 *)(NDX + (o)))

s32 func_801F8554(s32 arg0, s32 arg1) {
    f32 *v;
    f32 f;
    f32 a;
    if (func_801C0B8C(0x043440D5) != 0) {
        NFX(4) = 0.0f;
        NFX(8) = 0.0f;
        NFX(0xC) = 0.0f;
        *(s16 *)(NDX + 0x12) = 0;
        func_801CC470(0, 0x02A8000E, 0, 0x1100, 2.0f);
        return 0x15;
    }
    v = (f32 *)D_801CFD90();
    f = v[0];
    if (f < 0.0f) {
        a = -f;
    } else {
        a = f;
    }
    if ((f64)a < 10.0) {
        NFX(4) = NFX(4) + f;
    }
    NFX(8) = v[1] + NFX(8);
    f = v[2];
    if ((f64)f > 0.0) {
        NFX(0xC) = NFX(0xC) + f;
    }
    return 0x14;
}
