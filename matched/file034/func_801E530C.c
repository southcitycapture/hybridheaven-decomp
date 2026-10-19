#include "context.h"

typedef struct func_801E530C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E530C_StructC;
typedef struct func_801E530C_StructB {
    u8 pad0[0x2C];
    func_801E530C_StructC *unk2C;
} func_801E530C_StructB;
typedef struct func_801E530C_StructA {
    u8 pad0[8];
    struct func_801E530C_StructA *unk8;
    u8 pad1[0x18];
    func_801E530C_StructB *unk24;
} func_801E530C_StructA;
typedef struct func_801E530C_StructG {
    u8 pad0[0x24];
    func_801E530C_StructA *unk24;
} func_801E530C_StructG;

extern f32 *func_801CE2C4();
extern f32 D_801E965C;

s32 func_801E530C(s32 arg0, s32 arg1) {
    f32 *v;
    f32 f;
    func_801E530C_StructC *c;

    if (func_801CE284() != 0) {
        return 0x23;
    }
    v = func_801CE2C4();
    f = v[0];
    if ((f < 0.0f ? -f : f) < 1.0f) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        c->unk4 = c->unk4 + f;
    }
    f = v[2];
    if ((f < 0.0f ? -f : f) < 1.0f) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        c->unkC = c->unkC + f;
    }
    if (func_801CE2D0(0x1900035, 9) != 0) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x680, D_801E965C, 1.0f);
    }
    return 0x22;
}
