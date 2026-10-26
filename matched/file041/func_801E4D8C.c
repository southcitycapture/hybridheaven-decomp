#include "common.h"
extern u8 D_801E8960[];
extern u8 D_801E89D0[];
extern s32 func_801C0B8C(u64);
extern void func_801C7BE4();


struct func_801E4D8C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    f32 unk64;
    f32 unk68;
};

s32 func_801E4D8C(s32 arg0, s32 arg1) {
    struct func_801E4D8C_Struct *first;
    struct func_801E4D8C_Struct *second;

    if (func_801C0B8C(0x989680) != 0) {
        func_801C7BE4();
        first = (struct func_801E4D8C_Struct *)D_801E8960;
        second = (struct func_801E4D8C_Struct *)D_801E89D0;
        first->unk1C = -80.0f;
        first->unk40 = -91.0f;
        first->unk28 = 19.0;
        first->unk64 = -56.0f;
        second->unk1C = -85.0f;
        first->unk48 = 12.0f;
        first->unk4C = 12.0f;
        first->unk50 = 12.0f;
        second->unk48 = 12.0f;
        second->unk4C = 12.0f;
        second->unk50 = 12.0f;
        first->unk10 = 359.0f;
        first->unk34 = 359.0f;
        first->unk54 = 359.0f;
        first->unk58 = 359.0f;
        first->unk5C = 359.0f;
        first->unk18 = 0.0f;
        first->unk20 = 0.0f;
        first->unkC = 0.0f;
        first->unk14 = 0.0f;
        first->unk3C = 0.0f;
        first->unk44 = 0.0f;
        first->unk30 = 0.0f;
        first->unk38 = 0.0f;
        first->unk60 = 0.0f;
        first->unk68 = 0.0f;
        second->unk18 = 0.0f;
        second->unk20 = 0.0f;
        second->unkC = 0.0f;
        second->unk10 = 0.0f;
        second->unk14 = 0.0f;
        second->unk3C = 0.0f;
        second->unk44 = 0.0f;
        second->unk30 = 0.0f;
        second->unk38 = 0.0f;
        second->unk60 = 0.0f;
        second->unk68 = 0.0f;
        second->unk54 = 0.0f;
        second->unk58 = 0.0f;
        second->unk5C = 0.0f;
        first->unk0 = 20.0f;
        first->unk8 = 20.0f;
        second->unk0 = 20.0f;
        second->unk8 = 20.0f;
        first->unk24 = 22.0f;
        first->unk2C = 22.0f;
        second->unk24 = 22.0f;
        second->unk2C = 22.0f;
        first->unk4 = 18.0f;
        second->unk4 = 18.0f;
        second->unk40 = -82.0f;
        second->unk34 = 180.0f;
        second->unk28 = 19.0f;
        second->unk64 = -61.0f;
        return 10;
    }
    return 9;
}
