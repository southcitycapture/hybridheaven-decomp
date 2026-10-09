#include "context.h"

f32 func_801C78F8();

void func_801E4284(void) {
    f32 v;

    v = func_801C78F8() - 0.5f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = D_801E5A80[0] + v;
}
