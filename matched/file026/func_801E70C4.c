#include "context.h"

extern f32 D_801FC09C;
extern f32 D_801FC0A0;
extern f32 D_801FC0A4;
extern f32 D_801FC0A8;
extern f32 D_801FC0AC;
extern f32 D_801FC0B0;
extern f32 D_801FC0B4;
extern f32 D_801FC0B8;

struct func_801E70C4_StructLeaf {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};

s32 func_801E70C4(s32 arg0, s32 arg1) {
    struct func_801E70C4_StructLeaf *p;
    f32 delta;

    if (func_801C0B8C(0x01406F40) != 0) {
        func_8038BD50(D_801FC09C, D_801FC0A0, -9.2f);
        D_8038BD88(-196.0f, D_801FC0A4, -1.3f);
        return 3;
    }
    if (func_801C0B8C(0x01298BE0) != 0) {
        return 2;
    }
    delta = D_801FC0A8;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk30 += D_801FC0AC;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk34 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk38 += D_801FC0B0;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk3C += D_801FC0B4;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk40 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk44 += D_801FC0B8;
    return 2;
}
