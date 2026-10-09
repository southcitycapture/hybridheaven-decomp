#include "context.h"

extern void func_800266B0(void *, void *, s32);
extern void func_80027E60(void);
extern s32 D_80049950;
extern u8 D_800CBF68[];

void func_80027EB0(void) {
    s32 sp1C;

    if (D_80049950 == 0) {
        func_80027E60();
    }
    func_800266B0(D_800CBF68, &sp1C, 1);
}
