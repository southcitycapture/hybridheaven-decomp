#include "context.h"

typedef struct func_803764CC_StructEntry {
    u8 pad[9];
    u8 type;
} func_803764CC_StructEntry;

typedef struct func_803764CC_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803764CC_StructEntry *entry;
} func_803764CC_StructOutput;

extern u8 D_801842A0[];
extern u8 D_8038CE18;
extern struct func_803767F4_StructOutput D_8038CE1C[];

void func_803764CC(void *arg0) {
    func_803764CC_StructEntry *entries[20];
    func_803764CC_StructOutput *out;
    u8 i;
    u8 count;

    count = 0;
    for (i = 0; i < 20; i++) {
        if (*((u8 *)arg0 + i * 6 + 0xFC) == 1) {
            entries[count++] = (func_803764CC_StructEntry *)(D_801842A0 + i * 0x1C + 0x188);
        }
    }
    D_8038CE18 = count;
    out = (func_803764CC_StructOutput *)D_8038CE1C;
    for (i = 0; i < count; i++) {
        out->entry = entries[i];
        if ((entries[i]->type == 2 && *(s16 *)((u8 *)arg0 + 0x2C0) >= 0) ||
            (entries[i]->type == 3 && *(s16 *)((u8 *)arg0 + 0x2C2) >= 0)) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}
