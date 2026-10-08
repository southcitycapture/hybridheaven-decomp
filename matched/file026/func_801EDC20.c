#include "context.h"

extern void func_801CFD34(s32 arg0);
extern s32 D_801FB5A4;

s32 func_801EDC20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x800;
        func_801CFD34(1);
        func_801CC470(2, 0x01B80009, 0, 0, 6.0f);
        D_801FB5A4 = 0;
        return 4;
    }
    return 3;
}
