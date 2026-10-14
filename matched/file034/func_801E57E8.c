#include "context.h"

extern f32 D_801E9670;
extern f32 D_801E9674;
extern f32 D_801E9678;
s32 func_801CF418(s32 a0, s32 a1);

typedef struct func_801E57E8_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E57E8_Struct;

s32 func_801E57E8(s32 arg0, s32 arg1) {
    func_801E57E8_Struct *temp_v0;
    func_801E57E8_Struct *temp_v0_2;

    temp_v0 = (func_801E57E8_Struct *) *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C);
    if ((temp_v0->unk4 < D_801E9670) || (D_801E9674 < temp_v0->unkC)) {
        func_801CC4D8(1, 0x0410000F, 0, 0x1000, 6.0f);
        return 5;
    }
    if ((func_801CF418(0x01B8001B, 0xC) != 0) || (func_801CF418(0x01B8001B, 0x1E) != 0)) {
        temp_v0_2 = (func_801E57E8_Struct *) *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(temp_v0_2->unk4, temp_v0_2->unk8, *(s32 *)&temp_v0_2->unkC, 0x676, D_801E9678, 1.0f);
    }
    return 4;
}
