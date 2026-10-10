#include "context.h"
extern struct func_801E5D20_L1 *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);

struct func_801E5A0C_Struct_Pos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_801E5A0C_Struct_C {
    u8 pad[0x2C];
    struct func_801E5A0C_Struct_Pos *unk2C;
};

struct func_801E5A0C_Struct_B {
    u8 pad[0x24];
    struct func_801E5A0C_Struct_C *unk24;
};

struct func_801E5A0C_Struct_A {
    u8 pad[8];
    struct func_801E5A0C_Struct_B *unk8;
};

s32 func_801E5A0C(s32 arg0, s32 arg1) {
    struct func_801E5A0C_Struct_C *temp_v0;

    temp_v0 = ((struct func_801E5A0C_Struct_A *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -43.0f;
        ((struct func_801E5A0C_Struct_A *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5A0C_Struct_A *) D_801DAB14)->unk8->unk24->unk2C->unkC = 44.0f;
        ((struct func_801E5A0C_Struct_A *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1B6E;
        func_801CC470(0, 0x03480048, 0, 0x100, 7.0f);
        return 3;
    }
    return 2;
}
