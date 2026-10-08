#include "common.h"

extern void func_800058DC(void *, void *);
extern s32 func_8012C6B4(s32);
extern void func_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_801E343C;
extern void func_801CD1CC();

void func_801CD420(void *arg0, s32 arg1) {
    s32 pad;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    sp58 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x4);
    sp54 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x8);
    sp50 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0xC);
    func_801CE330(arg0, 0x16, sp58, sp54, sp50, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, func_8012C6B4(2) + 1, 0x18, D_801E343C, 1);
    func_800058DC(arg0, func_801CD1CC);
}
