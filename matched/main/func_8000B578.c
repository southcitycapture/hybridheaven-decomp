#include "context.h"

extern void func_8000B258(s32, void *);
extern void func_8000B67C(s32, void *);

void func_8000B578(s32 arg0, s32 *arg1) {
    s32 sp18[0x40 / 4];

    func_8000B67C(arg1[7], sp18);
    func_8000B258(arg0, sp18);
}
