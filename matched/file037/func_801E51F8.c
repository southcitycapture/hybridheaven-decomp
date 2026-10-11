#include "context.h"

struct func_801E51F8_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E51F8_Struct_E {
    u8 pad[0x2C];
    struct func_801E51F8_Struct_F *unk2C;
};
struct func_801E51F8_Struct_D {
    u8 pad[0x24];
    struct func_801E51F8_Struct_E *unk24;
};
struct func_801E51F8_Struct_C {
    u8 pad[0x8];
    struct func_801E51F8_Struct_D *unk8;
};
struct func_801E51F8_Struct_B {
    u8 pad[0x8];
    struct func_801E51F8_Struct_C *unk8;
};
struct func_801E51F8_Struct_A {
    struct func_801E51F8_Struct_B *unk0;
};

s32 func_801E51F8(s32 arg0, s32 arg1) {
    struct func_801E51F8_Struct_E *temp_v0;

    temp_v0 = ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -8.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unkC = -49.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x04100000, 0, 0x1100, 3.0f);
        func_801C0D04(4, 1);
        return 2;
    }
    return 1;
}
