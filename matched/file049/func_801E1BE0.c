#include "context.h"
extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038D28C(s32);

extern void func_8038C53C(s32);
extern void func_8038BEC8(f32);
extern f32 D_801E7630;
extern f32 D_801E7634;
extern f32 D_801E7638;
extern f32 D_801E763C;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038C53C(1);
    func_8038BEC8(5.0);
    func_8038D28C(0x74);
    func_8038BE98(D_801E7630);
    func_8038BD50(D_801E7634, 16.5, 126.3);
    D_8038BD88(D_801E7638, D_801E763C, 84.5);
    func_8038D28C(0x634);
    return 1;
}
