#include "context.h"

struct func_8024174C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x44];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};
extern void func_80005700(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_8024EC08;
extern f64 D_8024EC10;
extern f32 D_8024EC18;
extern f32 D_8024EC1C;

void func_8024174C(struct func_8024174C_Struct *arg0, s32 arg1) {
    s32 sp74[1];
    s32 temp_v0;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;

    temp_v0 = arg0->unk3C;
    sp74[0] = temp_v0;
    arg0->unk3C = (u16) (temp_v0 + 1);
    if (!(sp74[0] % 2)) {
        sp5C = func_8012C6B4(0x32);
        sp60 = func_8012C6B4(0x32);
        sp64 = func_8012C6B4(0xC8);
        sp68 = func_8012C6B4(0x64);
        sp6C = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp5C - 0x19) / 10.0) + (f64) arg0->unk90), arg0->unk94, (f32) (((f64) (sp60 - 0x19) / 10.0) + (f64) arg0->unk98), (f32) ((f64) (sp64 - 0x64) / 100.0), (f32) (((f64) sp68 / 100.0) + 3.0), (f32) ((f64) (sp6C - 0x64) / 100.0), -0.5f, 0xFF, 0x82, 0, 0xFF, 0, 0, 0xFF, -8, (f32) (((f64) func_8012C6B4(0x32) / D_8024EC08) + D_8024EC10), 0xD, 0);
        func_80129FB8(arg0->unk90, arg0->unk94 + 6.0f, arg0->unk98, arg0->unk40, arg0->unk44, arg0->unk48, D_8024EC18, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xA0, -4, D_8024EC1C, 9, 0);
    }
    if (sp74[0] >= 8) {
        func_80005700(arg0);
    }
}
