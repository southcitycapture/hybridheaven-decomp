#include "context.h"

typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);

void func_801F467C(s16 arg0, func_801F467C_Struct *arg1) {
    arg1->unk0 = 20.0f * func_8001EAD0(arg0);
    arg1->unk8 = 20.0f * func_8001EB64(arg0);
    arg1->unk4 = 0.0f;
}
