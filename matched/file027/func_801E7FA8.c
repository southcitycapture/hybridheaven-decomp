#include "common.h"

extern u8 *D_801DAB14;
typedef struct func_801E7FA8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E7FA8_StructC;
typedef struct func_801E7FA8_StructB {
    u8 pad0[0x2C];
    func_801E7FA8_StructC *unk2C;
} func_801E7FA8_StructB;
typedef struct func_801E7FA8_StructA {
    u8 pad0[8];
    struct func_801E7FA8_StructA *unk8;
    u8 pad1[0x18];
    func_801E7FA8_StructB *unk24;
} func_801E7FA8_StructA;
#define FUNC_801E7FA8_ROOT (*(func_801E7FA8_StructA **)&D_801DAB14)
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801E7FA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = 18.3999996f;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 23.6000004f;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1582;
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 1.0f);
        return 9;
    }
    return 8;
}
