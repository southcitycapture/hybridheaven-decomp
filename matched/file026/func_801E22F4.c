#include "context.h"
void D_8038BD88(f32, f32, f32);
extern void D_8038C158(void);
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);
void func_8038BEC8(f32);

extern s32 D_801FAFD8;

s32 func_801E22F4(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BD50(4096.0f, 0.0f, 18.0f);
    D_8038BD88(4096.0f, 0.0f, 0.0f);
    if (func_801C0B8C(0x3567E0) != 0) {
        D_801FAFD8 = 0;
        D_8038C158();
        return 1;
    }
    return 0;
}
