#include "context.h"

extern struct func_801E3D90_StructA *D_801DAB14;
s32 func_801CC470(s32, s32, s32, s32, f32);

typedef struct func_801E3938_StructS {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3938_StructS;

typedef struct func_801E3938_StructR {
    u8 pad0[0x2C];
    func_801E3938_StructS *unk2C;
} func_801E3938_StructR;

typedef struct func_801E3938_StructQ {
    u8 pad0[0x24];
    func_801E3938_StructR *unk24;
} func_801E3938_StructQ;

typedef struct func_801E3938_StructP {
    u8 pad0[0x8];
    func_801E3938_StructQ *unk8;
} func_801E3938_StructP;

s32 func_801E3938(s32 arg0, s32 arg1) {
    func_801E3938_StructR *temp_v0;

    temp_v0 = ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unkC = 90.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480018, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}
