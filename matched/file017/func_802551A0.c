#include "context.h"
void func_80255204(s16 *arg0);

extern void func_800179B0(void *);
extern void func_800208C4(s32);
extern u8 D_80259A30[];

void func_802551A0(func_80251820_Ctx *arg0) {
    u8 pad[0x20];
    volatile s32 count;
    u16 temp;

    temp = arg0->unk92;
    count = temp;
    arg0->unk92 = temp + 1;
    func_8025799C();
    if (count >= 0x78) {
        func_800179B0(D_80259A30);
        func_800208C4(0x73);
        func_800058DC(arg0, func_80255204);
    }
}
