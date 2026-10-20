#include "context.h"

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern s32 func_801CE2D0(s32, s32);
extern f32 D_801E994C;

struct func_801E44F4_Struct3 {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
};
struct func_801E44F4_Struct2 {
    u8 pad[0x2C];
    struct func_801E44F4_Struct3 *p;
};
struct func_801E44F4_Struct1 {
    u8 pad[0x24];
    struct func_801E44F4_Struct2 *p;
};
struct func_801E44F4_Struct0 {
    u8 pad[8];
    struct func_801E44F4_Struct1 *p;
};

s32 func_801E44F4(s32 arg0, s32 arg1) {
    struct func_801E44F4_Struct3 *pos;
    f32 fraction;

    fraction = (f32)(u32)func_801C1134(4, 0) / 80.0f;
    (*(struct func_801E44F4_Struct0 **)(func_801DAAF0 + 0x24))->p->p->p->z =
        -73.5f * fraction + -39.5f;
    if (func_801C1088(4, 0, 0x50) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0xD;
    }
    if (func_801CE2D0(0x0168003F, 0xA) || func_801CE2D0(0x0168003F, 0x16)) {
        pos = (*(struct func_801E44F4_Struct0 **)(func_801DAAF0 + 0x24))->p->p->p;
        func_8038D33C(pos->x, pos->y, *(s32 *)&pos->z, 0x677, D_801E994C, 1.0f);
    }
    return 0xC;
}
