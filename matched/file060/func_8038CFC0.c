#include "context.h"
extern void func_80229500();
void func_8038CFF4();

void func_8038CFC0(s32 arg0, f32 arg1) {
    extern void func_800058DC();
    func_80229500(arg0);
    arg0 = arg0 * 1;
    func_800058DC(arg0, func_8038CFF4);
}
