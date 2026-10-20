#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 D_801DD3F8;
f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2);
void func_801CCE50(u8 arg0, u8 arg1, u8 arg2);

s32 func_801CD378(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    u8 pad[12];
    f32 sp20;
    u8 sp1F;
    u8 sp1E;

    if (func_801C0DE4(1, 0x56D8, arg0) != 0) {
        func_801C0EB0(1, 0x56D8);
        return 1;
    }
    sp20 = (f32)(func_80034C24(func_801C0F18(1, 0x56D8)) / D_801DD3F8) / arg0;
    sp1F = (u32)func_801CDBD4(arg1, arg4, sp20);
    sp1E = (u32)func_801CDBD4(arg2, arg5, sp20);
    func_801CCE50(sp1F, sp1E, (u32)func_801CDBD4(arg3, arg6, sp20));
    return 0;
}
