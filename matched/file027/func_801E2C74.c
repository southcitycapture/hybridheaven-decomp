#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
s32 func_801E2C74(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x014FB180) != 0) {
        func_8038BD50((-4.19999981f), 8.0f, 0xC1B26666);
        D_8038BD88(23.2000008f, 13.5f, 0xC1CF3333);
        return 0x26;
    }
    return 0x25;
}
