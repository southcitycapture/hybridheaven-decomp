#include "context.h"

typedef struct func_8000D100_StructOut {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u16 unk14;
    u16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;
} func_8000D100_StructOut;

typedef struct func_8000D100_StructIn {
    f32 unk0;
    f32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
    s32 unk10;
} func_8000D100_StructIn;

typedef struct func_8000D100_StructArg0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x2C - 0x23];
    func_8000D100_StructOut *unk2C;
} func_8000D100_StructArg0;

void func_8000D100(func_8000D100_StructArg0 *arg0, func_8000D100_StructIn *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = (f32) arg1->unk0;
    arg0->unk2C->unk4 = (f32) arg1->unk4;
    arg0->unk2C->unk24 = arg1->unk8;
    arg0->unk2C->unk26 = arg1->unkA;
    arg0->unk2C->unk28 = arg1->unkC;
    arg0->unk2C->unk2C = arg1->unk10;
    arg0->unk2C->unk8 = 1.0f;
    arg0->unk2C->unkC = 1.0f;
    arg0->unk2C->unk10 = 0xFF;
    arg0->unk2C->unk11 = 0xFF;
    arg0->unk2C->unk12 = 0xFF;
    arg0->unk2C->unk13 = 0xFF;
    arg0->unk2C->unk14 = 0x8000;
    arg0->unk2C->unk16 = 0;
    arg0->unk2C->unk18 = 0;
    arg0->unk2C->unk19 = 0;
    arg0->unk2C->unk1A = 0;
    arg0->unk2C->unk1C = 0;
    arg0->unk2C->unk20 = 0;
}
