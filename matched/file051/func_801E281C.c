#include "common.h"
extern u8 *D_801DAB14;
extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801E78C8__load_func_801E281C;
extern f32 D_801E78CC__load_func_801E281C;
extern f32 D_801E78D0__load_func_801E281C;
extern f32 D_801E78D4__load_func_801E281C;
extern f32 D_801E78D8__load_func_801E281C;
extern f32 D_801E78DC__load_func_801E281C;
extern f32 D_801E78E0__load_func_801E281C;
extern f32 D_801E78E4__load_func_801E281C;
extern f32 D_801E78E8__load_func_801E281C;

#define P(p, o) (*(u8 **)((p) + (o)))
#define A (P(P(P(D_801DAB14, 8), 8), 0x24))
#define B (P(P(P(P(P(D_801DAB14, 8), 8), 8), 8), 0x24))

s32 func_801E281C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x029F6300) != 0) {
        func_8038BE98(D_801E78C8__load_func_801E281C);
        func_8038BD50(D_801E78CC__load_func_801E281C, D_801E78D0__load_func_801E281C, 0x42886666);
        D_8038BD88(D_801E78D4__load_func_801E281C, D_801E78D8__load_func_801E281C, 0x42333333);
        *(f32 *)(P(A, 0x2C) + 4) = D_801E78DC__load_func_801E281C;
        *(f32 *)(P(A, 0x2C) + 8) = 0.0f;
        *(f32 *)(P(A, 0x2C) + 0xC) = D_801E78E0__load_func_801E281C;
        *(s16 *)(P(A, 0x2C) + 0x12) = 0x1000;
        *(f32 *)(P(B, 0x2C) + 4) = D_801E78E4__load_func_801E281C;
        *(f32 *)(P(B, 0x2C) + 8) = 0.0f;
        *(f32 *)(P(B, 0x2C) + 0xC) = D_801E78E8__load_func_801E281C;
        *(s16 *)(P(B, 0x2C) + 0x12) = 0x1000;
        return 0x17;
    }
    return 0x16;
}
