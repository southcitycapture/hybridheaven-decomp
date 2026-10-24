#include "context.h"

typedef struct func_80228E5C_Struct {
    u8 pad0[0xA4];
    u8 unkA4;
} func_80228E5C_Struct;

typedef struct func_80228E5C_StructArg1 {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
} func_80228E5C_StructArg1;

f32 func_8001EAD0(s32);
f32 func_8001EB64(s32);
extern s16 D_801BBE22;
extern s32 D_80228C20(func_80228C20_StructArg *);

void func_80228E5C(arg0, arg1, arg2)
func_80228E5C_Struct *arg0;
func_80228E5C_StructArg1 *arg1;
u8 arg2;
{
    s16 sp1E;
    s16 a3;
    s32 v0;

    a3 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    v0 = arg0->unkA4;
    if (v0 < arg2) {
        sp1E = D_80228C20((func_80228C20_StructArg *)arg0) + a3 + 0x1000;
        sp1E = sp1E & 0x1FFF;
        arg1->unk6 = -func_8001EB64(sp1E) * 40.0f;
        arg1->unk8 = func_8001EAD0(sp1E) * 40.0f;
        return;
    }
    if ((v0 < arg2) || (v0 >= arg2 * 3)) {
        if (v0 < arg2 * 4) {
            sp1E = D_80228C20((func_80228C20_StructArg *)arg0) + a3;
            sp1E = sp1E & 0x1FFF;
            arg1->unk6 = -func_8001EB64(sp1E) * 40.0f;
            arg1->unk8 = func_8001EAD0(sp1E) * 40.0f;
            return;
        }
        arg0->unkA4 = 0;
    }
}
