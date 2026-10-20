#include "context.h"

typedef struct func_80150F7C_StructVec {
    s32 x;
    s32 y;
    s32 z;
} func_80150F7C_StructVec;

typedef struct func_80150F7C_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x91 - 0x60];
    u8 unk91;
    u8 pad2[2];
    u16 unk94;
    u8 pad3[2];
    func_80150F7C_StructVec unk98;
} func_80150F7C_Struct;

extern s32 func_80011140(s32, s32, func_80150F7C_StructVec, s32);

s32 func_80150F7C(func_80150F7C_Struct *arg0, s32 arg1) {
    if (func_80011140(arg1, arg0->unk5C, arg0->unk98, arg0->unk94) != 0) {
        arg0->unk91 = 0;
        return 0;
    }
    return 1;
}
