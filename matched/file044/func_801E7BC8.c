#include "context.h"

extern f32 D_801ECEF4;
extern f32 D_801ECEF8;

s32 func_801E7BC8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    func_801C1134(4, 0);
    {
        extern s32 func_801C1088();

        temp_v1 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 0x24) + 0x2C);
        *(f32 *)(temp_v1 + 8) = (f32) (*(f32 *)(temp_v1 + 8) - D_801ECEF4);
        D_801ECEF4 += D_801ECEF8;
        if (func_801C1088(4, 0, 0x1E, &D_801ECEF4) != 0) {
            func_801C10D8(4, 0);
            return 0x28;
        }
    }
    return 0x27;
}
