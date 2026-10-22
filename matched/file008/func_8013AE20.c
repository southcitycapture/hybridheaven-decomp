#include "context.h"

typedef struct func_8013AE20_StructTable { u16 v[12]; } func_8013AE20_StructTable;
typedef struct func_8013AE20_StructId { u8 pad[14]; u16 id; } func_8013AE20_StructId;
typedef struct func_8013AE20_StructInput { u8 pad[0x5C]; func_8013AE20_StructId *info; } func_8013AE20_StructInput;
typedef struct func_8013AE20_StructValue { u8 pad[0x28]; s32 value; } func_8013AE20_StructValue;
typedef struct func_8013AE20_StructNode { u8 pad[0x2C]; func_8013AE20_StructValue *next; } func_8013AE20_StructNode;
typedef struct func_8013AE20_StructOutput { u8 pad[0x24]; func_8013AE20_StructNode *a; u8 pad28[8]; func_8013AE20_StructNode *b; } func_8013AE20_StructOutput;
typedef struct func_8013AE20_StructResource { s32 unk0; s32 *data; } func_8013AE20_StructResource;
extern func_8013AE20_StructResource *D_80171CF0[];
extern func_8013AE20_StructTable D_8017BCCC, D_8017BCE4, D_8017BCFC, D_8017BD14;
extern func_8013AE20_StructTable D_8017BD2C, D_8017BD44, D_8017BD5C, D_8017BD74;

void func_8013AE20(void *arg0, func_8013AE20_StructOutput *arg1, u8 arg2) {
    func_8013AE20_StructId *info = ((func_8013AE20_StructInput *)arg0)->info;
    func_8013AE20_StructTable spBC = D_8017BCCC;
    func_8013AE20_StructTable spA4 = D_8017BCE4;
    func_8013AE20_StructTable sp8C = D_8017BCFC;
    func_8013AE20_StructTable sp74 = D_8017BD14;
    func_8013AE20_StructTable sp5C = D_8017BD2C;
    func_8013AE20_StructTable sp44 = D_8017BD44;
    func_8013AE20_StructTable sp2C = D_8017BD5C;
    func_8013AE20_StructTable sp14 = D_8017BD74;
    u16 *table;
    u16 id;
    s32 *data;
    id = info->id;
    if (id == 0x29) { table = spBC.v; goto selected; }
    if (id == 0x2B) { table = spA4.v; goto selected; }
    if (id == 0x2C) { table = sp8C.v; goto selected; }
    if (id == 0x2D) { table = sp74.v; goto selected; }
    if (id == 0x11B) { table = sp5C.v; goto selected; }
    if (id == 0x11C) { table = sp44.v; goto selected; }
    if (id == 0x57) { table = sp2C.v; goto selected; }
    if (id == 0x4057) {
        table = sp14.v;
selected:
#define P ((u16 *)((u32)table + (u16)(arg2 * 4) * 2))
        data = D_80171CF0[P[0] - 1]->data;
        arg1->a->next->value = data[P[1]];
        data = D_80171CF0[P[2] - 1]->data;
        arg1->b->next->value = data[P[3]];
    }
}
