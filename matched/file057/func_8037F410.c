#include "context.h"

extern void *func_80005670(void *, void *);
extern u8 D_801BBCCC[];
extern u8 D_80389780[];

void func_8037F410(s32 arg0) {
    u8 *p;

    p = func_80005670(*(void **)D_801BBCCC, D_80389780);
    *(s32 *)(p + 0x94) = arg0;
}
