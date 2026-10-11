#include "context.h"

extern struct func_80243290_StructTriple D_80252400;
extern void func_802441A8(void);

void func_80244138(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8013A1B4((void **)arg1, D_80252400, 0xFFFFFF);
        func_800058DC((void *)arg0, (void *)func_802441A8);
    }
}
