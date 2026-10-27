#include "common.h"
typedef struct func_80249170_Ctx {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
} func_80249170_Ctx;


typedef struct func_80249960_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x38];
    u8 unk4C;
    u8 unk4D;
} func_80249960_Inner;

typedef struct func_80249960_Node {
    u8 pad0[0x30];
    func_80249960_Inner *unk30;
} func_80249960_Node;

typedef struct func_80249960_Args {
    func_80249960_Node *unk0;
    func_80249960_Node *unk4;
    func_80249960_Node *unk8;
    func_80249960_Node *unkC;
    func_80249960_Node *unk10;
    func_80249960_Node *unk14;
    func_80249960_Node *unk18;
    func_80249960_Node *unk1C;
    func_80249960_Node *unk20;
    func_80249960_Node *unk24;
    func_80249960_Node *unk28;
} func_80249960_Args;
extern f32 func_8001EAD0(s16);

void func_80249960(func_80249170_Ctx *arg0, func_80249960_Args *arg1) {
    arg1->unk0->unk30->unk4C = arg0->unk96;
    arg1->unk4->unk30->unk4C = (u32)arg0->unk96 * 0.2;
    arg1->unk8->unk30->unk12 = (s16)(arg1->unk8->unk30->unk12 + 1) & 0x1FFF;
    arg1->unkC->unk30->unk12 = (s16)(arg1->unkC->unk30->unk12 - 9) & 0x1FFF;
    arg1->unkC->unk30->unk4D = (u32)arg0->unk96 * 1.5;
    arg1->unk10->unk30->unk4D = (u32)arg0->unk96 * 1.0;
    arg1->unk14->unk30->unk12 = (s16)(arg1->unk14->unk30->unk12 + 4) & 0x1FFF;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk94 * 0.5;
    arg1->unk18->unk30->unk12 = (s16)(arg1->unk18->unk30->unk12 - 5) & 0x1FFF;
    arg1->unk18->unk30->unk4D = (u32)arg0->unk94 * 0.5;
    arg1->unk1C->unk30->unk12 = (s16)(arg1->unk1C->unk30->unk12 + 11) & 0x1FFF;
    arg1->unk20->unk30->unk4D = arg0->unk96;
    arg1->unk24->unk30->unk4C = arg0->unk96;
    arg1->unk28->unk30->unk4D = func_8001EAD0(arg0->unk92) * 128.0f + 128.0f;
    arg0->unk92 = (s16)(arg0->unk92 + 0x16) & 0x1FFF;
    arg0->unk94++;
    arg0->unk96--;
}
