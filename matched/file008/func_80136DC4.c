#include "context.h"

typedef struct func_80136DC4_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    f32 unk2A4;
    f32 unk2A8;
    u8 pad1[0xC89];
    u8 unkF35;
    u8 pad2[0x12];
    u8 unkF48;
} func_80136DC4_Struct;

extern void func_80005700(s32 arg0);

void func_80136DC4(s32 arg0, s32 arg1) {
    func_80136DC4_Struct *ptr = (func_80136DC4_Struct *)&D_801BBBF0;

    ptr->unk29C = ptr->unk2A4;
    ptr->unk2A0 = ptr->unk2A8;
    ptr->unkF35 = ptr->unkF48;
    func_80005700(arg0);
}
