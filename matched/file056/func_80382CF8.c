#include "common.h"
extern void func_80005700();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
s32 func_80380F94(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);


extern f32 D_80389B3C;
extern f32 D_80389B40;
extern f32 D_80389B44;
extern f32 D_80389B48;
extern f32 D_80389B4C;

struct func_80382CF8_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80382CF8(struct func_80382CF8_Struct *arg0, s32 arg1) {
    s32 var_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v0;

    temp_v0 = arg0->unk3C++;
    temp_s1 = func_8012C6B4(0x3E8);
    temp_s3 = func_8012C6B4(0x320);
    temp_v1 = func_8012C6B4(0x3E8);
    func_80129FB8((f32) (((f64) (temp_s1 - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (temp_s3 - 0x190) / 100.0) + (f64) (arg0->unk98 + 1.0f)), (f32) (((f64) (temp_v1 - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0x1E, 0xC8, 0x64, 0, 0x46, -4, D_80389B3C, 0xB, 0);
    if (temp_v0 == 0) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
        func_80129FB8(arg0->unk94, arg0->unk98 + 6.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x84, 0, 0x94, 0x14, 0, 0xA0, -5, D_80389B40, 0xE, 0);
    }
    if (temp_v0 == 2) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 9.0f, arg0->unk9C, 0.0f, D_80389B44, 0.0f, 0.0f, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0xF0, -2, D_80389B48, 0xA, 0);
    }
    if ((s32) temp_v0 >= 4) {
        f32 effect_scale = D_80389B4C;
        var_s0 = 0;
        do {
            func_80129FB8(arg0->unk94, arg0->unk98 + 1.0f, arg0->unk9C, (f32) ((f64) func_8001EAD0(var_s0) * 0.5), 0.0f, (f32) ((f64) func_8001EB64(var_s0) * 0.5), 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -3, effect_scale, 0xC, 0);
            var_s0 += 0x2AA;
        } while (var_s0 != 0x22A2);
        func_80005700(arg0);
    }
}
