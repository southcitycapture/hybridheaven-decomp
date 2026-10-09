#include "context.h"
extern s32 D_801E9720;
s32 func_801C0B8C(u64 time);
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E44FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD72620) != 0) {
        func_801CC470(0, 0x03480066, 0, 0, 4.0f);
        D_801E9720 = 0;
        return 8;
    }
    return 7;
}
