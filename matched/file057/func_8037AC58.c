#include "context.h"
extern s32 func_800058DC(void *, void *);
void func_8037ACCC(void *arg0, s32 arg1);

struct func_8037AC58_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
};

extern void func_8037AAC0(void *, s32, s32, u8, u8 *);

void func_8037AC58(struct func_8037AC58_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 temp_a3;

    temp_a3 = arg0->unk90;
    if (temp_a3 == 0) {
        func_8037AAC0(arg0, 0x7C, 0x6E, 0, &sp27);
    } else {
        func_8037AAC0(arg0, 0x88, 0x6E, temp_a3, &sp27);
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, &func_8037ACCC);
}
