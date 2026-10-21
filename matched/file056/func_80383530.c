#include "context.h"
struct func_80383530_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f32 D_80389B80;
extern f32 D_80389B84;
extern f32 D_80389B88;

void func_80383530(struct func_80383530_Struct *arg0, s32 arg1) {
    s32 sp6C;
    u8 pad[8];
    s32 sp60;
    s32 sp5C;

    sp6C = arg0->unk3C++;
    sp5C = func_8012C6B4(0x578);
    sp60 = func_8012C6B4(0x578);
    func_80129FB8((f32) (((f64) (sp5C - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp60 - 0x2BC) / 100.0) + (f64) (arg0->unk98 + 7.0f)), (f32) (((f64) (func_8012C6B4(0x578) - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x84, 0, 0x94, 0x14, 0, 0x64, -4, D_80389B80, 4, 0);
    if (sp6C == 0) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 10.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x84, 0, 0x94, 0x14, 0, 0xF0, -4, D_80389B84, 3, 0);
        func_80129FB8(arg0->unk94, arg0->unk98 + 15.0f, arg0->unk9C, 0.0f, D_80389B88, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xC8, -2, 0.5f, 2, 0);
    }
    if (sp6C >= 5) {
        func_80005700(arg0);
    }
}
