#include "common.h"

typedef struct func_8024781C_Inner {
    u8 pad[0x40];
    f32 a;
    u8 pad2[0x4];
    f32 b;
} func_8024781C_Inner;
typedef struct func_8024781C_Struct {
    u8 pad[0xDC];
    func_8024781C_Inner *inner;
} func_8024781C_Struct;
extern func_8024781C_Struct D_801BBBF0;
struct func_80247AAC_StructState {
    u8 pad[0x1E8];
    f32 a, b, c, d, e, f;
};
#define S ((struct func_80247AAC_StructState *)&D_801BBBF0)
void func_800058DC(s32, void *);
s32 func_801C3044();
struct func_80247AAC_StructParams {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};
extern void func_80247B60();
void func_80247AAC(s32 arg0, s32 arg1) {
    struct func_80247AAC_StructParams params;

    if (func_801C3044() == 0) {
        params.a = 0;
        params.b = 0x03480017;
        params.c = 3.0f;
        D_801C2F0C(4, &params.a);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        S->a = (-367.799988f);
        S->b = (-143.100006f);
        S->c = 187.600006f;
        S->d = (-413.5f);
        S->e = (-154.199997f);
        S->f = 201.100006f;
        func_800058DC(arg0, func_80247B60);
    }
}
