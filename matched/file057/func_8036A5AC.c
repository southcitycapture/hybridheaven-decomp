#define func_8036A5AC func_8036A5AC_ctx_decl
#include "context.h"
#undef func_8036A5AC

struct func_8036A5AC_Vec {
    f32 x;
    f32 y;
    f32 z;
};

struct func_8036A5AC_Q {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

struct func_8036A5AC_P {
    u8 pad0[0x2C];
    struct func_8036A5AC_Q *unk2C;
};

union func_8036A5AC_Anim8 {
    f64 d;
    func_8036D30C_Anim a;
};

extern struct func_8036A5AC_Vec func_8036A134(s32, f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_8036A4AC(s32, void *, f32, f32, f32);
extern func_8036D30C_Anim func_802256E4(s32, s32);

void func_8036A5AC(s32 arg0, struct func_8036A5AC_P **arg1, f32 arg2, f32 arg3) {
    struct func_8036A5AC_Q *v;
    struct func_8036A5AC_Vec out;
    f32 sp3C;
    f32 sp38;
    union func_8036A5AC_Anim8 anim;

    v = (*arg1)->unk2C;
    out = func_8036A134(arg0, arg2, arg3);
    sp3C = out.x - v->unk4;
    sp38 = out.z - v->unkC;
    anim.a = func_802256E4(arg0, func_8036A4AC(arg0, arg1, sp3C, sp38, func_8002FC20(sp3C * sp3C + sp38 * sp38)) & 0xFF);
    func_8013A28C(arg1, anim.a);
}
