#include "context.h"

extern f32 D_801F4824;

typedef struct func_801E5338_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E5338_StructC;
typedef struct func_801E5338_StructB { u8 pad0[0x2C]; func_801E5338_StructC *unk2C; } func_801E5338_StructB;
typedef struct func_801E5338_StructA { u8 pad0[0x24]; func_801E5338_StructB *unk24; } func_801E5338_StructA;
typedef struct func_801E5338_StructV { u8 pad0[8]; func_801E5338_StructA *unk8; } func_801E5338_StructV;

s32 func_801E5338(s32 arg0, s32 arg1) {
    func_801E5338_StructC *p;
    s32 v = D_801F2CD8;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 5;
c0:
    if (func_801CE274() == 0) {
        p = (*(func_801E5338_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x678, D_801F4824, 1.0f);
        func_801CC470(0, 0x03480027, 0, 0, 4.0f);
        D_801F2CD8 = 1;
    }
    goto out;
c1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x03480028, 0, 0, 15.0f);
        D_801F2CD8 = 2;
    }
    goto out;
c2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480028, 0, 0x100, 10.0f);
        return 6;
    }
out:
    return 5;
}
