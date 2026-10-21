#include "context.h"

typedef struct func_803767F4_StructEntry {
    u8 pad[6];
    u8 value;
} func_803767F4_StructEntry;

typedef struct func_803767F4_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803767F4_StructEntry *entry;
} func_803767F4_StructOutput;

typedef struct func_803767F4_StructArg {
    u8 pad[0xA];
    s16 value;
    u8 padC[0x210];
    u8 flags[18];
} func_803767F4_StructArg;

extern u8 D_801842A0[];
extern u8 D_8038CE18;
extern func_803767F4_StructOutput D_8038CE1C[];

void func_803767F4(arg0)
    func_803767F4_StructArg *arg0;
{
    func_803767F4_StructEntry *entries[3];
    func_803767F4_StructOutput *out;
    u8 i;
    u8 count;

    count = 0;
    for (i = 0; i < 3; i++) {
        if (arg0->flags[i * 6] == 1) {
            entries[count++] = (func_803767F4_StructEntry *)(D_801842A0 + i * 0x1C + 0x6C8);
        }
    }
    D_8038CE18 = count;
    out = D_8038CE1C;
    for (i = 0; i < count; i++) {
        out->entry = entries[i];
        if (arg0->value >= entries[i]->value && *(f32 *)((u8 *)&D_801BBBF0 + 0xB94) < 20.0f) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}
