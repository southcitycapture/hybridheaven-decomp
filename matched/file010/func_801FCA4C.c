#include "context.h"

extern f64 D_80218F78;

typedef struct func_801FCA4C_Struct {
    u8 pad[0x30];
    s32 a;
    f32 b;
    f32 c;
} func_801FCA4C_Struct;

void func_801FCA4C(s32 arg0, s32 arg1, f32 arg2, f32 arg3, u16 arg4) {
    func_801FCA4C_Struct *pos;
    f32 dist;
    s32 value;
    s32 temp;

    pos = (func_801FCA4C_Struct *) D_801BBCD8->unk2C;
    dist = func_8012FFDC(arg0, arg1, *(s32 *)&arg2, pos->a, pos->b, pos->c);
    temp = -((f32) (D_80218F78 / arg3) * dist);
    value = temp;
    if (temp < -255) {
        value = -255;
    }
    func_8002096C(arg4, 1, value);
}
