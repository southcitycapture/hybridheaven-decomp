#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
extern void func_8038D28C(s32 arg0);

extern void func_8038C53C(s32 arg0);
extern void func_8038BEC8(f32 arg0);
extern f32 D_801E98A0;
extern f32 D_801E98A4;
extern f32 D_801E98A8;
extern f32 D_801E98AC;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038C53C(1);
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E98A0);
    func_8038BD50(D_801E98A4, D_801E98A8, 0x41B9999A);
    D_8038BD88(D_801E98AC, 1.0f, 0x421E0000);
    func_8038D28C(0x91);
    func_8038D28C(0x501);
    return 1;
}
