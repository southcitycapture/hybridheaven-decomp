#include "common.h"
extern u8 *D_801DAB14;
void *func_801BF6B0(s32 arg0);
extern s32 func_801C1000(s32, s32);
extern s32 func_801D7634(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern s32 func_801C1134(s32, s32);
extern void func_801C10D8(s32, s32);
extern f32 D_801E793C;
extern f32 D_801E7940;
extern f32 D_801E7944;
#define P(b, o) (*(u8 **)((b) + (o)))
s32 func_801E6470(s32 arg0, s32 arg1) {
    u32 t;
    f32 d;
    t = func_801C1134(4, 3);
    d = (f32)t / 135.0f;
    *(f32 *)(P(P(P(P(P(P(D_801DAB14, 8), 8), 8), 8), 0x24), 0x2C) + 0xC) = D_801E793C * d + D_801E7940;
    if (*(s32 *)((u8 *)func_801BF6B0(0) + 0xC) >= 0x18) {
        func_801C10D8(4, 3);
        func_801C1000(4, 3);
        return 0x13;
    }
    if (func_801D7634(0x01B80047, 6) != 0 || func_801D7634(0x01B80047, 0x24) != 0) {
#define Q P(P(P(P(P(P(D_801DAB14, 8), 8), 8), 8), 0x24), 0x2C)
        func_8038D33C(*(f32 *)(Q + 4), *(f32 *)(Q + 8), *(s32 *)(Q + 0xC), 0x654, D_801E7944, 1.0f);
    }
    return 0x12;
}
