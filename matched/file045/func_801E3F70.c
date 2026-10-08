#include "context.h"

extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern void func_8038D28C(s32);
extern f32 D_801E8CA0;
extern f32 D_801E8CA4;
extern f32 D_801E8CA8;

s32 func_801E3F70(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E8CA0);
    func_8038BD50(D_801E8CA4, 12.5f, -10.8f);
    D_8038BD88(D_801E8CA8, 14.5f, -40.2f);
    func_8038D28C(0x72);
    return 1;
}
