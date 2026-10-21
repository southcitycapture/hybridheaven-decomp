#include "context.h"

extern f64 D_80389D80;
extern f64 D_80389D88;
extern f32 D_80389D90;
extern f64 D_80389D98;
extern f64 D_80389DA0;

typedef struct func_80387230_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80387230_Struct;

void func_80387230(func_80387230_Struct *arg0, s32 arg1) {
    s32 sp84;
    u8 pad[12];
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;

    sp84 = arg0->unk3C++;
    if (!(sp84 % 2)) {
        sp64 = func_8012C6B4(0x3E8);
        sp68 = func_8012C6B4(0x3E8);
        sp6C = func_8012C6B4(0x3E8);
        sp70 = func_8012C6B4(0x28);
        sp74 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp64 - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp68 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp6C - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp70 + 0x8E, 0, 0x94, sp74, 0, 0xB4, -4, (f32) (((f64) func_8012C6B4(0x14) / D_80389D80) + D_80389D88), 0xD, 0);
    }
    if (!(sp84 % 4)) {
        sp64 = func_8012C6B4(0x320);
        sp68 = func_8012C6B4(0x320);
        sp6C = func_8012C6B4(0x320);
        sp70 = func_8012C6B4(0x28);
        sp74 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp64 - 0x190) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp68 - 0x190) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp6C - 0x190) / 100.0) + (f64) arg0->unk9C), 0.0f, D_80389D90, 0.0f, 0.0f, 0xFF, sp70 + 0x8E, 0, 0x94, sp74, 0, 0xB4, -4, (f32) (((f64) func_8012C6B4(0x28) / D_80389D98) + D_80389DA0), 0xD, 0);
    }
    if (sp84 >= 5) {
        func_80005700(arg0);
    }
}
