#include "context.h"

struct func_801E6D64_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E6D64_Struct_E {
    u8 pad[0x2C];
    struct func_801E6D64_Struct_F *unk2C;
};

struct func_801E6D64_Struct_D {
    u8 pad[0x24];
    struct func_801E6D64_Struct_E *unk24;
};

struct func_801E6D64_Struct_C {
    u8 pad[0x8];
    struct func_801E6D64_Struct_D *unk8;
};

struct func_801E6D64_Struct_B {
    u8 pad[0x8];
    struct func_801E6D64_Struct_C *unk8;
};

s32 func_801E6D64(s32 arg0, s32 arg1) {
    struct func_801E6D64_Struct_B **pp;

    if (func_801C0B8C(0xDBBA0) != 0) {
        pp = (struct func_801E6D64_Struct_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = -42.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = 43.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x6AA;
        return 4;
    }
    return 3;
}
