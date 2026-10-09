#include "context.h"

extern s32 func_8000469C(s32, s32);
extern void func_80016EAC(u16);

s32 func_80004664(s32 arg0, s32 arg1) {
    func_80016EAC((u16) arg0);
    func_8000469C(arg0, arg1);
    return arg1;
}
