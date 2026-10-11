#include "context.h"

extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E8304(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x53EC60) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 1, 0, 1);
        return 2;
    }
    return 1;
}
