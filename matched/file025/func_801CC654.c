#include "common.h"

typedef struct func_801CC654_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
} func_801CC654_Struct;

extern s32 D_801DAAFC;
extern func_801CC654_Struct D_801E07A0[];

s32 func_801CC654(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    func_801CC654_Struct *temp_v1;

    temp_v1 = &D_801E07A0[D_801DAAFC];
    temp_v1->unk0 = arg0;
    temp_v1->unk4 = arg1;
    temp_v1->unk8 = arg2;
    temp_v1->unkC = arg3;
    temp_v1->unk10 = arg4;
    temp_v1->unk14 = arg5;
    temp_v1->unk18 = arg6;
    temp_v1->unk1C = arg7;
    temp_v1->unk20 = arg8;
    temp_v1->unk24 = arg9;
    temp_v1->unk28 = arg10;
    temp_v1->unk2C = arg11;
    temp_v1->unk30 = 1;
    temp_v1->unk34 = 0;
    temp_v1->unk38 = 0;
    temp_v1->unk3C = -1;
    temp_v1->unk40 = 0;
    return D_801DAAFC += 1;
}
