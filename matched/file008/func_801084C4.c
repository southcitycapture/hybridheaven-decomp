#include "common.h"
s32 func_801086C4(s32 arg0);
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);


struct func_801084C4_StructPair {
    s32 first;
    s32 second;
};

void func_801084C4(f32 arg0, f32 arg1, struct func_801084C4_StructPair args, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_801086C4;
    func_80108868(arg0, arg1, args.first, args.second, arg4, arg5);
}
