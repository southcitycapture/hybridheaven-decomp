#include "context.h"

extern f32 D_801EDBD8;
extern f32 D_801EDBDC;
extern f32 D_801EDBE0;
extern f32 D_801EDBE4;
extern f32 D_801EDBE8;

s32 func_801E22B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x629260) != 0) {
        func_8038BE98(D_801EDBD8);
        func_8038BD50(D_801EDBDC, D_801EDBE0, 0xC079999A);
        D_8038BD88(D_801EDBE4, D_801EDBE8, 0xC079999A);
        return 0x14;
    }
    return 0x13;
}
