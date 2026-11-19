#include "common.h"
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);

s32 func_80108670(s32 arg0);
s32 func_80108670(s32 arg0);

struct func_80108480_StructArgs {
    s32 first;
    s32 second;
};

void func_80108480(f32 arg0, f32 arg1, struct func_80108480_StructArgs args, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108670;
    func_80108868(arg0, arg1, args.first, args.second, arg4, arg5);
}
