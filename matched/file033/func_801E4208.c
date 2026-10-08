#include "context.h"

extern f32 D_801F47A8;

s32 func_801E4208(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0xBA283F) != 0) {
        temp = D_801F47A8;
        func_801C5414(1, 0xC0800000, 0x40E00000, 0xC21C0000, 0, 0x154, 0, temp, temp, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xB;
    }
    return 0xA;
}
