#include "context.h"

extern struct func_801E58F0_StructA *D_801DAB14;

struct func_801E5678_Struct_A;
struct func_801E5678_Struct_B;

struct func_801E5678_Struct_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E5678_Struct_B {
    u8 pad0[0x2C];
    struct func_801E5678_Struct_Leaf *unk2C;
};

struct func_801E5678_Struct_A {
    u8 pad0[8];
    struct func_801E5678_Struct_A *unk8;
    u8 pad1[0x18];
    struct func_801E5678_Struct_B *unk24;
};

extern f32 D_801E9668;
extern f32 D_801E966C;

s32 func_801E5678(s32 arg0, s32 arg1) {
    struct func_801E5678_Struct_B *temp_v0;

    temp_v0 = ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E9668;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E966C;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x412;
        func_801CC470(1, 0x01B80013, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
