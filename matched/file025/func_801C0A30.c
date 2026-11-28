#include "common.h"
extern u64 D_801D8D80;
extern u64 D_801D8D88;
extern u64 func_801C0C08(void);



void func_801C0A30(void) {
    D_801D8D88 = 0;
    D_801D8D80 = func_801C0C08();
}
