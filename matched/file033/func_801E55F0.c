#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);

s32 func_801E55F0(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        D_801F2CD8 = 0;
        return 0xC;
    }
    return 0xB;
}
