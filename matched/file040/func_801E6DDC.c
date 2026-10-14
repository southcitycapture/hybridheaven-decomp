#include "context.h"

struct func_801E6DDC_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801E6DDC_Struct_B {
    u8 pad0[0x2C];
    struct func_801E6DDC_Struct_C *unk2C;
};

struct func_801E6DDC_Struct_A {
    u8 pad0[0x8];
    struct func_801E6DDC_Struct_A *unk8;
    u8 pad1[0x18];
    struct func_801E6DDC_Struct_B *unk24;
};

s32 func_801E6DDC(s32 arg0, s32 arg1) {
    struct func_801E6DDC_Struct_B *temp_v1;

    temp_v1 = ((struct func_801E6DDC_Struct_A *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v1 != NULL) {
        temp_v1->unk2C->unk4 = 5120.0f;
        ((struct func_801E6DDC_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 145.0f;
        ((struct func_801E6DDC_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 42.0f;
        ((struct func_801E6DDC_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
        return 2;
    }
    return 1;
}
