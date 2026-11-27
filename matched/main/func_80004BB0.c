#include "common.h"
#define ZQ(p,l) p##_##l
#define ZP(p,l) ZQ(p,l)
#define zA_36 func_80004EE8_ctx36
#define zA_51 func_80004EE8
extern u16 D_80037A30[];
typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;
extern func_80004310_Struct D_800892B0;
u8 func_80004D20(s32 arg0, u8 *arg1);
extern u8 *func_80004EE8(s32, u8 *);


typedef struct func_80004BB0_StructEntry {
    s32 command;
    s32 address;
} func_80004BB0_StructEntry;

typedef struct func_80004BB0_StructState {
    u8 pad[0x42BC];
    s32 used;
    u8 pad2[0x8];
    u8 active;
    u8 pad3[0x3];
    u32 limit;
    s32 total;
    u8 pad4[0x20];
    func_80004BB0_StructEntry *current;
} func_80004BB0_StructState;

extern func_80004BB0_StructEntry *D_800429B8[];
extern u8 D_80037744[];

#define ST ((func_80004BB0_StructState *)&D_800892B0)
/* stripped debug print: the flag test stays in the source, the print itself compiles to nothing */
#define DPRINT(args) ((void)(args))

s32 func_80004BB0(u16 arg0, s32 arg1) {
    s32 index;
    s32 offset;
    s32 base;
    s32 address;
    s32 command;
    u8 active;
    func_80004BB0_StructEntry *entry;

    index = 0;
    active = ST->active;
    if (active == 0) {
        ST->current = D_800429B8[arg0];
    }
    if (D_80037744[0] != 0) {
        DPRINT((arg0, arg1));
    }
    while (arg0 >= D_80037A30[index]) {
        index += 2;
        if (D_80037A30[index] == 0) {
            return 0;
        }
    }
    offset = arg1 - (D_80037A30[index + 1] << 24);
    if (active == 0) {
        ST->active = 1;
    }
    entry = ST->current;
    command = entry->command;
    base = entry->address + offset;
    while (command != 0) {
        if (D_80037744[0] != 0) {
            DPRINT((command, entry->address + offset));
        }
        if (ST->limit < entry->address + offset - base + ST->used) {
            if (D_80037744[0] != 0) {
                DPRINT((ST->limit, ST->used));
            }
            ST->used = 0;
            return 0;
        }
        func_80004D20(command, (u8 *)(entry->address + offset));
        ST->current++;
        entry = ST->current;
        command = entry->command;
    }
    address = entry->address;
    ST->active = 0;
    ST->total = ST->total + address + offset - base + ST->used;
    return 1;
}
