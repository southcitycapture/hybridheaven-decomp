#include "context.h"

extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);
extern f64 D_80389CA8;
extern f64 D_80389CB0;
extern f64 D_80389CB8;
extern f64 D_80389CC0;

typedef struct func_80385D08_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80385D08_Struct;

void func_80385D08(func_80385D08_Struct *arg0, s32 arg1) {
    s32 sp8C;
    u8 pad[8];
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp8C = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    sp6C = func_8012C6B4(0x3E8);
    sp70 = func_8012C6B4(0x3E8);
    sp74 = func_8012C6B4(0x3E8);
    sp78 = func_8012C6B4(0x3C);
    sp7C = func_8012C6B4(0x28);
    sp80 = func_8012C6B4(0x28);
    func_80129FB8((f32) (((f64) (sp6C - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, sp78 + 0x14, sp7C + 0xD7, sp80 + 0x76, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x28) / D_80389CA8) + D_80389CB0), 0x10, 0);
    if (!(sp8C % 2)) {
        sp70 = func_8012C6B4(0x3E8);
        sp74 = func_8012C6B4(0x3E8);
        sp78 = func_8012C6B4(0x3E8);
        sp7C = func_8012C6B4(0x28);
        sp80 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp70 - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp74 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp78 - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp7C + 0x8E, 0, 0x94, sp80, 0, 0x78, -4, (f32) (((f64) func_8012C6B4(0x14) / D_80389CB8) + D_80389CC0), 5, 0);
    }
    if (!(sp8C % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x15);
    }
    if (sp8C == 0) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (sp8C == 0xA) {
        func_80005700(arg0);
    }
}
