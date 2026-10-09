#include "context.h"
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_801C0B8C(u64);


s32 func_801F3A18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6DDD00) != 0) {
        if (D_801BBD54 != 0) {
            return 3;
        }
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x5A, 0, 1);
        return 4;
    }
    return 3;
}
