#include "common.h"


extern func_801CC470_Struct D_801E0700[];
extern func_801CC470_Struct **D_801E0778[];

s32 func_801CC4D8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, f32 arg4) {
    func_801CC470_Struct *temp_v1;

    temp_v1 = &D_801E0700[arg0];
    temp_v1->unk0 = arg1;
    temp_v1->unk4 = arg2;
    temp_v1->unk6 = arg3;
    temp_v1->unk8 = arg4;
    *D_801E0778[arg0] = temp_v1;
    return 1;
}
