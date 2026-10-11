#include "context.h"
extern u8 D_801CC8C8;

extern u8 D_801CED10[];
extern u8 D_801CED20[];
extern u8 D_801CED2C[];
extern u8 D_801CED38[];
extern u8 D_801CED44[];
extern u8 D_801CED48[];
extern u8 D_801CED4C[];
extern void func_801C3A40();

void func_801C3940(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CED10);
    func_8001B204(1, 0x7D0, 0x8A, D_801CED20);
    func_8001B204(2, 0x7D0, 0x94, D_801CED2C);
    func_8001B204(3, 0x7D0, 0x9E, D_801CED38);
    func_8001B204(4, 0, 0, D_801CED44);
    func_8001B204(5, 0, 0, D_801CED48);
    func_8001B204(6, 0, 0, D_801CED4C);
    func_800058DC(arg0, func_801C3A40);
}
