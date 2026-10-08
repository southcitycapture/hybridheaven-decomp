#include "context.h"

u16 func_8012C6B4(s32 arg0, void *arg1, void *arg2);
void func_800058DC(void *arg0, void *arg1);
void func_802428B8(void);

void func_8024294C(void *arg0, void *arg1) {
    s32 temp_v0;

    ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] - 0x4B);
    temp_v0 = *(u16 *) ((u8 *) arg0 + 0x90);
    *(u16 *) ((u8 *) arg0 + 0x90) = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        ((u8 *) &D_801BBBF0)[0xF20] = 0;
        *(u16 *) ((u8 *) arg0 + 0x90) = func_8012C6B4(0x32, &D_801BBBF0, arg0);
        func_800058DC(arg0, func_802428B8);
    }
}
