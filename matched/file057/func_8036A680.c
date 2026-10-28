#include "common.h"

struct AnimT { int id; unsigned short frame; unsigned char pad6[2]; float speed; };
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_80010550();
extern f32 func_8002FC20(f32);
extern void func_8013A28C(void *, struct AnimT);
extern struct AnimT func_802256E4(s32, s32);
struct func_8036A5AC_Vec {
    f32 x;
    f32 y;
    f32 z;
};
extern struct func_8036A5AC_Vec func_8036A134(s32, f32, f32);
extern s32 func_8036A4AC(s32, void *, f32, f32, f32);
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
extern s32 func_8012C6B4(s32);
extern f64 D_8038B0E0;

typedef struct func_8036A680_Arg { u8 pad[0x5C]; s32 unk5C; } func_8036A680_Arg;

s32 func_8036A680(func_8036A680_Arg *arg0, struct func_8036A5AC_P **arg1, f32 arg2, f32 arg3) {
    s32 sp7C;
    u8 *sp78;
    s32 ret;
    struct func_8036A5AC_Vec sp68;
    f32 dx, dz;
    f32 d;
    u8 sp5B;
    struct AnimT sp4C;
    struct func_8036A5AC_Q *s;

    sp7C = arg0->unk5C;
    if (arg0 == (func_8036A680_Arg *)D_801BBCCC) {
        sp78 = D_801BC03C;
    } else {
        sp78 = D_801BC3D8;
    }
    s = (*arg1)->unk2C;
    sp68 = func_8036A134((s32)arg0, arg2, arg3);
    sp78[0x32] = (sp78[0x32] & 0xFF1F) | 0x20;
    sp5B = func_80010550(arg1, sp7C);
    dx = sp68.x - s->unk4;
    dz = sp68.z - s->unkC;
    d = func_8002FC20(dx * dx + dz * dz);
    if (sp5B != 0) {
        sp4C = func_802256E4(*(s32 *)&arg0, func_8036A4AC((s32)arg0, arg1, dx, dz, d) & 0xFF);
        func_8013A28C(arg1, sp4C);
    }
    if (d >= 2.0) {
        s->unk4 += (f64)((dx / d) * (f32)(func_8012C6B4(5) - 2)) * D_8038B0E0;
        dx = sp68.x - s->unk4;
        d = func_8002FC20(dx * dx + dz * dz);
    }
    if (d < 2.0) {
        s->unk4 = sp68.x;
        s->unkC = sp68.z;
        return 1;
    }
    return 0;
}
