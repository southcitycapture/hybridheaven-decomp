#include "context.h"

typedef struct func_801E4F4C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
} func_801E4F4C_StructB;
typedef struct func_801E4F4C_StructA {
    u8 pad0[0x30];
    func_801E4F4C_StructB *unk30;
} func_801E4F4C_StructA;
typedef struct func_801E4F4C_StructC {
    u8 pad0[0x14];
    func_801E4F4C_StructA *unk14;
} func_801E4F4C_StructC;

extern f64 D_801E8CD0;
extern f32 D_801E8CD8;
extern f32 D_801E8CDC;
extern f32 D_801E8CE0;
extern f32 D_801E8CE4;
extern f32 D_801E8CE8;
#define G4F4C (*(func_801E4F4C_StructC **)&D_8038D8D0)

s32 func_801E4F4C(s32 arg0, s32 arg1) {
    s32 sp1C;
    f32 t;
    f32 z;

    z = 0.0f;
    if (func_801C0DE4(3, 5, 4.5000038146972656f) != 0) {
        func_801C0EB0(3, 5);
        return 5;
    }
    sp1C = func_801C0DE4(3, 5, 2.2500019073486328f);
    t = (f32)(func_80034C24(func_801C0F18(3, 5)) / D_801E8CD0) / D_801E8CD8;
    G4F4C->unk14->unk30->unk4 = (16.5f - 16.5f) * t + D_801E8CDC;
    G4F4C->unk14->unk30->unk8 = D_801E8CE0 * t + D_801E8CE4;
    G4F4C->unk14->unk30->unkC = 16.5f * t + D_801E8CE8;
    if (sp1C != 0) {
        G4F4C->unk14->unk30->unk4B = (u32)(-510.0f * t + 510.0f);
    } else {
        G4F4C->unk14->unk30->unk4B = (u32)(510.0f * t);
    }
    return 4;
}
