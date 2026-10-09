#include "context.h"
void D_8038BD88(f32, f32, f32);
extern void D_8038C158(void);
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);

extern s32 D_801FAFD8;
extern f32 D_801FBD90;
extern f32 D_801FBD94;
extern f32 D_801FBD98;
extern f32 D_801FBD9C;

s32 func_801E2980(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x045E7820) != 0) {
        D_8038C158();
        D_801FAFD8 = 0;
        return 8;
    }
    func_8038BD50(D_801FBD90, D_801FBD94, -2.7f);
    D_8038BD88(D_801FBD98, D_801FBD9C, 6.3f);
    return 7;
}
