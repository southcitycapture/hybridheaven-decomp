#include "context.h"

struct func_80379498_Struct {
    s16 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
};

extern struct func_80379498_Struct D_8038A918;

void func_80379498(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 *p;
    f32 *q;
    p = &arg0;
    q = &arg3;
    arg0 &= 0xFF;
    D_8038A918.unk0 = arg0;
    D_8038A918.unk4 = arg1;
    D_8038A918.unk8 = arg2;
    D_8038A918.unkC = arg3;
    D_8038A918.unk10 = arg4;
    D_8038A918.unk14 = arg5;
}
