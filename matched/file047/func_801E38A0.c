#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E38A0_StructS {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E38A0_StructS;

typedef struct func_801E38A0_StructR {
    u8 pad0[0x2C];
    func_801E38A0_StructS *unk2C;
} func_801E38A0_StructR;

typedef struct func_801E38A0_StructQ {
    u8 pad0[0x24];
    func_801E38A0_StructR *unk24;
} func_801E38A0_StructQ;

typedef struct func_801E38A0_StructP {
    u8 pad0[0x8];
    func_801E38A0_StructQ *unk8;
} func_801E38A0_StructP;

extern func_801E38A0_StructP *D_801DAB14;

s32 func_801E38A0(s32 arg0, s32 arg1) {
    func_801E38A0_StructR *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 100.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480062, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
