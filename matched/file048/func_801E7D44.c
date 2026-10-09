#include "context.h"

typedef struct func_801E7D44_Leaf {
    u8 pad0[0x18];
    f32 unk18;
} func_801E7D44_Leaf;

typedef struct func_801E7D44_Node {
    u8 pad0[0x30];
    func_801E7D44_Leaf *unk30;
} func_801E7D44_Node;

typedef struct func_801E7D44_Root {
    u8 pad0[0x4C];
    func_801E7D44_Node *unk4C;
    func_801E7D44_Node *unk50;
} func_801E7D44_Root;

extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

s32 func_801E7D44(s32 arg0, s32 arg1) {
    f32 scale;
    f32 quot;
    f32 temp_fv0;

    if (func_801C1088(3, 0xB, 0x3C) != 0) {
        func_801C10D8(3, 0xB);
        return 5;
    }
    scale = 1.0f;
    quot = (f32) func_801C1134(3, 0xB) / 60.0f;
    temp_fv0 = scale * quot;
    ((func_801E7D44_Root *) D_8038D8D0)->unk4C->unk30->unk18 = temp_fv0;
    ((func_801E7D44_Root *) D_8038D8D0)->unk50->unk30->unk18 = temp_fv0;
    return 4;
}
