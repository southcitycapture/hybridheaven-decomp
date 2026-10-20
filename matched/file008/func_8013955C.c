#include "context.h"

typedef struct func_8013955C_StructVector {
    s32 x;
    s32 y;
    f32 z;
} func_8013955C_StructVector;

typedef struct func_8013955C_StructEntry {
    u8 pad[0x24];
    func_8013955C_StructVector value;
    u8 pad30[0x10];
} func_8013955C_StructEntry;

extern func_8013955C_StructEntry D_801BCE60[];

void func_8013955C(u16 arg0, func_8013955C_StructVector *arg1,
                   func_8013955C_StructVector *arg2) {
    func_8013955C_StructEntry *entry;
    u16 i;
    func_8013955C_StructVector *value;

    entry = D_801BCE60;
    arg1->z = 1.0f;
    if (arg2 != NULL) {
        arg2->z = 1.0f;
    }
    for (i = 0; i < arg0; i++) {
        if (i < 0x13 || arg2 == NULL) {
            value = arg1;
        } else {
            value = arg2;
        }
        entry->value = *value;
        entry++;
    }
}
