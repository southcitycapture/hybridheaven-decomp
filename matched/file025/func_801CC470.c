#include "common.h"

typedef struct func_801CC470_Struct {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801CC470_Struct;

extern func_801CC470_Struct D_801E0660[];
extern func_801CC470_Struct **D_801E06D8[];

s32 func_801CC470(s32 arg0, s32 arg1, u16 arg2, u16 arg3, f32 arg4) {
    func_801CC470_Struct *temp_v1;

    temp_v1 = &D_801E0660[arg0];
    temp_v1->unk0 = arg1;
    temp_v1->unk4 = arg2;
    temp_v1->unk6 = arg3;
    temp_v1->unk8 = arg4;
    *D_801E06D8[arg0] = temp_v1;
    return 1;
}
