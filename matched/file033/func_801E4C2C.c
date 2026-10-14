#include "context.h"

extern f32 D_801F47E4;
extern f32 D_801F47E8;
extern f32 D_801F47EC;
extern f32 D_801F47F0;

s32 func_801E4C2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A1A0) != 0) {
        func_801C5414(2, 0xC1000000, 0x41600000, 0xC21C0000, 0, 0x14F, 0, D_801F47E4, D_801F47E8, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        func_801C5414(2, 0xC1000000, 0x41000000, 0xC21C0000, 0, 0x14F, 0, D_801F47EC, D_801F47F0, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        return 9;
    }
    return 8;
}
