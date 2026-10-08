#include "context.h"

extern u32 D_8038D8D0;
extern s32 D_801E3A74;
extern s32 D_801E3A78;

s32 func_801E2970(s32 arg0, s32 arg1) {
    *(u8 *)(*(u32 *)(*(u32 *)(D_8038D8D0 + 0x18) + 0x30) + 0x4B) = 0xFF;
    D_801E3A74 = 0;
    D_801E3A78 = 0;
    return 3;
}
