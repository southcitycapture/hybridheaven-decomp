#include "common.h"
s32 func_8010876C(s32 arg0);
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);


struct func_8010854C_StructPair {
    s32 first;
    s32 second;
};

void func_8010854C(f32 arg0, f32 arg1, struct func_8010854C_StructPair pair, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_8010876C;
    func_80108868(arg0, arg1, pair.first, pair.second, arg4, arg5);
}
