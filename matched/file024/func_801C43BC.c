#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_8001B204();
extern u8 D_801CC8C8;
extern u8 D_801CEE24[];
extern u8 D_801CEE38[];
extern u8 D_801CEE44[];
extern u8 D_801CEE50[];
extern u8 D_801CEE5C[];
extern u8 D_801CEE60[];
extern u8 D_801CEE64[];
extern void func_801C44C4(void);

void func_801C43BC(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, 0x8A, D_801CEE24, 2);
    func_8001B204(1, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x94), D_801CEE38);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE44);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE50);
    func_8001B204(4, 0, 0, D_801CEE5C);
    func_8001B204(5, 0, 0, D_801CEE60);
    func_8001B204(6, 0, 0, D_801CEE64);
    func_800058DC(arg0, func_801C44C4);
}
