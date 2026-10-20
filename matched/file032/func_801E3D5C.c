#include "context.h"

struct func_801E3D5C_Struct_Pos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_801E3D5C_Struct_C {
    u8 pad[0x2C];
    struct func_801E3D5C_Struct_Pos *unk2C;
};

struct func_801E3D5C_Struct_B {
    u8 pad[0x24];
    struct func_801E3D5C_Struct_C *unk24;
};

struct func_801E3D5C_Struct_A {
    u8 pad[8];
    struct func_801E3D5C_Struct_B *unk8;
};

#define P (*(struct func_801E3D5C_Struct_A **)D_801DAB14)

s32 func_801E3D5C(s32 arg0, s32 arg1) {
    struct func_801E3D5C_Struct_C *temp_v0;

    temp_v0 = P->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -2.0f;
        P->unk8->unk24->unk2C->unk8 = 0.0f;
        P->unk8->unk24->unk2C->unkC = 56.0f;
        P->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x01B8001B, 0, 0x100, 1.0f);
        D_801EAC80 = 0;
        return 3;
    }
    return 2;
}
