#include "common.h"
extern s32 D_801DB7E0;

extern u64 func_801C0B2C(void);
extern s32 D_801DB800;
u64 D_801E16E0[1];
extern s32 D_801E16E8;

void func_801D5DF8(s32 arg0) {
    D_801DB7E0 = arg0;
    if (D_801DB7E0 != 0) {
        D_801DB800 = 0;
        D_801E16E0[0] = func_801C0B2C();
        D_801E16E8 = 0;
    }
}
