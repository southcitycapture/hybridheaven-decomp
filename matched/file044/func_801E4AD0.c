#include "context.h"
extern struct func_801E4EE0_Obj *D_8038D8D0;

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);

s32 func_801E4AD0(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_ft4;
    u32 temp_v0;

    if (func_801C1088(3, 4, 0xA) != 0) {
        func_801C10D8(3, 4);
        return 7;
    }
    temp_v0 = func_801C1134(3, 4);
    var_ft1 = (f32) temp_v0;
    temp_ft4 = var_ft1 / 10.0f;
    *(f32 *) (*(u8 **) (*(u8 **) ((u8 *) D_8038D8D0 + 0x10) + 0x30) + 0xC) = 17.0f * temp_ft4;
    return 6;
}
