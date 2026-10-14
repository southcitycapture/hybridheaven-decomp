#include "context.h"

typedef struct func_801ED0A8_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_801ED0A8_Leaf;

typedef struct func_801ED0A8_Mid {
    u8 pad0[0x2C];
    func_801ED0A8_Leaf *unk2C;
} func_801ED0A8_Mid;

typedef struct func_801ED0A8_Node {
    u8 pad0[8];
    struct func_801ED0A8_Node *unk8;
    u8 pad1[0x18];
    func_801ED0A8_Mid *unk24;
} func_801ED0A8_Node;

typedef struct func_801ED0A8_Base {
    u8 pad0[0x24];
    func_801ED0A8_Node *unk24;
} func_801ED0A8_Base;

s32 func_801ED0A8(s32 arg0, s32 arg1) {
    if (D_801F4888 >= 0x10) {
        ((func_801ED0A8_Base *)func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
        func_801CC470(2, 0x01680003, 0, 0x1100, 1.0f);
        D_801F488C = 0;
        func_801C0D04(4, 2);
        return 9;
    }
    D_801F4888 += 1;
    return 8;
}
