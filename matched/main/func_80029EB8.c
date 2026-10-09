#include "context.h"

extern void func_80029E30(void *p);
extern void func_80029D30(void *p, s32 arg1);

void func_80029EB8(s32 arg0) {
    s32 sp18[16];

    func_80029E30(sp18);
    func_80029D30(sp18, arg0);
}
