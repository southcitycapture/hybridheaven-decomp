#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80203830/func_80203830.s")


extern u8 D_801BBBF0[];

s32 func_8020394C(void) {
    s32 i;
    u8 *elem;
    u8 *obj;

    for (i = 0; i < 5; i = (i + 1) & 0xFF) {
        elem = D_801BBBF0 + i * 0x18;
        obj = *(u8 **) (elem + 0x1088);
        if (obj != NULL) {
            if (obj[0x63] == 0) {
                return 0;
            }
            *(s32 *) (elem + 0x108C) = *(s32 *) (obj + 0x5C);
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80203830/func_802039B0.s")

