#include "context.h"

extern s32 D_801FD428[];

typedef struct func_801EBD7C_StructLeaf {
    u8 pad[4];
    f32 unk4;
    u8 pad8[0xA];
    s16 unk12;
} func_801EBD7C_StructLeaf;

typedef struct func_801EBD7C_StructNode {
    u8 pad[0x30];
    func_801EBD7C_StructLeaf *unk30;
} func_801EBD7C_StructNode;

s32 func_801EBD7C(s32 arg0, s32 arg1)
{
    s32 i;

    if (func_801C0B8C(0x071E275A) != 0) {
        for (i = 0; i < 5; i++) {
            ((func_801EBD7C_StructNode **)D_8038D8D0)[i]->unk30->unk4 = -374.0f;
            D_801FD428[i] = 0;
        }
        ((func_801EBD7C_StructNode **)D_8038D8D0)[0]->unk30->unk12 = 0;
        return 5;
    }
    return 4;
}
