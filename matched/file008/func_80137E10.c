void func_801381C4(int arg0, int arg1);

#include "context.h"

extern f64 D_8018DCC0;
extern f64 D_8018DCC8;
extern f64 D_8018DCD0;
extern f64 D_8018DCD8;

typedef struct func_80137E10_Struct {
    u8 pad0[0x38];
    func_80137180_StructInner *unk38;
    u8 pad1[0x94 - 0x3C];
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
} func_80137E10_Struct;

void func_80137E10(func_80137E10_Struct *arg0, s32 arg1) {
    s32 sp7C;
    s32 pad;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 v;

    arg0->unk9E++;
    if (!(arg0->unk9E % 2)) {
        arg0->unk9C = arg0->unk9C - 1;
        v = func_8012C6B4(0x7B) & 3;
        if (v == 0) goto case0;
        if (v == 1) goto case1;
        if (v == 2) goto case2;
        if (v != 3) goto common;
        if (1) goto case3;
    case0:
        arg0->unk94 = (f32) ((f64) arg0->unk94 + D_8018DCC0);
        arg0->unk98 = (f32) ((f64) arg0->unk98 + D_8018DCC8);
        sp6C = func_8012C6B4(0x14);
        sp70 = func_8012C6B4(0x14);
        sp74 = func_8012C6B4(0x14);
        func_80129FB8(((f32) sp6C + arg0->unk94) - 10.0f, (f32) (((f64) sp70 + 20.0) - 10.0), ((f32) sp74 + arg0->unk98) - 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x80, 8, (f32) ((f64) (f32) func_8012C6B4(0xF) / 20.0), 0xA, 0);
        return;
    case1:
        sp7C = 0xB;
        if (1) goto common;
    case2:
        sp7C = 0xC;
        if (1) goto common;
    case3:
        sp7C = 0xD;
        if (1) goto common;
    common:
        arg0->unk94 = (f32) ((f64) arg0->unk94 + D_8018DCD0);
        arg0->unk98 = (f32) ((f64) arg0->unk98 + D_8018DCD8);
        sp5C = func_8012C6B4(0x14);
        sp60 = func_8012C6B4(0x14);
        sp64 = func_8012C6B4(0x14);
        sp68 = func_8012C6B4(0x80);
        sp6C = func_8012C6B4(0x1F);
        sp70 = func_8012C6B4(0x1F);
        sp74 = func_8012C6B4(0x1F);
        func_80129FB8(((f32) sp5C + arg0->unk94) - 10.0f, (f32) (((f64) sp60 + 20.0) - 10.0), ((f32) sp64 + arg0->unk98) - 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, sp68, sp6C + 0xE0, sp70, sp74, 0xFF, 8, (f32) ((f64) (f32) func_8012C6B4(0xF) / 40.0), sp7C, 0);
    }
    if (func_80133A24(arg0->unk38->unk10 >> 0x10) == 0) {
        func_800058DC(arg0, func_801381C4);
    }
}
