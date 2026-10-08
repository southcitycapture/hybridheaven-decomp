#include "common.h"

extern void func_80127430(f32, f32, s32, s32, f32, f32);

typedef struct func_80243C6C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
} func_80243C6C_Struct;

void func_80243C6C(func_80243C6C_Struct *arg0, s32 arg1) {
    if (((s32) arg0->unk3C % 180) == 0) {
        func_80127430(arg0->unk90, arg0->unk94, arg0->unk98, 0x660, 1.5f, 1.0f);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}
