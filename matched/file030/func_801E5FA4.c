#include "context.h"

typedef struct func_801E5FA4_StructC {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E5FA4_StructC;

typedef struct func_801E5FA4_StructD {
    u8 pad0[0x2C];
    func_801E5FA4_StructC *unk2C;
} func_801E5FA4_StructD;

typedef struct func_801E5FA4_StructB {
    u8 pad0[0x24];
    func_801E5FA4_StructD *unk24;
} func_801E5FA4_StructB;

typedef struct func_801E5FA4_StructA {
    u8 pad0[0x8];
    func_801E5FA4_StructB *unk8;
} func_801E5FA4_StructA;

typedef struct func_801E5FA4_StructP {
    u8 pad0[0x8];
    func_801E5FA4_StructA *unk8;
} func_801E5FA4_StructP;

s32 func_801E5FA4(s32 arg0, s32 arg1) {
    func_801E5FA4_StructD *temp_v0;

    temp_v0 = (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 19.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -42.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005A, 0, 0x100, 3.0f);
        return 2;
    }
    return 1;
}
