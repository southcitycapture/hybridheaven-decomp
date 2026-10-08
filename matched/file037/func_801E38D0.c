#include "common.h"

void func_801C0D04(s32 a, s32 b);
void func_8038D28C(s32 a);
extern void *D_8038D8D0;
extern f32 D_801E69B0;

s32 func_801E38D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_8038D28C(0x24B);
        func_801C0D04(3, 2);
        D_801E69B0 = *(f32 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x8) + 0x30) + 0x8);
        return 2;
    }
    return 1;
}
