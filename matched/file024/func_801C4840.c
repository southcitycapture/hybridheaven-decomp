#include "context.h"
extern s32 D_801CC8C0;
void func_801C48A4(s32 arg0, s32 arg1);

extern void func_80140600();
extern void func_80002364(s32, s32, s32, s32);
extern u8 D_801CCA34[];

void func_801C4840(s32 arg0, s32 arg1) {
    func_80140600();
    D_801CC8C0 = func_80005670(arg0, D_801CCA34);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801C48A4);
}
