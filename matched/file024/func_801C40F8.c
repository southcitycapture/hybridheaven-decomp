#include "context.h"
extern u8 D_801CC8C8;
extern void func_800058DC(s32, void *);
extern void func_8001B204();

extern void func_80152240();
extern u8 D_801CEDA4[];
extern u8 D_801CEDB8[];
extern u8 D_801CEDCC[];
extern u8 D_801CEDE0[];
extern u8 D_801CEDF4[];
extern u8 D_801CEE08[];
extern u8 D_801CEE0C[];
extern void func_801C4200();

void func_801C40F8(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEDA4);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEDB8);
    func_8001B204(2, 0x7D0, 0x94, D_801CEDCC);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEDE0);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEDF4);
    func_8001B204(5, 0, 0, D_801CEE08);
    func_8001B204(6, 0, 0, D_801CEE0C);
    func_80152240();
    func_800058DC(arg0, func_801C4200);
}
