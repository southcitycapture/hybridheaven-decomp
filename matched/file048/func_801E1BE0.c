#include "context.h"
extern void func_8038BE98(f32 a0);
extern void func_8038BD50(f32 a0, f32 a1, f32 a2);
extern void D_8038BD88(f32 a0, f32 a1, f32 a2);
extern void D_8038C158();
s32 func_8038D28C(s32 a);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

extern void func_8038BEC8(f32 a0);
extern f32 D_801EA460;
extern f32 D_801EA464;
extern f32 D_801EA468;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x73);
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801EA460);
    func_8038BD50(0.0f, D_801EA464, 125.6f);
    D_8038BD88(0.0f, D_801EA468, 79.2f);
    return 0;
}
