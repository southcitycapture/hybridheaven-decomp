#include "context.h"

typedef struct func_80150EE4_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_80150EE4_Vec;

typedef struct func_80150EE4_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    u8 unk90;
    u8 unk91;
    u8 pad2[0x98 - 0x92];
    func_80150EE4_Vec unk98;
} func_80150EE4_Struct;

s32 func_80010550(s32, s32);
extern s32 func_8013A1B4();

s32 func_80150EE4(func_80150EE4_Struct *arg0, s32 arg1) {
    if (arg0->unk90 & 2) {
        func_8013A1B4(arg1, arg0->unk98, 0xFFFFFF);
        arg0->unk90 = (u8) (arg0->unk90 & 0xFFFD);
    }
    if (func_80010550(arg1, arg0->unk5C) != 0) {
        arg0->unk91 = 0;
        return 0;
    }
    return 1;
}
