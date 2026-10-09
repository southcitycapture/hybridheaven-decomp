#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

s32 func_801E472C(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_ft4;
    u32 temp_v0;

    if (func_801C1088(3, 2, 0xA) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 3;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_ft4 = var_ft1 / 10.0f;
    *(f32 *) (*(u8 **) (*(u8 **) ((u8 *) D_8038D8D0 + 0xC) + 0x30) + 0xC) = (-3.0f * temp_ft4) + 68.0f;
    return 2;
}
