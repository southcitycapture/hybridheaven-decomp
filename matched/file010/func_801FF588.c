#include "context.h"

struct func_801FF588_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u16 unkA0;
    u8 padA2[0xA8 - 0xA2];
    u16 unkA8;
};

void func_801FF588(struct func_801FF588_Struct *arg0, s32 arg1) {
    extern void (*D_802177A8[])();
    extern void (*D_802177B8[])();
    extern void func_801FF628();
    extern void func_801FF73C(s32, s32);
    void (*temp_v0)();
    void (*temp_v0_2)(void *, s32);

    temp_v0 = D_802177A8[arg0->unkA0];
    if (temp_v0 != NULL) {
        temp_v0();
    }
    temp_v0_2 = D_802177B8[arg0->unk9F];
    if (temp_v0_2 != NULL) {
        temp_v0_2(arg0, arg1);
    }
    if (arg0->unkA8 & 1) {
        func_800058DC(arg0, func_801FF73C);
        return;
    }
    func_800058DC(arg0, func_801FF628);
}
