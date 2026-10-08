#include "common.h"

typedef struct func_8012C2DC_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8012C2DC_StructInner;

typedef struct func_8012C2DC_StructOuter {
    u8 pad0[0x30];
    func_8012C2DC_StructInner *unk30;
} func_8012C2DC_StructOuter;

extern void *D_8008DA88[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];

void func_8012C2DC(s32 arg0) {
    func_8012C2DC_StructOuter **temp_v0;

    temp_v0 = (func_8012C2DC_StructOuter **) &D_8008DA88[arg0];
    (*temp_v0)->unk30->unk24 = (*temp_v0)->unk30->unk24 | 0x400;
    (*temp_v0)->unk30->unk30 = D_8017AF38;
    (*temp_v0)->unk30->unk4C = D_801BBBF0[0xF32];
    (*temp_v0)->unk30->unk4D = D_801BBBF0[0xF33];
    (*temp_v0)->unk30->unk4E = D_801BBBF0[0xF34];
    (*temp_v0)->unk30->unk4F = D_801BBBF0[0xF35];
}
