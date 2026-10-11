#include "context.h"

extern void func_800266B0(void *, void *, s32);
extern void func_8002ADD0(void);
extern s32 D_8004AB40;
extern u8 D_800CD4D8[];

void func_8002AE20(void) {
    s32 sp1C;

    if (D_8004AB40 == 0) {
        func_8002ADD0();
    }
    func_800266B0(D_800CD4D8, &sp1C, 1);
}
