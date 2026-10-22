#include "context.h"

s16 func_8001EF38(f32, f32);                        /* extern */
f32 func_8002FC20(f32);                             /* extern */

typedef struct func_8021B790_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8021B790_Vec;

typedef struct func_8021B790_Node2 {
    u8 pad0[0x2C];
    func_8021B790_Vec *unk2C;
} func_8021B790_Node2;

typedef struct func_8021B790_Node1 {
    u8 pad0[0x24];
    func_8021B790_Node2 *unk24;
} func_8021B790_Node1;

typedef struct func_8021B790_Node0 {
    func_8021B790_Node1 *unk0;
} func_8021B790_Node0;

typedef struct func_8021B790_Glob {
    u8 pad0[0xE0];
    func_8021B790_Node2 *unkE0;
    u8 pad1[0x448 - 0xE4];
    func_8021B790_Node0 *unk448;
    u8 pad2[0xB84 - 0x44C];
    f32 unkB84;
    f32 unkB88;
    f32 unkB8C;
    f32 unkB90;
    f32 unkB94;
    s16 unkB98;
} func_8021B790_Glob;

#define P ((func_8021B790_Glob *)D_801BBBF0)

void func_8021B790(void) {
    P->unkB84 = P->unk448->unk0->unk24->unk2C->unk4 - P->unkE0->unk2C->unk4;
    P->unkB88 = P->unk448->unk0->unk24->unk2C->unk8 - P->unkE0->unk2C->unk8;
    P->unkB8C = P->unk448->unk0->unk24->unk2C->unkC - P->unkE0->unk2C->unkC;
    P->unkB90 = P->unkB84 * P->unkB84 + P->unkB8C * P->unkB8C;
    P->unkB94 = func_8002FC20(P->unkB90);
    P->unkB90 = P->unkB90 + P->unkB88 * P->unkB88;
    P->unkB90 = func_8002FC20(P->unkB90);
    P->unkB98 = func_8001EF38(P->unkB84, P->unkB8C);
}
