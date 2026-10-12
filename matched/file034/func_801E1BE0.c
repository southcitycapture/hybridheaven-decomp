#include "context.h"
void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern f32 D_801E93C0;
extern f32 D_801E93C4;
extern f32 D_801E93C8;
extern f32 D_801E93CC;
extern void func_8038C53C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BD50(D_801E93C0, D_801E93C4, 256.1f);
        D_8038BD88(D_801E93C8, D_801E93CC, 281.9f);
        func_8038C53C(1);
        return 1;
    }
    return 0;
}
