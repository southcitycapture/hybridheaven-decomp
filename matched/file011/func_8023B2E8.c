#include "context.h"

typedef struct func_8023B2E8_StructEntry {
    s32 unk0;
    s32 **unk4;
} func_8023B2E8_StructEntry;

typedef struct func_8023B2E8_Struct {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x10];
    u8 unk20;
    u8 unk21;
    u8 unk22;
    u8 unk23;
    s32 *unk24[4];
} func_8023B2E8_Struct;

extern s32 D_802406D8[];

#define S ((func_8023B2E8_Struct *)&D_80240880)

void func_8023B2E8(void) {
    func_8023B2E8_StructEntry *sp1C;
    u8 sp1B;
    u8 i;
    s32 j;

    sp1C = (func_8023B2E8_StructEntry *)(S->unkC + 4);
    sp1B = S->unk20 * 4;
    func_80147D60(4);
    for (i = 0; i < 4; i++) {
        S->unk24[i] = D_802406D8;
    }
    for (i = 0; i < 4; i++) {
        j = i;
        S->unk24[i] = (s32 *) **(sp1C + sp1B)[j].unk4;
        if (S->unk20 == S->unk22 && j >= S->unk23 - S->unk20 * 4 - 1) {
            break;
        }
    }
}
