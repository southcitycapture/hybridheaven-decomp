#include "common.h"

extern f32 D_801E8050;
extern s32 D_801E8054;
extern void D_8038BD88(f32, f32, f32);
extern void *func_801BF6B0(s32);
extern void func_801C1000(s32, s32);
struct func_801E1BE0_Obj {
    u8 pad0[0xC];
    s32 unkC;
};
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038BEC8(f32);
s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (((struct func_801E1BE0_Obj *) func_801BF6B0(4))->unkC >= 9) {
        D_801E8050 = 18.0f;
        D_801E8054 = 0;
        func_801C1000(0, 0);
        return 1;
    }
    func_8038BE98(33.2999992f);
    func_8038BD50((-12.8000002f), 8.69999981f, 12.6f);
    D_8038BD88((-4.5999999f), 13.5f, -8.8f);
    return 0;
}
