#include "context.h"

typedef struct func_802564DC_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802564DC_StructB;

typedef struct func_802564DC_StructA {
    u8 pad0[0x30];
    func_802564DC_StructB *unk30;
} func_802564DC_StructA;

extern u8 *D_8025DE20;
extern u8 D_801BBBF0[];
void func_80256590(s32 arg0, void **arg1);

void func_802564DC(s32 arg0, func_802564DC_StructA **arg1) {
    (*arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4B += 2;
    if ((s32) (*arg1)->unk30->unk4B >= 0xFE) {
        (*arg1)->unk30->unk4B = 0xFF;
        func_800058DC((void *) arg0, (void *) func_80256590);
    }
}
