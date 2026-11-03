#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


extern f64 D_8023FB20;

struct func_8023011C_Struct {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 pad31[0x2F4 - 0x31];
    f32 unk2F4;
    u8 unk2F8;
    u8 pad2F9[0x300 - 0x2F9];
    u16 unk300;
    u8 pad302[0x44C - 0x302];
};

void func_8023011C(u16 arg0, struct func_8023011C_Struct *arg1) {
    u8 *v;
    s32 a;

    if (arg1 ==(struct func_8023011C_Struct *)D_801BBBF0 + 1) {
        v = D_801BC3D8;
    } else {
        v = D_801BC03C;
    }
    a = arg0;
    if (arg1->unk2 - a <= 0) {
        arg1->unk30 = (arg1->unk30 & 0xFF9F) | 0x20;
    }
    if ((f64)((struct func_8023011C_Struct *)v)->unk2F4 == 1.0 && ((struct func_8023011C_Struct *)v)->unk300 >= 0x64) {
        if ((f64)(u32)arg0 > (f64)arg1->unk0 * D_8023FB20) {
            arg1->unk2F8 = 3;
            return;
        }
    }
    if (a < arg1->unk0 * 15 / 100) {
        arg1->unk2F8 = 1;
        return;
    }
    if (a < arg1->unk0 / 4) {
        arg1->unk2F8 = 2;
        return;
    }
    if (a < arg1->unk0 * 35 / 100) {
        arg1->unk2F8 = 3;
        return;
    }
    arg1->unk2F8 = 4;
}
