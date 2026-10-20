#include "context.h"

extern f32 D_801EA5B0;

typedef struct func_801E84CC_StructC { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } func_801E84CC_StructC;
typedef struct func_801E84CC_StructB { u8 pad0[0x2C]; func_801E84CC_StructC *unk2C; } func_801E84CC_StructB;
typedef struct func_801E84CC_StructA { u8 pad0[0x24]; func_801E84CC_StructB *unk24; } func_801E84CC_StructA;
typedef struct func_801E84CC_StructV { u8 pad0[8]; func_801E84CC_StructA *unk8; } func_801E84CC_StructV;

s32 func_801E84CC(s32 arg0, s32 arg1) {
    func_801E84CC_StructC *p;
    s32 v = D_801E9FFC;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 0xB;
c0:
    if (func_801CE274() == 0) {
        p = ((func_801E84CC_StructV *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67C, D_801EA5B0, 1.0f);
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        D_801E9FFC = 1;
    }
    goto out;
c1:
    func_801CC4D8(0, 0x04100034, 0, 0, 5.0f);
    D_801E9FFC = 2;
    goto out;
c2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100034, 0, 0, 5.0f);
        return 0xC;
    }
out:
    return 0xB;
}
