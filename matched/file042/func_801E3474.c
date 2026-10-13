#include "common.h"






extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern f32 D_801E5058;
extern func_801E3474_Global func_801DAAF0;

s32 func_801E3474(s32 arg0, s32 arg1) {
    func_801E3474_Struct0 **pp;

    if (func_801C0B8C(0x4F587F) != 0) {
        pp = (func_801E3474_Struct0 **) &func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = D_801E5058;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = -7.0f;
        (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(0, 0x01680040, 0, 0, 5.0f);
        return 9;
    }
    return 8;
}
