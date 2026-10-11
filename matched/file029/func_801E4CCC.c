#include "context.h"
extern s32 func_8038D28C(s32 a);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E4CCC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x12, 0, 1);
    func_8038D28C(8);
    return 0x7;
}
