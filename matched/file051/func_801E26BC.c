#include "common.h"
extern u8 *D_801DAB14;
extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);


extern f32 D_801E78AC;
extern f32 D_801E78B0;
extern f32 D_801E78B4;
extern f32 D_801E78B8;
extern f32 D_801E78BC;
extern f32 D_801E78C0;
extern f32 D_801E78C4;

#define A(p) ((u8 *)(p))
#define L(p, o) (*(u8 **)(A(p) + (o)))
#define C1 L(L(L(D_801DAB14, 8), 0x24), 0x2C)
#define C2 L(L(L(L(D_801DAB14, 8), 8), 0x24), 0x2C)

s32 func_801E26BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020E6DA0) != 0) {
        func_8038BE98(D_801E78AC);
        func_8038BD50(D_801E78B0, 17.0f, 0x412E6666);
        D_8038BD88(D_801E78B4, 15.0f, 0xC1233333);
        *(f32 *)(C1 + 4) = D_801E78B8;
        *(f32 *)(C1 + 8) = 0.0f;
        *(f32 *)(C1 + 0xC) = D_801E78BC;
        *(s16 *)(C1 + 0x12) = 0;
        *(f32 *)(C2 + 4) = D_801E78C0;
        *(f32 *)(C2 + 8) = 0.0f;
        *(f32 *)(C2 + 0xC) = D_801E78C4;
        *(s16 *)(C2 + 0x12) = 0;
        return 0x16;
    }
    return 0x15;
}
