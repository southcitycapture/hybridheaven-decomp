#include "context.h"

struct func_801E6C88_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E6C88_Struct_E {
    u8 pad[0x2C];
    struct func_801E6C88_Struct_F *unk2C;
};
struct func_801E6C88_Struct_D {
    u8 pad[0x24];
    struct func_801E6C88_Struct_E *unk24;
};
struct func_801E6C88_Struct_C {
    u8 pad[0x8];
    struct func_801E6C88_Struct_D *unk8;
};
struct func_801E6C88_Struct_B {
    u8 pad[0x8];
    struct func_801E6C88_Struct_C *unk8;
};

s32 func_801E6C88(s32 arg0, s32 arg1) {
    struct func_801E6C88_Struct_E *temp_v0;

    temp_v0 = ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
