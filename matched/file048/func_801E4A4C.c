#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);
extern u8 func_801DAAF0[];
s32 func_8038D28C(s32 a);

s32 func_801E4A4C(s32 arg0, s32 arg1) {
    if (*(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0xC) < 60.0f) {
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x48) = 0;
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x49) = 0;
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x4A) = 0;
        func_801C1000(3, 2);
        func_8038D28C(0x208);
        return 8;
    }
    return 7;
}
