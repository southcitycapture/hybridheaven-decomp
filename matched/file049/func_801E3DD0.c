#include "context.h"

typedef struct func_801E3DD0_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E3DD0_StructC;
typedef struct func_801E3DD0_StructB {
    u8 pad[0x2C];
    func_801E3DD0_StructC *unk2C;
} func_801E3DD0_StructB;
typedef struct func_801E3DD0_StructA {
    u8 pad[0x24];
    func_801E3DD0_StructB *unk24;
} func_801E3DD0_StructA;
typedef struct func_801E3DD0_Struct {
    u8 pad[8];
    func_801E3DD0_StructA *unk8;
} func_801E3DD0_Struct;
#define R3 (*(func_801E3DD0_Struct **)&D_801DAB14)

extern f32 D_801E76E4;
extern f32 D_801E76E8;
extern f32 D_801E76EC;
extern f32 D_801E76F0;
extern f32 D_801E76F4;

s32 func_801E3DD0(s32 arg0, s32 arg1) {
    f32 t;
    s32 v;
    func_801E3DD0_StructC *p;

    v = D_801E7144;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v != 2) goto r3;
    goto c2;
c0:
    if (func_801C1088(4, 0, 0x46) != 0) {
        func_801C10D8(4, 0);
        D_801E7144 = 1;
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
    } else {
        t = (f32)(u32)func_801C1134(4, 0) / 70.0f;
        R3->unk8->unk24->unk2C->unk4 = D_801E76E4 * t + D_801E76E8;
        *(f32 *)&R3->unk8->unk24->unk2C->unkC = D_801E76EC * t + 50.0f;
        if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
            p = R3->unk8->unk24->unk2C;
            func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67D, D_801E76F0, 1.0f);
        }
    }
    goto r3;
c1:
    if (func_801CE274() == 0) {
        p = R3->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67D, D_801E76F4, 1.0f);
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        D_801E7144 = 2;
    }
    goto r3;
c2:
    return 4;
r3:
    return 3;
}
