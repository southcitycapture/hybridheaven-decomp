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
extern void func_801CC550(s32);
extern s32 func_801CE274();
typedef struct func_801E55F8_StructB {
    u8 pad0[0x8];
    void *unk8;
} func_801E55F8_StructB;
typedef struct func_801E55F8_StructC {
    u8 pad0[0x24];
    void *unk24;
} func_801E55F8_StructC;
typedef struct func_801E55F8_StructD {
    u8 pad0[0x2C];
    void *unk2C;
} func_801E55F8_StructD;
typedef struct func_801E55F8_StructE {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E55F8_StructE;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E55F8(s32 arg0, s32 arg1) {
    func_801E55F8_StructE *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = ((func_801E55F8_StructD *)((func_801E55F8_StructC *)((func_801E55F8_StructB *)D_801DAB14)->unk8)->unk24)->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67A, 1.20000005f, 1.0f);
        func_801CC550(0);
        return 5;
    }
    return 4;
}
