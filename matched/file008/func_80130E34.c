#include "common.h"
typedef struct func_80130CBC_Struct {
    u8 pad0[0x1C];
    f32 f1C;
    u8 pad20[0x10];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_80130CBC_Struct;
f32 func_80130CBC(func_80130CBC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5);


typedef struct func_80130E34_Struct {
    u8 pad0[8];
    s16 scale[2];
    u8 padC[4];
    s16 offset[2];
} func_80130E34_Struct;

typedef struct func_80130E34_StructY {
    u8 pad0[0xA];
    s16 scale[1];
    u8 padC[6];
    s16 offset[1];
} func_80130E34_StructY;
extern s32 func_80001060(void);

f32 func_80130E34(func_80130E34_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5) {
    f32 sp20;
    f32 result;

    result = func_80130CBC((func_80130CBC_Struct *)arg0, arg1, arg2, arg3, arg4, arg5);
    if (result < 0.0f) {
        return result;
    }
    *arg4 = (f32)(((*arg4 * (f32)arg0->scale[0] * 0.75f) + arg0->offset[0]) * 0.25);
    *arg5 = (f32)(((-*arg5 * (f32)((func_80130E34_StructY *)arg0)->scale[0]) + ((func_80130E34_StructY *)arg0)->offset[0]) * 0.25);
    if (func_80001060() != 0) {
        *arg4 = (f32)((f64)*arg4 * 0.5);
        *arg5 = (f32)((f64)*arg5 * 0.5);
    }
    return result;
}
