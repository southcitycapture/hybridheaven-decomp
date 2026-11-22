#include "common.h"

typedef struct func_801E5470_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E5470_StructC;
typedef struct func_801E5470_StructP3 {
    u8 pad0[0x2C];
    func_801E5470_StructC *unk2C;
} func_801E5470_StructP3;
typedef struct func_801E5470_StructP2 {
    u8 pad0[0x24];
    func_801E5470_StructP3 *unk24;
} func_801E5470_StructP2;
typedef struct func_801E5470_StructP1 {
    u8 pad0[0x8];
    func_801E5470_StructP2 *unk8;
} func_801E5470_StructP1;
extern func_801E5470_StructP1 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801E5E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 35.7999992f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x1B8000B, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}
