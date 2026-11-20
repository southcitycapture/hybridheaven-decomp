#include "common.h"
extern u8 D_8025C7E8;


typedef struct func_80248FA0_StructB { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } func_80248FA0_StructB;
typedef struct func_80248FA0_StructA { u8 pad0[0x30]; func_80248FA0_StructB *unk30; } func_80248FA0_StructA;
typedef struct func_80248FA0_Struct { u8 pad0[0x24]; func_80248FA0_StructA *unk24; u8 pad28[0x70]; u16 unk98; } func_80248FA0_Struct;
extern void func_801FCA4C(f32, f32, s32, s32, u16);
extern void func_801FCAE0(f32, f32, s32, u16);

void func_80248FA0(func_80248FA0_Struct *arg0) {
    func_80248FA0_StructB *firstPos;
    func_80248FA0_StructB *secondPos;
    f32 x;
    f32 y;
    s32 z;
    s32 v;
    u16 sp26;

    if (D_8025C7E8 != 0) {
        v = arg0->unk98;
        switch (v) {
        case 0: sp26 = 0x5C8; break;
        case 1: sp26 = 0x5C9; break;
        case 2: sp26 = 0x5CA; break;
        case 3: sp26 = 0x5CB; break;
        }
    } else {
        v = arg0->unk98;
        switch (v) {
        case 0: sp26 = 0x6CA; break;
        case 1: sp26 = 0x6CB; break;
        case 2: sp26 = 0x6CC; break;
        case 3: sp26 = 0x6CD; break;
        }
    }
    firstPos = arg0->unk24->unk30;
    x = firstPos->unk4;
    y = firstPos->unk8;
    z = firstPos->unkC;
    func_801FCA4C(x, y, z, 0x442F0000, sp26);
    secondPos = arg0->unk24->unk30;
    x = secondPos->unk4;
    y = secondPos->unk8;
    z = secondPos->unkC;
    func_801FCAE0(x, y, z, sp26);
}
