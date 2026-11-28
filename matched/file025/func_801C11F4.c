#include "common.h"
extern s32 D_801D8D90;
extern u64 D_801D8DA0;

extern void func_801C0A68(void);

void func_801C11F4(void) {
    D_801D8D90 = 0;
    func_801C0A68();
    D_801D8DA0 = 0;
}
