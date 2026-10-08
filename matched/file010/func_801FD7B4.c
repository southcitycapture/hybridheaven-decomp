#include "context.h"

struct func_801FD7B4_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
    u8 pad2[0xA0 - 0x9C];
    f32 unkA0;
};

extern s32 func_800058DC(void *, void (*)(void));
extern void func_80129FB8(f32, f32, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_801FC830(f32, f32, s32, s32, s32);
extern f32 D_8021922C;
extern void func_801FD884(void);

void func_801FD7B4(struct func_801FD7B4_Struct *arg0, s32 arg1) {
    f32 zero = 0.0f;

    func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, zero, zero, zero, zero, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xB4, -4, D_8021922C, 0x14, 0);
    func_801FC830(arg0->unk90, arg0->unk94, arg0->unk98, 0x43160000, 0x3A8);
    arg0->unk3C = 0;
    arg0->unkA0 = 0.0f;
    func_800058DC(arg0, func_801FD884);
}
