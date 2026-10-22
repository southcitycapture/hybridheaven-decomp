#include "context.h"

extern s32 D_80228C20(func_80228C20_StructArg *);

typedef struct func_802290C8_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
} func_802290C8_Struct;
typedef struct func_802290C8_StructOut {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
} func_802290C8_StructOut;
typedef struct func_802290C8_StructG {
    u8 pad0[0x232];
    s16 unk232;
    u8 pad1[0xB94 - 0x234];
    f32 unkB94;
} func_802290C8_StructG;

void func_802290C8(func_802290C8_Struct *arg0, func_802290C8_StructOut *arg1, u8 arg2, f32 arg3) {
    s16 a0;
    s16 a3;
    s16 v1;

    a3 = (s16)(0x2800 - ((func_802290C8_StructG *)&D_801BBBF0)->unk232) & 0x1FFF;
    if (((func_802290C8_StructG *)&D_801BBBF0)->unkB94 < arg3) {
        v1 = 0x1000;
    } else {
        v1 = 0;
    }
    if (arg0->unk9C & arg2) {
        a0 = (s16)(D_80228C20((func_80228C20_StructArg *)arg0) + v1 + a3 + 0x800) & 0x1FFF;
    } else {
        a0 = (s16)(D_80228C20((func_80228C20_StructArg *)arg0) + v1 + a3 - 0x800) & 0x1FFF;
    }
    arg1->unk6 = -func_8001EB64(a0) * 40.0f;
    arg1->unk8 = func_8001EAD0(a0) * 40.0f;
}
