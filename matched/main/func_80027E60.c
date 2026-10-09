#include "context.h"

extern void func_80026300(void *, s32, s32);
extern void func_80030610(void *, void *, s32);
extern s32 D_80049950;
extern u8 D_800CBF60[];
extern u8 D_800CBF68[];

void func_80027E60(void) {
    D_80049950 = 1;
    func_80030610(D_800CBF68, D_800CBF60, 1);
    func_80026300(D_800CBF68, 0, 0);
}
