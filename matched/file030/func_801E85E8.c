#include "context.h"

typedef struct func_801E85E8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E85E8_StructC;

typedef struct func_801E85E8_StructM {
    u8 pad0[0x2C];
    func_801E85E8_StructC *unk2C;
} func_801E85E8_StructM;

typedef struct func_801E85E8_StructN {
    u8 pad0[0x8];
    struct func_801E85E8_StructN *unk8;
    u8 pad1[0x18];
    func_801E85E8_StructM *unk24;
} func_801E85E8_StructN;

s32 func_801E85E8(s32 arg0, s32 arg1) {
    func_801E85E8_StructM *temp_v0;

    temp_v0 = (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -30.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = -7.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x999;
        func_801CC470(2, 0x0320001C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
