#include "context.h"

extern f64 D_80389C38;
extern f64 D_80389C40;
extern f64 D_80389C48;
extern f64 D_80389C50;

struct func_80384E5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80384E5C(struct func_80384E5C_Struct *arg0, s32 arg1) {
    s32 sp7C;
    u8 pad[4];
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp7C = arg0->unk3C++;
    if (sp7C == 0) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0x78, -6, (f32) (((f64) func_8012C6B4(0x28) / D_80389C38) + D_80389C40), 1, 0);
    }
    if (sp7C == 1) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x64, -6, (f32) (((f64) func_8012C6B4(0x28) / D_80389C48) + D_80389C50), 5, 0);
        func_80005700(arg0);
    }
}
