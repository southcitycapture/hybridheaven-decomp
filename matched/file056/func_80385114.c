#include "common.h"

extern void func_80005700();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);

struct func_80385114_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80385114(struct func_80385114_Struct *arg0, s32 arg1) {
    s32 spA4;
    f32 temp_fs3;
    f32 temp_fv0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_s0;

    spA4 = arg0->unk3C++;
    for (var_s0 = 0; var_s0 < 2; var_s0 += 1) {
        temp_s5 = func_8012C6B4(0x4B0);
        temp_s6 = func_8012C6B4(0x4B0);
        temp_s3 = func_8012C6B4(0x4B0);
        temp_s4 = func_8012C6B4(0x28);
        temp_s1 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (temp_s5 - 0x258) / 10.0) + (f64) arg0->unk94), (f32) (((f64) (temp_s6 - 0x258) / 10.0) + (f64) arg0->unk98), (f32) (((f64) (temp_s3 - 0x258) / 10.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, temp_s4 + 0x8E, 0, 0x94, temp_s1, 0, 0x78, -4, (f32) (((f64) func_8012C6B4(0x64) / 1000.0) + 0.3), 5, 0);
    }
    var_s0 = 0;
    if (spA4 == 2) {
        do {
            temp_fv0 = (f32) func_8012C6B4(0x2000);
            temp_fs3 = func_8001EAD0((s16) (s32) temp_fv0);
            func_80129FB8((f32) (((f64) temp_fs3 * 60.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) func_8001EB64((s16) (s32) temp_fv0) * 60.0) + (f64) arg0->unk9C), 0.0f, 0.6f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
            var_s0 += 1;
        } while (var_s0 != 5);
    }
    if ((spA4 % 2) <= 0U) {
        temp_s5 = func_8012C6B4(0x3E8);
        temp_s6 = func_8012C6B4(0x3E8);
        temp_s3 = func_8012C6B4(0x3E8);
        temp_s4 = func_8012C6B4(0x28);
        temp_s1 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (temp_s5 - 0x1F4) / 10.0) + (f64) arg0->unk94), (f32) (((f64) (temp_s6 - 0x1F4) / 10.0) + (f64) arg0->unk98), (f32) (((f64) (temp_s3 - 0x1F4) / 10.0) + (f64) arg0->unk9C), 0.0f, 0.2f, 0.0f, 0.0f, 0xFF, temp_s4 + 0x8E, 0, 0x94, temp_s1, 0, 0x8C, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 5, 0);
    }
    if (spA4 >= 8) {
        func_80005700(arg0);
    }
}
