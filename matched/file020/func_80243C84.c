#include "context.h"
struct func_80243C84_Struct {
    f32 a, b, c;
    s16 d; s16 pad;
    s32 e;
    f32 f;
    s16 g, h, i;
};
extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, s16 *);
void func_80243D1C(s32 arg0, s32 arg1);
void func_80243C84(s32 arg0, s32 arg1) {
    struct func_80243C84_Struct s;
    if (func_801C2FF8() != 0) {
        s.a = -42.0f;
        s.b = 272.0f;
        s.c = 0.0f;
        s.f = 1.0f;
        s.d = 0x1100;
        s.e = 0x0168003E;
        s.g = 0;
        s.h = 0x96;
        s.i = 0x1C00;
        func_801C2F0C(6, (s16 *)&s);
        func_800058DC((void *)arg0, func_80243D1C);
    }
}
