#include "context.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern f32 D_801FD40C;
extern f32 D_801FD410;

#define FUNC_801F9354_NODE (*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)D_801DAB14 + 0x8) + 0x8) + 0x24))

s32 func_801F9354(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x4) = D_801FD40C;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x8) = 0.0f;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0xC) = D_801FD410;
        *(s16 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x12) = 0x1B60;
        func_801CC470(1, 0x0348008B, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}
