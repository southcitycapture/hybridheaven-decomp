#include "context.h"

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
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
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + (245.0)), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + (-7.3e+02)), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xDC, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + (1.2)), 0, 0);
            temp_s0 = func_8012C6B4(0x3E8);
            func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + (245.0)), (-7.3e+02f), (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, (0.6f), 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
            sp68 = func_8012C6B4(0x3E8);
            sp6C = func_8012C6B4(0x3E8);
            sp70 = func_8012C6B4(0x3E8);
            sp74 = func_8012C6B4(0x14);
            temp_s0 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + (245.0)), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + (-7.3e+02)), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + (1.2)), 1, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0) && !(temp_a0 & 3)) {
        sp68 = func_8012C6B4(0x3E8);
        sp6C = func_8012C6B4(0x3E8);
        sp70 = func_8012C6B4(0x3E8);
        sp74 = func_8012C6B4(0x14);
        temp_s0 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + (245.0)), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + (-7.3e+02)), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xB4, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + (245.0)), (-7.3e+02f), (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, (0.6f), 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
        sp74 = func_8012C6B4(0x3E8);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp74 - 0x1F4) / 10.0) + (245.0)), (-7.5e+02f), (f32) ((f64) (temp_s0 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xFF, -1, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0xA, 0);
    }
}
