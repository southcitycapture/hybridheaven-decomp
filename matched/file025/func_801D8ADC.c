#include "context.h"

struct func_801D8ADC_StructData {
    u8 pad[0x24];
    s32 flags;
    u8 pad28[8];
    s32 callback;
    u8 pad34[0x14];
    u8 r, g, b, a;
};
struct func_801D8ADC_StructObject {
    u8 pad[0x2C];
    struct func_801D8ADC_StructData *data;
};
struct func_801D8ADC_StructList {
    u8 pad[4];
    s32 *entries;
    u8 pad8[4];
    u16 count;
};
struct func_801D8ADC_StructRoot {
    u8 pad[0x5C];
    struct func_801D8ADC_StructList *list;
};
extern u8 D_801DA138[];

void func_801D8ADC(u8 arg0) {
    s32 offset;
    s32 *entry;
    struct func_801D8ADC_StructObject **object;
    struct func_801D8ADC_StructList *list;
    struct func_801D8ADC_StructData *data;

    func_80006214(D_801E1BB0);
    list = ((struct func_801D8ADC_StructRoot *)D_801E1BB0)->list;
    entry = list->entries;
    offset = 1;
    if (list->count >= 2) {
        do {
            object = (struct func_801D8ADC_StructObject **)(D_8008DA88 + offset * 4);
            if (entry[offset] < 0) {
            } else {
                data = (*object)->data;
                data->flags |= 0x100;
                (*object)->data->callback = (s32)D_801DA138 | 0x40000000;
                (*object)->data->r = 0xFF;
                (*object)->data->g = 0xFF;
                (*object)->data->b = 0xFF;
                (*object)->data->a = arg0;
            }
            offset++;
        } while (offset < list->count);
    }
}
