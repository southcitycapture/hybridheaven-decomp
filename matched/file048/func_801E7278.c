#include "context.h"

typedef struct func_801E7278_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_801E7278_Leaf;

typedef struct func_801E7278_Node {
    u8 pad0[0x30];
    func_801E7278_Leaf *unk30;
} func_801E7278_Node;

typedef struct func_801E7278_Root {
    u8 pad0[0x30];
    func_801E7278_Node *unk30;
} func_801E7278_Root;

s32 func_801E7278(s32 arg0, s32 arg1) {
    func_801E7278_Leaf *temp_v1;

    temp_v1 = ((func_801E7278_Root *) D_8038D8D0)->unk30->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 6;
}
