#include "context.h"

typedef struct func_801CDE00_StructEntry {
    u8 pad0[0x30];
    u8 *data;
} func_801CDE00_StructEntry;
typedef struct func_801CDE00_Struct {
    u8 pad0[0x24];
    func_801CDE00_StructEntry *entry;
    u8 pad28[0x6C];
    u8 count;
    u8 pad95[2];
    u8 index;
} func_801CDE00_Struct;
typedef struct func_801CDE00_StructTable {
    u16 entries[7][3];
} func_801CDE00_StructTable;
extern func_801CDE00_StructTable D_801E13E4;
extern void func_8012CF8C(void *, s32 *, u16, s32);

u8 func_801CDE00(func_801CDE00_Struct *arg0, s32 arg1) {
    volatile s32 pad;
    s32 *data;
    func_801CDE00_StructTable table = D_801E13E4;
    u16 id;
    s32 value;

    {
        s32 i;
        u8 result;
        u8 index;
        void **entry;

        index = arg0->index - 6;
        id = table.entries[index][0];
        value = table.entries[index][1];
        i =func_801CDA0C(arg0, id, D_801E13D4[table.entries[index][2]], arg1);
        result = i;
        if (i != 0) {
            return result;
        }
        data = (s32 *)(arg0->entry->data + 0x40);
        func_8012CF8C(arg0, data, id, value);
        if (arg0->count >= 2) {
            func_80006214(arg0);
            i = 1;
            if (arg0->count >= 2) {
                entry = (void **)((u8 *)D_8008DA88 + 4);
                do {
                    *(s32 *)(*(u8 **)((u8 *)*entry + 0x30) + 0x40) = *data;
                    i++;
                    entry++;
                } while (i < arg0->count);
            }
        }
        return result;
    }
}
