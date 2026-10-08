#include "context.h"

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_8038D28C(s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern s32 D_801E72FC;

s32 func_801E6098(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (D_801E72FC >= 0x5B) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    D_801E72FC += 1;
    return 6;
}
