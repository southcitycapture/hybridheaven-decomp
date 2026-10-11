#include "context.h"

extern void func_80026300(void *, s32, s32);
extern void func_80030610(void *, void *, s32);
extern s32 D_8004AB40;
extern u8 D_800CD4D0[];
extern u8 D_800CD4D8[];

void func_8002ADD0(void) {
    D_8004AB40 = 1;
    func_80030610(D_800CD4D8, D_800CD4D0, 1);
    func_80026300(D_800CD4D8, 0, 0);
}
