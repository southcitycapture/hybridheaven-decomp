#include "context.h"

extern u8 func_801CE1C8[];
s32 func_801CC564(s32 a0, void *a1, s32 a2, s32 a3, s32 a4, f32 f5, void *a6, s32 a7, s32 a8, s32 a9, f32 f10);

s32 func_801E5674(s32 arg0, s32 arg1) {
    if (func_801CC564(0, func_801CE1C8 + 0xBC, 0x01B8000B, 0, 0, 3.0f, func_801CE1C8 + 0xAC, 0x0168003F, 0, 0, 15.0f) != 0) {
        func_801CC470(0, 0x0168003F, 0, 0x100, 1.0f);
        func_801C0D04(4, 0);
        return 6;
    }
    return 5;
}
