#include "context.h"

typedef struct func_803602D4_StructCount {
    u8 pad[0xC];
    u16 count;
} func_803602D4_StructCount;

typedef struct func_803602D4_StructArg {
    u8 pad[0x5C];
    func_803602D4_StructCount *data;
} func_803602D4_StructArg;

typedef struct func_803602D4_StructFlags {
    u8 pad[0x6C];
    u16 flags;
} func_803602D4_StructFlags;

typedef struct func_803602D4_StructEntry {
    u8 pad[0x2C];
    func_803602D4_StructFlags *data;
} func_803602D4_StructEntry;

void func_803602D4(s32 arg0, s32 arg1) {
    s32 i;
    s32 count;
    func_803602D4_StructCount *header;
    func_803602D4_StructFlags *data;

    header = ((func_803602D4_StructArg *)arg0)->data;
    count = header->count;
    for (i = 0; i < count; i++) {
        ((func_803602D4_StructEntry **)arg1)[i]->data->flags &= ~0x200;
    }
}
