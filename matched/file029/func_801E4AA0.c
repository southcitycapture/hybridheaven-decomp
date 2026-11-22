#include "common.h"

extern void *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
s32 func_801E4AA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x4) = 4.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x8) = 0.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0xC) = 0.100000001f;
        func_801CC470(2, 0x03200030, 0, 0, 1.0f);
        return 0xD;
    }
    return 0xC;
}
