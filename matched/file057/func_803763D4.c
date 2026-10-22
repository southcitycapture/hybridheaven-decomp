#include "context.h"

typedef struct func_803763D4_StructEntry {
    u8 pad[9];
    u8 kind;
    u8 padA[0x12];
} func_803763D4_StructEntry;

typedef struct func_803763D4_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803763D4_StructEntry *entry;
} func_803763D4_StructOutput;

typedef struct func_803763D4_StructArg {
    u8 pad[0xA8];
    u8 flags[0x214];
    s16 value0;
    s16 value1;
} func_803763D4_StructArg;

extern u8 D_8038CD70;
extern func_803763D4_StructOutput D_8038CD74[];

void func_803763D4(arg0)
    func_803763D4_StructArg *arg0;
{
    func_803763D4_StructOutput *out;
    func_803763D4_StructEntry *entries[13];
    s32 i;
    s32 count;
    s32 n;

    count = 0;
    for (i = 0; i < 14; i = (i + 1) & 0xFF) {
        if (arg0->flags[i * 6] == 1) {
            entries[count] = &(*(func_803763D4_StructEntry (*)[14])D_801842A0)[i];
            count = (count + 1) & 0xFF;
        }
    }
    D_8038CD70 = count;
    out = D_8038CD74;
    for (i = 0, n = count; i < n; i = (i + 1) & 0xFF) {
        out->entry = entries[i];
        if ((entries[i]->kind == 0 && arg0->value0 >= 0) ||
            (entries[i]->kind == 1 && arg0->value1 >= 0)) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}
