#include "common.h"

void *func_801BF6B0(s32 arg0);
void func_801C8284(void);
void func_801C82A4(f32 a0, f32 a1, s32 a2, s32 a3, f32 f14, f32 f16, f32 f18, s32 arg7);
extern f32 D_801EDD44;
extern f32 D_801EDD48;

s32 func_801E6500(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0x11) {
        func_801C8284();
        func_801C82A4(D_801EDD44, D_801EDD48, 0x41F1999A, 0xC216CCCD, 10.5f, 3.0f, 5.0f, 0x1E);
        return 7;
    }
    return 6;
}
