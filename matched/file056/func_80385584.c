#include "common.h"
extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);


extern f32 D_80389C70;
extern f32 D_80389C74;
extern f64 D_80389C78;
extern f64 D_80389C80;

struct func_80385584_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80385584(struct func_80385584_Struct *arg0, s32 arg1) {
    s32 sp84;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;
    s32 random;

    var_s3 = 0;
    sp84 = (s32) arg0->unk3C++;
    if (sp84 == 0) {
        do {
            temp_s0 = func_8012C6B4(0xC8);
            temp_s1 = func_8012C6B4(0xC8);
            random = func_8012C6B4(0xC8);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) ((f64) (temp_s0 - 0x64) / 100.0), (f32) ((f64) (temp_s1 - 0x32) / 100.0), (f32) -((f64) (random - 0x64) / 100.0), -0.02f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -0xE, 0.005f, 0x15, 0);
            temp_s0 = func_8012C6B4(0xC8);
            temp_s1 = func_8012C6B4(0xC8);
            random = func_8012C6B4(0xC8);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) ((f64) (temp_s0 - 0x64) / 100.0), (f32) ((f64) (temp_s1 - 0x32) / 100.0), (f32) -((f64) (random - 0x64) / 100.0), -0.02f, 0, 0xFF, 0, 0, 0x40, 0, 0xDC, -0xE, 0.005f, 0x15, 0);
            var_s3 += 1;
        } while (var_s3 != 3);
    }
    if (!(sp84 % 2)) {
        var_s3 = func_8012C6B4(0x190);
        temp_s0 = func_8012C6B4(0x190);
        temp_s1 = func_8012C6B4(0x190);
        random = func_8012C6B4(0x14);
        func_80129FB8((f32) (((f64) (var_s3 - 0xC8) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (temp_s0 - 0xC8) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (temp_s1 - 0xC8) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0x78, -4, (f32) (((f64) random / D_80389C78) + D_80389C80), 0, 0);
    }
    if (sp84 == 0xA) {
        func_80005700(arg0);
    }
}
