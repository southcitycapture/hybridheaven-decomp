#define func_80241420 func_80241420_x
#include "context.h"
#undef func_80241420

extern s32 func_801C2FF8();

struct func_80241420_Struct {
    f32 a;
    f32 b;
    f32 c;
    s16 d;
    s32 e;
    f32 f;
    s16 g;
    s16 h;
    s16 i;
};

void func_80241420(void *arg0, s32 arg1) {
    struct func_80241420_Struct s;

    if (func_801C2FF8() != 0) {
        s.a = -180.0f;
        s.b = -90.0f;
        s.c = 0.0f;
        s.f = 1.5f;
        s.d = 0x1100;
        s.e = 0x0168003E;
        s.g = 0;
        s.h = 0x5A;
        s.i = 0x1800;
        func_801C2F0C(6, (void *)&s);
        func_800058DC(arg0, (void *)func_802414B8);
    }
}
