#include "context.h"

extern struct func_801E58F0_StructA *D_801DAB14;

s32 func_801E5298(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0xC61;
        func_801CC470(0, 0x01900035, 0, 0x1000, 1.0f);
        return 0x22;
    }
    return 0x21;
}
