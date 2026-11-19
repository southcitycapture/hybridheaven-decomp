#include "common.h"
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zB_277 func_801C5A1C__ctx277
#define zB_366 func_801C5A1C__func_801C5A5C
#define func_801C5A1C__func_801C5A5C ZP(zB, __LINE__)
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;
s32 func_801C5A1C__func_801C5A5C(f32, f32, f32, f32, f32, f32);

#undef func_801C5A1C__func_801C5A5C

s32 func_8010843C(f32, f32, f32, s32, f32, f32);

void func_801C7FEC(f32 arg0, f32 arg1, f32 arg2, void *arg3, void *arg4, void *arg5) {
    if (func_8010843C(arg0, arg1, arg2, *(s32 *)arg3, *(f32 *)arg4, *(f32 *)arg5) == 1) {
        *(f32 *)arg3 = *(f32 *)((u8 *)&D_801BBBF0 + 0x374);
        *(f32 *)arg4 = *(f32 *)((u8 *)&D_801BBBF0 + 0x378);
        *(f32 *)arg5 = *(f32 *)((u8 *)&D_801BBBF0 + 0x37C);
    }
}
