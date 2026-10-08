#include "context.h"

typedef struct func_801E7180_Struct_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E7180_Struct_Y;

typedef struct func_801E7180_Struct_X {
    u8 pad0[8];
    struct func_801E7180_Struct_X *unk8;
    u8 pad1[0x18];
    struct func_801E7180_Struct_X *unk24;
    u8 pad2[4];
    func_801E7180_Struct_Y *unk2C;
} func_801E7180_Struct_X;

s32 func_801E7180(s32 arg0, s32 arg1) {
    func_801E7180_Struct_X *temp_v0;

    temp_v0 = ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 100.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x019100FD, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
