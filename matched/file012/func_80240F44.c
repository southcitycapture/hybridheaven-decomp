#include "common.h"

extern void func_8037488C(s32 arg0, void *arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern u8 D_801BBBF0[];
extern void func_80240FA0(void);

void func_80240F44(s32 arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = *(u16 **) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x58);
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x30) = temp_v0[0];
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x32) = temp_v0[1];
    func_8037488C(arg0, D_801BBBF0);
    func_800058DC(arg0, func_80240FA0);
}
