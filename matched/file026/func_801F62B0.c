#include "context.h"

extern struct func_801F6914_Struct1 *D_8038D8D0;

struct func_801F62B0_Node {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

struct func_801F62B0_Mid {
    u8 pad0[0x30];
    struct func_801F62B0_Node *unk30;
};

struct func_801F62B0_Top {
    u8 pad0[4];
    struct func_801F62B0_Mid *unk4;
};

extern f32 D_801FD310;

s32 func_801F62B0(s32 arg0, s32 arg1) {
    struct func_801F62B0_Node *temp_v0;

    temp_v0 = ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30;
    temp_v0->unk8 = temp_v0->unk8 + D_801FD310;
    if (func_801C0B8C(0x0208531F) != 0) {
        ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30->unk4 = 5120.0f;
        ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
        return 5;
    }
    return 4;
}
