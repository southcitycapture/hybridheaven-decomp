#include "context.h"

struct func_801300B0_Struct {
    u8 pad0[0x112C];
    s32 unk112C;
    f32 unk1130;
    u8 pad1[0x4];
    s32 unk1138;
    u8 pad2[0x8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
};

void func_801300B0(f32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4) {
    struct func_801300B0_Struct *obj = (struct func_801300B0_Struct *) D_801BBBF0;

    obj->unk112C = 1;
    obj->unk1130 = arg0;
    obj->unk1138 = arg2;
    obj->unk1144 = arg3;
    obj->unk1148 = arg4;
    obj->unk114C = 0.0f;
}
