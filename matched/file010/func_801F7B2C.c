#include "context.h"

extern u8 func_801F7DB4[];

typedef struct func_801F7B2C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7B2C_Struct;

void func_801F7B2C(func_801F7B2C_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 sp26;
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_v0_3;
    s32 cond;

    sp26 = (u8) (u32) (((f64) (func_8001EB64(arg0->unk94) + 1.0f) * 0.5 * 60.0) + 50.0);
    sp27 = (u8) (u32) (((f64) (func_8001EB64((s16) (arg0->unk94 + 0x1000)) + 1.0f) * 0.5 * 50.0) + 30.0);
    func_80147AA8(0, 0x14, 0x14, sp26);
    func_80147AF0(0, sp27, 0, 0);
    temp_v0 = arg0->unk94;
    if (temp_v0 < 0) {
        arg0->unk94 = (s16) (temp_v0 + 0x200);
    } else {
        arg0->unk94 = (s16) (temp_v0 + 0x60);
    }
    temp_v0_2 = arg0->unk94;
    if (temp_v0_2 & 0x1000) {
        arg0->unk94 = (s16) ((temp_v0_2 & 0x1FFF) - 0x2000);
    } else {
        arg0->unk94 = (s16) (temp_v0_2 & 0x1FFF);
    }
    if (arg0->unk3C++ >= 0x67) {
        arg0->unk90 = -0x1000;
        arg0->unk92 = -0x1000;
        arg0->unk96 = 0;
        arg0->unk98 = -0x1000;
        arg0->unk9A = 0x43;
        func_800058DC(arg0, (s32) func_801F7DB4);
    }
}
