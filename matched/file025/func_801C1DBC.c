#include "common.h"
extern s32 D_801D8DD4;
extern s32 D_801D8DD8;
extern s32 D_801D8DDC;
extern u64 func_801C0C08();


extern u64 D_801D8DE0;

void func_801C1DBC(void) {
    D_801D8DD4 = 1;
    D_801D8DD8 = D_801D8DDC = 0;
    D_801D8DE0 = func_801C0C08();
}
