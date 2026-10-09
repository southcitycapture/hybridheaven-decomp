#include "context.h"
extern s32 D_801E8D50;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_8038D28C(s32 arg0);

extern s32 func_801CE284();

s32 func_801E46A0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto case0;
    }
    if (D_801E8D50 == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801CC470(0, 0x02A80028, 9, 0, 3.0f);
    func_8038D28C(0x1AF);
    D_801E8D50 = 1;
    goto ret8;
case1:
    if (func_801CE284() != 0) {
        return 9;
    }
    goto ret8;
ret8:
    return 8;
}
