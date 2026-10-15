#include "common.h"






extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);
extern f32 D_801E8D38;
extern f32 D_801E8D3C;
extern func_801E64F4_Struct1 *D_801DAB14;

s32 func_801E64F4(s32 arg0, s32 arg1) {
    func_801E64F4_Struct4 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8D38;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = -1.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801E8D3C;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x03480080, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
