#include "context.h"

typedef struct func_8012C228_StructData {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8012C228_StructData;

typedef struct func_8012C228_StructSub {
    u8 pad0[0x30];
    func_8012C228_StructData *unk30;
} func_8012C228_StructSub;

typedef struct func_8012C228_StructArg {
    u8 pad0[0x24];
    func_8012C228_StructSub *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_8012C228_StructArg;

typedef struct func_8012C228_StructEntry {
    u16 *unk0;
    s32 *unk4;
} func_8012C228_StructEntry;

extern func_8012C228_StructEntry *D_80171CEC[];
s32 func_8000522C(u16, s32, s32);

void func_8012C228(func_8012C228_StructArg *arg0, s32 arg1, s32 arg2) {
    func_8012C228_StructEntry *temp_v0;

    arg0->unk2C |= 0x800;
    temp_v0 = D_80171CEC[arg1];
    arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg2], arg2);
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
}
