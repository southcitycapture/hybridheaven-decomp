#include "common.h"

extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C(void);
extern s32 D_801DB950;
extern s32 D_801DB97C;
extern s32 D_801E1730;

u64 D_801E1758;
u32 D_801E1760;

void func_801D6AB8(s32 arg0) {
    if ((D_801DB950 = arg0) != 0) {
        D_801DB97C = 0;
        D_801E1758 = func_801C0B2C();
        D_801E1760 = 0;
        return;
    }
    func_8012D844((void *)D_801E1730, 0x28, 4);
}
