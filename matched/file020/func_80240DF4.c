#include "context.h"
extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
extern void func_800058DC(void *arg0, void *arg1);

struct func_80240DF4_Struct {
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

extern f32 D_80246A58;
extern f32 D_80246A5C;
extern void func_80240E8C(void);

void func_80240DF4(void *arg0, void *arg1) {
    struct func_80240DF4_Struct buf;

    if (func_801C2FF8() != 0) {
        buf.a = D_80246A58;
        buf.b = D_80246A5C;
        buf.c = 0.0f;
        buf.d = 0x1100;
        buf.e = 0x0168003E;
        buf.f = 1.5f;
        buf.g = 0;
        buf.h = 0x5A;
        buf.i = 0x15A2;
        func_801C2F0C(6, (void *) &buf);
        func_800058DC(arg0, func_80240E8C);
    }
}
