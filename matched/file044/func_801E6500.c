#include "common.h"

extern void *func_801BF6B0();
extern void func_801C8284(void);
extern void func_801C82A4(f32, f32, s32, s32, f32, f32, f32, s32);
s32 func_801E6500(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0x11) {
        func_801C8284();
        func_801C82A4(50.2000008f, (-47.7000008f), 0x41F1999A, 0xC216CCCD, 10.5f, 3.0f, 5.0f, 0x1E);
        return 7;
    }
    return 6;
}
