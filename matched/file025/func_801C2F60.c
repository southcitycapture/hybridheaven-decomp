#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4();
u64 func_801C0F18(s32, s32);
extern f32 D_801DA284;
extern f64 D_801DD218;
extern f32 D_801DD220;

void func_801C2F60(f32 *arg0) {
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 0x1F40);
    D_801DA284 = (f32) (func_80034C24(temp_ret) / D_801DD218);
    *arg0 = D_801DD220 * D_801DA284 * D_801DA284;
    func_801C0DE4(3, 0x1F40, 0x40A00000);
}
