#include "context.h"

extern void func_800058DC(void *, void (*)(void));
extern void func_800179B0(void *);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_800208C4(s32);
struct func_802410C8_Struct;
extern void func_802410C8(struct func_802410C8_Struct *, void *);
extern struct func_80246730_Struct D_801BBBF0;
extern u8 D_802469F0[];

typedef struct func_80241024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80241024_Struct;

void func_80241024(func_80241024_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk3C++;
    if (temp == 0x1E) {
        C(0x164) = 0;
        C(0x15D) = 0;
        func_8001E978(arg0, 0, 0, 0, 0x1E, 0, 2, 0);
        func_800208C4(0x6A);
    }
    if (temp >= 0x3C) {
        func_800179B0(D_802469F0);
        func_800058DC(arg0, (void (*)(void)) func_802410C8);
    }
}
