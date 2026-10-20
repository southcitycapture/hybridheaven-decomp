#include "context.h"

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f64 D_80252628;
extern f64 D_80252630;
extern f64 D_80252638;
extern f64 D_80252640;
extern f32 D_80252648;
extern f32 D_8025264C;
extern f64 D_80252650;
extern f64 D_80252658;
extern f64 D_80252660;
extern f64 D_80252668;
extern f64 D_80252670;
extern f64 D_80252678;
extern f32 D_80252680;
extern f32 D_80252684;
extern f64 D_80252688;
extern f32 D_80252690;

void func_80242C38(arg0) u16 arg0; {
    u8 pad[8];
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    u16 temp_a0;
    s32 temp_s0;

    temp_a0 = arg0;
    if (temp_a0 >= 0x12D) {
        if (!(temp_a0 & 7)) {
            sp68 = func_8012C6B4(0x3E8);
            sp6C = func_8012C6B4(0x3E8);
            sp70 = func_8012C6B4(0x3E8);
            sp74 = func_8012C6B4(0x14);
            temp_s0 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252628), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252630), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xDC, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252638), 0, 0);
            temp_s0 = func_8012C6B4(0x3E8);
            func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + D_80252640), D_80252648, (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, D_8025264C, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
            sp68 = func_8012C6B4(0x3E8);
            sp6C = func_8012C6B4(0x3E8);
            sp70 = func_8012C6B4(0x3E8);
            sp74 = func_8012C6B4(0x14);
            temp_s0 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252650), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252658), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252660), 1, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0) && !(temp_a0 & 3)) {
        sp68 = func_8012C6B4(0x3E8);
        sp6C = func_8012C6B4(0x3E8);
        sp70 = func_8012C6B4(0x3E8);
        sp74 = func_8012C6B4(0x14);
        temp_s0 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252668), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252670), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xB4, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + D_80252678), D_80252680, (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, D_80252684, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
        sp74 = func_8012C6B4(0x3E8);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp74 - 0x1F4) / 10.0) + D_80252688), D_80252690, (f32) ((f64) (temp_s0 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xFF, -1, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0xA, 0);
    }
}
