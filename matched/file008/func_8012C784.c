#include "common.h"

typedef struct func_8012C784_StructA {
    u16 unk0;
    u8 pad2[0x26];
    s32 unk28;
    u16 unk2C;
} func_8012C784_StructA;

typedef struct func_8012C784_StructB {
    u8 pad[0x2C];
    func_8012C784_StructA *unk2C;
    func_8012C784_StructA *unk30;
} func_8012C784_StructB;

typedef struct func_8012C784_StructE {
    u16 *unk0;
    s32 *unk4;
} func_8012C784_StructE;

typedef struct func_8012C784_StructC {
    u8 pad[0x36];
    u16 unk36;
} func_8012C784_StructC;

extern func_8012C784_StructB *D_8008DA88[];
extern func_8012C784_StructE *D_80171CF0[];

void func_8012C784(func_8012C784_StructC *arg0, s32 arg1, s32 arg2) {
    func_8012C784_StructB **temp_v0;
    func_8012C784_StructB *temp_v1;
    func_8012C784_StructA *temp_a3;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a3 = temp_v1->unk2C;
    if (temp_a3 != NULL) {
        temp_a3->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
        (*temp_v0)->unk2C->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
        (*temp_v0)->unk2C->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
        return;
    }
    temp_v1->unk30->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
    (*temp_v0)->unk30->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
    (*temp_v0)->unk30->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
}
