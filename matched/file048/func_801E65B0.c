#include "context.h"

typedef struct func_801E65B0_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x4B - 0x34];
    u8 unk4B;
} func_801E65B0_StructC;

typedef struct func_801E65B0_StructB {
    u8 pad0[0x30];
    func_801E65B0_StructC *unk30;
} func_801E65B0_StructB;

typedef struct func_801E65B0_StructA {
    u8 pad0[0x28];
    func_801E65B0_StructB *unk28;
} func_801E65B0_StructA;

extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);
extern u8 D_801D96C8[];

s32 func_801E65B0(s32 arg0, s32 arg1) {
    f32 t;
    if (func_801C1088(3, 7, 0x3C) != 0) {
        func_801C10D8(3, 7);
        ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk30 = (s32) D_801D96C8 | 0x40000000;
        return 3;
    }
    t = (f32) func_801C1134(3, 7) / 60.0f;
    ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk4B = (s8) (u32) (255.0f * t);
    return 2;
}
