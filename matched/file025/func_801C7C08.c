#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
void func_801C8AB8(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3);
extern f64 D_801DD2C0;
extern u8 D_801E0504[];
extern u8 D_801E0528[];

s32 func_801C7C08(f32 arg0, f32 arg1, u8 *arg2, u8 *arg3) {
    u8 pad[12];
    f32 sp18;
    u64 r;

    if (func_801C0DE4(3, 0x20F1, arg1) != 0) {
        func_801C0EB0(3, 0x20F1);
        return 1;
    }
    if (func_801C0DE4(3, 0x20F1, arg0) != 0) {
        r = func_801C0F18(3, 0x20F1);
        sp18 = (f32)((func_80034C24(r) / D_801DD2C0) - (f64)arg0) / (arg1 - arg0);
        func_801C8AB8((f32 *)&D_801E04E0, (f32 *)arg2, (f32 *)arg3, sp18);
        func_801C8AB8((f32 *)D_801E0504, (f32 *)(arg2 + 0x24), (f32 *)(arg3 + 0x24), sp18);
        func_801C8AB8((f32 *)D_801E0528, (f32 *)(arg2 + 0x48), (f32 *)(arg3 + 0x48), sp18);
    }
    return 0;
}
