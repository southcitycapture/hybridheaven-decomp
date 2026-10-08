#include "common.h"

#define FN_GET(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FN_CHAIN5(p) FN_GET(FN_GET(FN_GET(FN_GET(FN_GET(p, 8), 8), 8), 8), 8)
#define FN_OBJ(v) FN_GET(FN_GET(FN_CHAIN5(*(v)), 0x24), 0x2C)

void func_801CC470(s32, s32, s32, s32, f32);
extern s32 D_801E87B0;
extern f32 D_801E8D54;
extern u8 func_801DAAF0[];
s32 func_801C0B8C(u64 time);

s32 func_801E7664(s32 arg0, s32 arg1) {
    u8 **v;

    if (func_801C0B8C(0x02DE74D3) != 0) {
        v = (u8 **)(func_801DAAF0 + 0x24);
        v = (u8 **)((u32)v);
        *(f32 *)(FN_OBJ(v) + 4) = 2.0f;
        *(f32 *)(FN_OBJ(v) + 8) = 0.0f;
        *(f32 *)(FN_OBJ(v) + 0xC) = D_801E8D54;
        *(u16 *)(FN_OBJ(v) + 0x12) = 0x1800;
        func_801CC470(4, 0x03480090, 0, 1, 1.0f);
        D_801E87B0 = 0;
        return 4;
    }
    return 3;
}
