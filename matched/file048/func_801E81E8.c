#include "context.h"
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 func_801CE274();
extern u8 func_801DAAF0[];

typedef struct func_801E81E8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E81E8_StructC;

typedef struct func_801E81E8_StructB {
    u8 pad0[0x2C];
    func_801E81E8_StructC *unk2C;
} func_801E81E8_StructB;

typedef struct func_801E81E8_StructA {
    u8 pad0[0x24];
    func_801E81E8_StructB *unk24;
} func_801E81E8_StructA;

typedef struct func_801E81E8_StructV {
    u8 pad0[8];
    func_801E81E8_StructA *unk8;
} func_801E81E8_StructV;

extern f32 D_801EA594;
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);

s32 func_801E81E8(s32 arg0, s32 arg1) {
    func_801E81E8_StructC *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = (*(func_801E81E8_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67C, D_801EA594, 1.0f);
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 7;
    }
    return 6;
}
