#include "context.h"

typedef struct func_8036CA40_StructA { u8 pad[0x2F4]; f32 unk2F4; } func_8036CA40_StructA;
typedef struct func_8036CA40_StructB { u8 pad[4]; u16 unk4; u16 unk6; } func_8036CA40_StructB;
typedef struct func_8036CA40_StructC { u8 pad[0x4]; u16 unk4; f32 unk8; } func_8036CA40_StructC;
typedef struct func_8036CA40_StructE { u8 pad[0x1C]; func_8036CA40_StructC unk1C; } func_8036CA40_StructE;
typedef struct func_8036CA40_StructD { u8 pad[0x5C]; func_8036CA40_StructE *unk5C; } func_8036CA40_StructD;
extern s32 func_80011590(u16);
extern func_8036CA40_StructB *func_8036BF98(func_8036CA40_StructA *, func_8036CA40_StructA *, func_8036CA40_StructE *);

f32 func_8036CA40(func_8036CA40_StructD *arg0) {
    func_8036CA40_StructE *a2;
    func_8036CA40_StructC *v1;
    func_8036CA40_StructA *a1;
    func_8036CA40_StructB *v0;

    a2 = arg0->unk5C;
    v1 = &a2->unk1C;
    if ((s32)arg0 == D_801BBCCC) {
        a1 = (func_8036CA40_StructA *)D_801BC03C;
    } else {
        a1 = (func_8036CA40_StructA *)D_801BC3D8;
    }
    v0 = func_8036BF98((func_8036CA40_StructA *)((s32)a1 * 1), a1, a2);
    if (v1->unk4 >= func_80011590(v0->unk4 * v1->unk8) && func_80011590(v0->unk6 * v1->unk8) >= v1->unk4) {
        a1->unk2F4 = 1.0f;
    } else {
        a1->unk2F4 = 0.0f;
    }
    return a1->unk2F4;
}
