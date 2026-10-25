#define func_801FBC28 D_801FBC28
#include "context.h"
#undef func_801FBC28
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_801451C0(void *, s32);
extern s32 func_80146208(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80146894(s32, s32, u8 *, f32, f32, s32);
extern u8 B_801BEC68[];
extern u8 func_801FBDF4[];

void func_801FBC28(s32 arg0, s32 *arg1) {
    u8 s0;
    u8 sp4E;

    sp4E = 0;
    func_80116E80(0x100);
    func_80116E80(0x400);
    func_80116E80(0x800);
    func_80116E80(0x200);
    B_801BEC68[0xA] = sp4E;
    s0 = func_80146208(arg0, &sp4E, 0x26, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0);
    *(s16 *)(arg1[B_801BEC68[0xA]] + 0x28) = 0x800;
    func_801451C0((void *)arg1[B_801BEC68[0xA]], 0);
    B_801BEC68[0xB] = sp4E;
    s0 += func_80146894(arg0, 1, &sp4E, 42.0f, 35.0f, 0xB);
    B_801BEC68[0xC] = sp4E;
    s0 += func_80146208(arg0, &sp4E, 4, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2);
    *(s16 *)(arg1[B_801BEC68[0xC]] + 0x28) = 0x100;
    if (s0) {
        func_80005700(arg0);
        func_801170DC(0x400);
        func_801170DC(0x200);
        return;
    }
    func_800058DC(arg0, func_801FBDF4);
}
