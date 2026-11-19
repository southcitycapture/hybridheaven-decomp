#include "common.h"
extern s32 D_801DAC50;
extern s32 D_801DAC58;
extern s32 D_801DAC84;
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern s32 D_801DAC80;
extern u64 D_801E11E0[1];
extern u32 D_801E11E8;
u64 D_801E11E0[1];

void func_801CE3D0(s32 arg0) {
    D_801DAC58 = arg0;
    if (D_801DAC84 != 0) {
        if (D_801DAC58 != 0) {
            D_801DAC80 = 0;
            D_801E11E0[0] = func_801C0B2C();
            D_801E11E8 = 0;
        } else {
            func_8012D844((void *)D_801DAC50, 0x28, 4);
        }
    } else {
        if (D_801DAC58 != 0) {
            D_801DAC80 = 0;
            D_801E11E0[0] = func_801C0B2C();
            D_801E11E8 = 0;
        } else {
            func_8012D844((void *)D_801DAC50, 0x28, 0);
        }
    }
}
