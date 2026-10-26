#include "common.h"
extern void (*D_80216D10[])(void *, s32);


typedef struct func_8023A398_StructData {
    u8 pad[0xA];
    u8 value;
} func_8023A398_StructData;

typedef struct func_8023A398_StructInner {
    u8 pad[0x2D4];
    func_8023A398_StructData *data;
} func_8023A398_StructInner;

typedef struct func_8023A398_StructOuter {
    u8 pad[0x98];
    func_8023A398_StructInner *inner;
} func_8023A398_StructOuter;

typedef struct func_8023A398_StructEntry {
    func_8023A398_StructData *data;
    u32 pad4;
} func_8023A398_StructEntry;

typedef struct func_8023A398_StructTable {
    u8 pad[8];
    func_8023A398_StructEntry entries[1];
} func_8023A398_StructTable;

extern func_8023A398_StructTable *D_8024088C;

u8 func_8023A398(func_8023A398_StructOuter *arg0, u8 arg1) {
    func_8023A398_StructInner *inner;

    inner = arg0->inner;
    inner->data = D_8024088C->entries[arg1].data;
    return inner->data->value;
}

extern s8 D_8023A398(void *, s32);
