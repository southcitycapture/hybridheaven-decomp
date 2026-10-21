#include "context.h"

struct func_80247AAC_StructParams {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};
struct func_80247AAC_StructState {
    u8 pad[0x1E8];
    f32 a, b, c, d, e, f;
};
#define S ((struct func_80247AAC_StructState *)&D_801BBBF0)
extern f32 D_80258D1C;
extern f32 D_80258D20;
extern f32 D_80258D24;
extern f32 D_80258D28;
extern f32 D_80258D2C;
extern f32 D_80258D30;
extern void func_80247B60();

void func_80247AAC(s32 arg0, s32 arg1) {
    struct func_80247AAC_StructParams params;

    if (func_801C3044() == 0) {
        params.a = 0;
        params.b = 0x03480017;
        params.c = 3.0f;
        D_801C2F0C(4, &params.a);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        S->a = D_80258D1C;
        S->b = D_80258D20;
        S->c = D_80258D24;
        S->d = D_80258D28;
        S->e = D_80258D2C;
        S->f = D_80258D30;
        func_800058DC(arg0, func_80247B60);
    }
}
