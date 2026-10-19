#include "context.h"

void func_801C1D7C();
extern u8 D_801CEC6C[];
extern u8 D_801CEC7C[];
extern u8 D_801CEC8C[];
extern u8 D_801CEC9C[];
extern u8 D_801CECAC[];
extern u8 D_801CECBC[];
extern u8 D_801CECCC[];

void func_801C1C44(s32 arg0, s32 arg1) {
    u16 *p = (u16 *)&D_801CC8D0;

    *p = *p + 1;
    if (*p >= 0x1E) {
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEC6C);
        func_8001B204(1, 0x7D0, 0x76, D_801CEC7C);
        func_8001B204(2, 0x7D0, 0x80, D_801CEC8C);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEC9C);
        func_8001B204(4, 0x7D0, 0x94, D_801CECAC);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECBC);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECCC, 6);
        }
        func_800058DC(arg0, func_801C1D7C);
    }
}
