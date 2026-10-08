#include "context.h"

extern f32 D_801E5A80[];

void func_801E4210(void) {
    u8 *v0;
    f32 *dst;

    func_801C78C0();
    v0 = *(u8 **)(func_801DAAF0 + 0x24);
    dst = D_801E5A80;
    dst[0] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4);
    dst[1] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
    dst[2] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC);
}
