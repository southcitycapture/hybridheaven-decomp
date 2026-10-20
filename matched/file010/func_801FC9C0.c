#include "context.h"
extern f32 func_8012FFDC(s32, s32, s32, s32, f32, f32);
extern void func_800207A0(u16, s32);
extern f64 D_80218F70;
extern func_801FCAE0_Struct1 *D_801BBCD8;
typedef struct func_801FC9C0_Struct { u8 pad[0x30]; s32 a; f32 b; f32 c; } func_801FC9C0_Struct;

void func_801FC9C0(s32 arg0, s32 arg1, s32 arg2, f32 arg3, u16 arg4) {
    s32 *q = &arg2;
    func_801FC9C0_Struct *p = (func_801FC9C0_Struct *)D_801BBCD8->unk2C;
    f32 r;
    s32 t;
    r = func_8012FFDC(arg0, arg1, arg2, p->a, p->b, p->c);
    t = (s32)(255.0f - ((f32)(D_80218F70 / (f64)arg3) * r));
    if (t > 0) {
        func_800207A0(arg4, t & 0xFF);
    }
}
