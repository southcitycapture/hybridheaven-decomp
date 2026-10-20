#include "context.h"

struct func_8038BEF8_Struct {
    u8 pad[0x30];
    f32 f[6];
};
struct func_8038BEF8_StructO {
    u8 pad[0x2C];
    struct func_8038BEF8_Struct *p;
};
struct func_8038BEF8_StructG {
    u8 pad[0xE8];
    struct func_8038BEF8_StructO *o;
};

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 a, s32 b, f32 c);
extern void func_801C0EB0(s32 a, s32 b);
extern u64 func_801C0F18(s32 a, s32 b);
extern f64 D_8038DCF8;

s32 func_8038BEF8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13) {
    f32 t;

    if (func_801C0DE4(0, 0x1F40, arg1) != 0) {
        func_801C0EB0(0, 0x1F40);
        return 1;
    }
    if (func_801C0DE4(0, 0x1F40, arg0) != 0) {
        t = (f32)(func_80034C24(func_801C0F18(0, 0x1F40)) / D_8038DCF8 - arg0) / (arg1 - arg0);
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[0] = (arg5 - arg2) * t + arg2;
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[1] = (arg6 - arg3) * t + arg3;
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[2] = (arg7 - arg4) * t + arg4;
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[3] = (arg11 - arg8) * t + arg8;
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[4] = (arg12 - arg9) * t + arg9;
        ((struct func_8038BEF8_StructG *)&D_801BBBF0)->o->p->f[5] = (arg13 - arg10) * t + arg10;
    }
    return 0;
}
