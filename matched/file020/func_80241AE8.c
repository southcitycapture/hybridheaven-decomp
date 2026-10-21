#include "context.h"
struct func_80241AE8_Struct {
    f32 a, b, c;
    s16 d; s16 pad;
    s32 e;
    f32 f;
    s16 g, h, i;
};
extern s32 func_801C2FF8();
extern void func_80241B80(void *arg0, s32 arg1);
void func_80241AE8(s32 arg0, s32 arg1) {
    struct func_80241AE8_Struct s;
    if (func_801C2FF8() != 0) {
        s.a = -180.0f;
        s.b = 100.0f;
        s.c = 0.0f;
        s.f = 1.5f;
        s.d = 0x1100;
        s.e = 0x0168003E;
        s.g = 0;
        s.h = 0x5A;
        s.i = 0x1800;
        func_801C2F0C(6, (struct func_80240EF8_Struct *)&s);
        func_800058DC(arg0, func_80241B80);
    }
}
