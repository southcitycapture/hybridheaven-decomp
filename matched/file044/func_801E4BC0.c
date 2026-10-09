#include "context.h"
extern struct func_801E4EE0_Obj *D_8038D8D0;

typedef struct func_801E4BC0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E4BC0_Leaf;

typedef struct func_801E4BC0_Mid {
    u8 pad0[0x30];
    func_801E4BC0_Leaf *unk30;
} func_801E4BC0_Mid;

typedef struct func_801E4BC0_Root {
    u8 pad0[0x10];
    func_801E4BC0_Mid *unk10;
} func_801E4BC0_Root;

s32 func_801E4BC0(s32 arg0, s32 arg1) {
    ((func_801E4BC0_Root *) D_8038D8D0)->unk10->unk30->unk4 = -145.0f;
    ((func_801E4BC0_Root *) D_8038D8D0)->unk10->unk30->unk8 = 0.0f;
    ((func_801E4BC0_Root *) D_8038D8D0)->unk10->unk30->unkC = 0.0f;
    return 0xD;
}
