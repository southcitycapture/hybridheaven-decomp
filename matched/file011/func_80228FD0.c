#include "context.h"

typedef struct func_80228FD0_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
} func_80228FD0_Struct;

typedef struct func_80228FD0_StructArg1 {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
} func_80228FD0_StructArg1;

f32 func_8001EAD0(s32);                             /* extern */
f32 func_8001EB64(s32);                             /* extern */
s32 func_80228C20();                                /* extern */
extern s16 D_801BBE22;

void func_80228FD0(func_80228FD0_Struct *arg0, func_80228FD0_StructArg1 *arg1, u8 arg2) {
    s16 sp1E;
    s16 sp1C;

    arg2 = arg2 & 0xFF;
    sp1C = (s16) (0x2800 - D_801BBE22) & 0x1FFF;
    if (arg0->unk9C & arg2) {
        sp1E = (s16) (func_80228C20() + sp1C + 0x800) & 0x1FFF;
    } else {
        sp1E = (s16) ((func_80228C20() + sp1C) - 0x800) & 0x1FFF;
    }
    arg1->unk6 = (s16) (s32) (-func_8001EB64(sp1E) * 40.0f);
    arg1->unk8 = (s16) (s32) (func_8001EAD0(sp1E) * 40.0f);
}
