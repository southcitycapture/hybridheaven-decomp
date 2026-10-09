#include "context.h"

extern void func_801D3750(s32);

#define FUNC_801EA8E0_CHAIN(p) (*(u8**)(*(u8**)(*(u8**)(*(u8**)(*(u8**)((p) + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C))

s32 func_801EA8E0(s32 arg0, s32 arg1) {
    u8 **pp;

    if (func_801C0B8C(0xC96A8) != 0) {
        func_801D3750(0);
        pp = (u8**)D_801DAB14;
        *(f32*)(FUNC_801EA8E0_CHAIN(*pp) + 0x4) = 0.0f;
        *(f32*)(FUNC_801EA8E0_CHAIN(*pp) + 0x8) = 0.0f;
        *(f32*)(FUNC_801EA8E0_CHAIN(*pp) + 0xC) = 0.0f;
        *(u16*)(FUNC_801EA8E0_CHAIN(*pp) + 0x12) = 0xEC8;
        func_801CC470(2, 0x03200069, 0, 1, 1.0f);
        return 0x31;
    }
    func_8038D660();
    return 0x30;
}
