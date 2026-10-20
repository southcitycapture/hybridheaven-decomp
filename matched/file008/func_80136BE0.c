#include "context.h"
extern void func_801369B8();
void func_80136BE0(func_801361C8_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_801BBD84 = 2;
        if (func_8012A630((void *)arg0, (f32)(((arg0->unk38->unk10 >> 0x10) & 0xFF) + 0x14)) == 0) {
            func_800058DC(arg0, (void *)func_801369B8);
        }
    }
}
