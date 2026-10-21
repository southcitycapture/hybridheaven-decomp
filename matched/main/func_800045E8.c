#include "context.h"
extern s32 func_8001F290();
extern s32 func_8000469C(s32, s32);
extern void func_80016EAC();

s32 func_800045E8(s32 arg0, s32 arg1) {
    s32 r;
    s32 *p;
    if (arg0 == 0 || (u32)arg0 >= 0x271) {
        return 0;
    }
    p = (s32 *)((s32)&D_80037C5C[arg0 * 2] - 8);
    r = func_8001F290(p[1] - p[0], arg1);
    func_8000469C(arg0, r);
    func_80016EAC(arg0 & 0xFFFF, r, arg0);
    return r;
}
