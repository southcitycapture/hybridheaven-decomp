#include "context.h"

extern void func_80142778(void);

void func_801402E4(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_80180458);
    func_80142778();
    func_8014307C(0, 0xFF, D_801BEB84);
}
