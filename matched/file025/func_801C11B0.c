#include "common.h"
extern s32 D_801D8D90;
extern s32 D_801D8D94;
extern s32 D_801D8D98;
extern u64 D_801D8DA0;
extern u64 func_801C0C08(void);



void func_801C11B0(void) {
    D_801D8D98 = 0;
    D_801D8D94 = D_801D8D98;
    D_801D8D90 = 1;
    D_801D8DA0 = func_801C0C08();
}
