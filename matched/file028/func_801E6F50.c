#include "context.h"
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_8038D28C(s32 arg0);

s32 func_801E6F50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x1B;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
    func_8038D28C(8);
    return 0x1C;
}
