#include "common.h"
extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);

struct func_80384AEC_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f32 D_80389C18;
extern f64 D_80389C28;
extern f64 D_80389C30;

/* -0.029999999329447746f / 0.003000000026077032f are placeholders for the rodata literals D_80389C20 / D_80389C1C (values unknown here) */
void func_80384AEC(struct func_80384AEC_Struct *arg0, s32 arg1) {
    s32 sp9C;
    s32 i;

    sp9C = arg0->unk3C++;
    if (sp9C == 0) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 2.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0, 0xFF, 0x80, 0, 0x78, -6, D_80389C18, 4, 0);
        for (i = 0; i < 0x20; i++) {
            func_80129FB8(arg0->unk94, arg0->unk98 + 2.0f, arg0->unk9C, (f32) ((f64) (func_8012C6B4(0x154) - 0xAA) / 100.0), (f32) ((f64) (func_8012C6B4(0x154) - 0xAA) / 100.0), (f32) -((f64) (func_8012C6B4(0x50) + 0x1E) / 100.0), -0.029999999329447746f, 0xFF, func_8012C6B4(0xBF) + 0x40, 0, func_8012C6B4(0x70), 0, 0, 0xB4, -0xC, 0.003000000026077032f, 0x15, 0);
        }
    }
    func_80129FB8((f32) (((f64) (func_8012C6B4(0x7D0) - 0x3E8) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (func_8012C6B4(0x7D0) - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (func_8012C6B4(0x7D0) - 0x3E8) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, func_8012C6B4(0xBF) + 0x40, 0, func_8012C6B4(0x70), 0, 0, 0x78, -6, (f32) (((f64) func_8012C6B4(0x78) / D_80389C28) + D_80389C30), func_8012C6B4(1), 0);
    if (sp9C >= 0xA) {
        func_80005700(arg0);
    }
}
