#include "common.h"
extern s32 D_801DAAFC;
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
extern func_801CC654_Struct D_801E07A0[];


func_801CC654_Struct D_801E07A0[10];

void func_801CCAB0(void) {
    s32 i;

    D_801DAAFC = 0;
    for (i = 0; i < 10; i++) {
        D_801E07A0[i].unk0 = 0;
        D_801E07A0[i].unk4 = 0;
        D_801E07A0[i].unk8 = 0;
        D_801E07A0[i].unkC = 0;
        D_801E07A0[i].unk10 = 0;
        D_801E07A0[i].unk14 = 0;
        D_801E07A0[i].unk18 = 0;
        D_801E07A0[i].unk1C = 0;
        D_801E07A0[i].unk20 = 0;
        D_801E07A0[i].unk24 = 0;
        D_801E07A0[i].unk28 = -1;
        D_801E07A0[i].unk2C = 0;
        D_801E07A0[i].unk30 = 0;
        D_801E07A0[i].unk34 = 0;
        D_801E07A0[i].unk38 = 0;
        D_801E07A0[i].unk3C = -1;
        D_801E07A0[i].unk40 = 0;
    }
}
