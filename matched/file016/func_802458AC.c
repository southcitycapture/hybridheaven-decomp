#include "context.h"

extern void func_80020718(s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_8024F0A0;
extern f64 D_8024F0A8;
extern f64 D_8024F0B0;

typedef struct func_802458AC_Struct {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad44[0x4D];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_802458AC_Struct;

s32 func_802458AC(func_802458AC_Struct *arg0, s32 arg1) {
    u8 pad[16];
    s32 sp5C;

    arg0->unk40 = (f32) ((f64) arg0->unk40 + D_8024F0A0);
    if ((D_801BBCD0->unk2C->unk4 + 60.0f) <= arg0->unk94) {
        func_80020718(0x65B);
        return 0;
    }
    sp5C = func_8012C6B4(0x32);
    func_80129FB8(arg0->unk94, arg0->unk98, (f32) (((f64) sp5C / 10.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x6E, 0x61, 0xA8, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x1E) / D_8024F0A8) + D_8024F0B0), 8, 0);
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 9.0f, 0x800, 1.0f, 1.0f, (u32) (func_801FD780(arg0->unk91) * 120.0f)) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 7);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x3E2);
        func_80020718(0x65B);
        return 0;
    }
    return 1;
}
