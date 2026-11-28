#include "common.h"
extern u64 D_801D8D88;
extern s32 D_801D8D90;
extern u64 func_801C0C08(void);


extern u64 D_801D8DA0;

void func_801C0A68(void) {
    if (D_801D8D90 != 0) {
        D_801D8D88 += func_801C0C08() - D_801D8DA0;
    }
}
