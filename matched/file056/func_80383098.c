#include "context.h"

extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f32 D_80389B50;
extern f32 D_80389B54;

struct func_80383098_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80383098(struct func_80383098_Struct *arg0, s32 arg1) {
    s32 sp64;
    u8 pad[4];
    s32 sp5C;

    sp64 = arg0->unk3C;
    arg0->unk3C++;
    sp5C = func_8012C6B4(0xC8);
    func_80129FB8((f32) (((f64) (sp5C - 0x64) / 100.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, D_80389B50, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -4, D_80389B54, 4, 0);
    if (sp64 >= 0xA) {
        func_80005700(arg0);
    }
}
