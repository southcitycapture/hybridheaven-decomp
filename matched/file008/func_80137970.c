#include "context.h"

typedef struct func_80137970_StructIn {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[4];
    u32 unk10;
} func_80137970_StructIn;
typedef struct func_80137970_Struct {
    u8 pad0[0x38];
    func_80137970_StructIn *unk38;
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    f32 unk90;
} func_80137970_Struct;
typedef struct func_80137970_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80137970_StructB;
typedef struct func_80137970_StructA {
    u8 pad0[0x2C];
    func_80137970_StructB *unk2C;
} func_80137970_StructA;

extern s32 func_8001EF38(f32, f32);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_8018DC88;
extern f64 D_8018DC90;
extern f64 D_8018DC98;
extern func_80137970_StructA *D_801BBCD0;

void func_80137970(func_80137970_Struct *arg0, s32 arg1) {
    f32 sp74;
    s16 sp72;

    func_801FCA4C((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, 0x5E7);
    if (func_801FD644((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, arg0->unk90,
            func_8001EF38((f32)arg0->unk38->unk6 / 10.0 - D_801BBCD0->unk2C->unk4, (f32)arg0->unk38->unkA / 10.0 - D_801BBCD0->unk2C->unkC), 1.0f, 1.0f, 0x14) != 0) {
        func_80380F94((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 0.0f, 0.0f, 0.0f, 2);
    }
    if ((arg0->unk38->unk10 >> 24) != 2) {
        if (!(arg0->unk3C++ & 1)) {
            sp72 = func_8012C6B4(0x2000);
            sp74 = func_8012C6B4(0x3E8) / 100.0;
            arg1 = sp72;
            func_80129FB8(func_8001EAD0(arg1) * sp74 + (f32)arg0->unk38->unk6 / 10.0, arg0->unk90 + (f32)arg0->unk38->unk8 / 10.0 + 4.0,
                func_8001EB64(arg1) * sp74 + (f32)arg0->unk38->unkA / 10.0, 0.0f, D_8018DC88, 0.0f, 0.0f, 0x38, 0x26, 0, 0x32, 0x32, 0x32, 0xB4, -4,
                func_8012C6B4(0x46) / D_8018DC90 + D_8018DC98, 0xB, 0);
        }
    }
}
