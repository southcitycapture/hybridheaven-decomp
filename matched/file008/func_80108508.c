#include "common.h"
s32 func_80108718(u8 arg0);
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);

#undef func_80108718

struct func_80108508_StructRange {
    s32 start;
    s32 end;
};

void func_80108508(f32 arg0, f32 arg1, struct func_80108508_StructRange range, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108718;
    func_80108868(arg0, arg1, range.start, range.end, arg4, arg5);
}
