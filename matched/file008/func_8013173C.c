#include "common.h"
extern s32 D_801309EC(f32, f32);


typedef struct func_8013173C_Struct { u16 unk0; u16 unk2; u16 unk4; } func_8013173C_Struct;
extern f64 D_8018D6C8;
#define F2 D_801309EC

#define arg0 ((func_8013173C_Struct *)arg0_)
void func_8013173C(void *arg0_, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10) {
    f32 var_fv0;
    f32 x, y;

    arg0->unk2 = F2(arg1, arg2);
    if (arg2 < 0.0f) {
        var_fv0 = -arg2;
    } else {
        var_fv0 = arg2;
    }
    if ((f64) var_fv0 < D_8018D6C8) {
        if ((arg2 > 0.0f) || ((arg2 == 0.0f) && (arg0->unk0 & 0x200))) {
            arg0->unk0 = 0;
            y = arg5 * arg8;
            x = (arg5 * arg7 * arg10) - (arg6 * arg9);
            arg0->unk4 = F2(x, y);
        } else {
            arg0->unk0 = 0x200;
            x = (arg5 * arg7 * arg10) - (arg6 * arg9);
            y = arg5 * arg8;
            arg0->unk4 = F2(-x, -y);
        }
    } else {
        arg0->unk0 = F2(((-arg5 * arg7 * arg9) - (arg6 * arg10)) / arg2, ((-arg6 * arg7 * arg9) + (arg5 * arg10)) / arg2);
        arg0->unk4 = F2(arg3 / arg2, arg4 / arg2);
    }
}
