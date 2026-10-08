#include "context.h"

extern void func_801C4028(s32 a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6, f32 a7, f32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15);
extern void func_8038C4D8(s32 a0, s32 a1);
extern void func_8038D28C(s32 a0);

s32 func_801E43F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF9020) != 0) {
        func_8038D28C(0x24A);
        func_801C4028(1, 41.0f, 167.0f, 32.0f, 0, 0xF5, 0x23, 8.0f, 8.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x20);
        func_8038C4D8(2, 0);
        return 2;
    }
    return 1;
}
